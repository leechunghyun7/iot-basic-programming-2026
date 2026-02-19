//주소록 프로그램 step 4
#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_CONTRACTS 100//100명 주소록
#define INIT_CAPACITY 10 //초깃값 10 구성
#define NAME_LEN 31//이름 최대길이
#define PHONE_LEN 20
#define EMAIL_LEN 65
#define ADDR_LEN 129
#define MEMO_LEN 129

typedef struct _contact {
    char name[NAME_LEN];
    char phone[PHONE_LEN];
    char address[ADDR_LEN];
    char email[EMAIL_LEN];
    char memo[MEMO_LEN];
} Contact;

//변수 선언

//static Contact contacts[MAX_CONTRACTS];
static Contact* contacts = NULL;//동적배열로
static int count = 0;
static int capacity = 0;

// 함수 선언
static void print_menu(void);
static int read_menu(void);
static void read_line(char* buf, int size);
static void add_contact(void);
static void list_contacts(void);
static void search_contact(void);
static void print_contact(int index);
static void update_contact(void);
static void delete_contact(void);
static int save_contacts(const char* filename);
static int load_contacts(const char* filename);
static void trim_newline(char* s);

//step 6
static int contains_pipe(const char* s);//입력 문자열중에 
static int find_by_phone(const char* phone); //같은 전화번호 중복체크
static void sort_by_name(void);//이름순 정렬 qsort 함수 사용 std lib에 포함된 함수
static int cmp_contact_name(const void* a, const void* b);

static int ab_init(void); //주소록 초기화
static void ab_free(void);//주소록 메모리 해제
static int ab_ensure_capacity(int need);//용량 추가여부 확인


int main(void) {
    int choice = 0;

    if (!ab_init()) {
        printf("주소록 초기화 실패\n");
        return 0;
    }

    load_contacts("contacts.txt"); //프로그램 실행하면 데이터 로드!

    while (1) {
        print_menu();
        choice = read_menu();

        switch (choice) {
        case 1:
            add_contact();
            break;
        case 2:
            list_contacts();
            break;
        case 3:
            search_contact();
            break;
        case 4:
            update_contact();
            break;
        case 5:
            delete_contact();
            break;
        case 6:
            //정렬
                sort_by_name();
            break;
        case 7:
            save_contacts("contacts.txt");
            printf("프로그램 종료\n");
            return 0;
        //case 7:
            // save_contacts("contacts.txt");
           // break;
        //case 8://데이터 불러오기
            //load_contacts("contacts.txt");
           // break;
        default:
            puts("잘못된 선택입니다.");
            break;
        }
        puts("");
    }
    return 0;
}

static void print_menu(void) {
    puts("========================================");
    puts("              주소록 프로그램(step 4)");
    puts("========================================");
    puts("1. 추가");
    puts("2. 목록");
    puts("3. 검색");
    puts("4. 수정");
    puts("5. 삭제");
    puts("6. 정렬");
    puts("7. 종료");
    //puts("7. 저장");
    //puts("8. 로드");
    puts("========================================");
}

static int contains_pipe(const char* s) {
    return (strchr(s, '|') != NULL);
}

static int find_by_phone(const char* phone) {
    int i;
    for (i = 0; i < count; i++) {
        if (strcmp(contacts[i].phone, phone) == 0) {
            return i;
        }
    }
    return -1; //일치하는게 없음
}

static int cmp_contact_name(const void* a, const void* b) {
    const Contact* ca = (const  Contact*)a;
    const Contact* cb = (const Contact*)b;

    return strcmp(ca->name, (*cb).name);        //1,0,-1

}

static void sort_by_name(void) {
    if (count <= 1) {
        puts("정렬 불필요!");
        return;
    }
    qsort(contacts, count, sizeof(Contact), cmp_contact_name);
    puts("이름순 정렬 완료!");
}

static int read_menu(void) {

    int choice, ch;

    printf("선택> ");
    if (scanf("%d", &choice) != 1) {
        while ((ch = getchar()) != '\n' && ch != EOF) {}
        return -1;
    }
    while ((ch = getchar()) != '\n' && ch != EOF) {}
    return choice;
}

static void read_line(char* buf, int size) {
    if (fgets(buf, size, stdin) == NULL) {
        buf[0] = '\0';
        return;
    }
    buf[strcspn(buf, "\n")] = '\0';
}

static void trim_newline(char* s) {
    s[strcspn(s, "\n")] = '\0';
}

static void add_contact(void) {
    if (count >= MAX_CONTRACTS) {
        puts("주소록 최대인원 100명에 도달했습니다");
        return;
    }
    puts("[ADD] 새 연락처 입력");

    printf("이름: ");
    read_line(contacts[count].name, NAME_LEN);
    if (contains_pipe(contacts[count].name)) {
        puts("'|'문자는 사용할 수 없습니다/ 다시 추가하세요");
        return;//함수종료
    }

    printf("전화[최대 20자]: ");
    read_line(contacts[count].phone, PHONE_LEN);

    if (strlen(contacts[count].phone) == 0) {
        puts("전화번호는 필수입니다.");
        return;
    }

    {
        int dup = find_by_phone(contacts[count].phone);
        if (dup != -1) {
            printf("동일 전화번호 존재(NO:%d,이름:%10s)\n", dup, contacts[dup].name);
        }
    }

    printf("주소: ");
    read_line(contacts[count].address, ADDR_LEN);
    if (contains_pipe(contacts[count].address)) {

        puts("'|'문자는 사용할 수 없습니다/ 다시 추가하세요");
        return;//함수종료
    }

    printf("이메일: ");
    read_line(contacts[count].email, EMAIL_LEN);

    printf("메모: ");
    read_line(contacts[count].memo, MEMO_LEN);
    if (contains_pipe(contacts[count].memo)) {
        puts("'|'문자는 사용할 수 없습니다/ 다시 추가하세요");
        return;//함수종료
    }

    count++;
    puts("추가 완료!");
}

static void list_contacts(void) {
    int i;

    if (count == 0) {
        puts("[리스트] 저장된 연락처 없음.");
        return;
    }

    puts("[LIST] 연락처 목록");
    puts("-----------------------------------------------------------");
    printf("%4s | %15s | %15s | %20s | %20s\n", "NO", "Name", "Phone", "Address", "Email");
    puts("-----------------------------------------------------------");

    for (i = 0; i < count; i++) {
        printf("%4d | %-11s | %-15s | %-20s | %-20s\n",
            i + 1, contacts[i].name, contacts[i].phone, contacts[i].address, contacts[i].email);
    }
    puts("-----------------------------------------------------------");
}

static void search_contact(void) {
    char keyword[NAME_LEN];
    int found = 0;
    int i;

    if (count == 0) {
        puts("검색할 연락처가 없습니다");
        return;
    }

    printf("검색할 이름 입력: ");
    read_line(keyword, NAME_LEN);

    if (strlen(keyword) == 0) {
        puts("검색할 이름이 없습니다.");
        return;
    }

    puts("검색 결과:");
    puts("---------------------------");

    for (i = 0; i < count; i++) {
        if (strstr(contacts[i].name, keyword) != NULL) {
            printf("순번: %d\n", i + 1);
            print_contact(i);
            puts("---------------------------");
            found = 1;
        }
    }
    if (!found) {
        puts("일치하는 연락처가 없습니다");
    }
}

static void print_contact(int index) {
    printf("이름: %s\n", contacts[index].name);
    printf("전화: %s\n", contacts[index].phone);
    printf("주소: %s\n", contacts[index].address);
    printf("이메일: %s\n", contacts[index].email);
    printf("메모장: %s\n", contacts[index].memo);
}

static void update_contact(void) {
    char buf[MEMO_LEN];
    int index, ch;

    if (count == 0) {
        puts("수정할 연락처가 없습니다");
        return;
    }

    printf("[UPDATE] 수정할 번호 (1~%d)> ", count);
    if (scanf("%d", &index) != 1) {
        while ((ch = getchar()) != '\n' && ch != EOF) {}
        puts("숫자 입력 요망");
        return;
    }
    while ((ch = getchar()) != '\n' && ch != EOF) {}

    if (index < 1 || index > count) {
        puts("입력범위 초과");
        return;
    }

    puts("현재 정보:");
    print_contact(index - 1);
    puts("------------------------");
    puts("새 값 입력");

    printf("이름 (%s)> ", contacts[index - 1].name);
    read_line(buf, NAME_LEN);
    if (buf[0] != '\0') {
        strncpy(contacts[index - 1].name, buf, NAME_LEN);
        contacts[index - 1].name[NAME_LEN - 1] = '\0';
    }

    printf("주소 (%s)> ", contacts[index - 1].address);
    read_line(buf, ADDR_LEN);
    if (buf[0] != '\0') {
        strncpy(contacts[index - 1].address, buf, ADDR_LEN);
        contacts[index - 1].address[ADDR_LEN - 1] = '\0';
    }

    printf("이메일 (%s)> ", contacts[index - 1].email);
    read_line(buf, EMAIL_LEN);
    if (buf[0] != '\0') {
        strncpy(contacts[index - 1].email, buf, EMAIL_LEN);
        contacts[index - 1].email[EMAIL_LEN - 1] = '\0';
    }

    printf("메모 (%s)> ", contacts[index - 1].memo);
    read_line(buf, MEMO_LEN);
    if (buf[0] != '\0') {
        strncpy(contacts[index - 1].memo, buf, MEMO_LEN);
        contacts[index - 1].memo[MEMO_LEN - 1] = '\0';
    }
}

static void delete_contact(void) {
    int index, i, ch;
    char yn[8];

    if (count == 0) {
        puts("삭제할 연락처가 없습니다.");
        return;
    }

    printf("[Delete] 삭제할 번호 (1~%d)> ", count);
    if (scanf("%d", &index) != 1) {
        while ((ch = getchar()) != '\n' && ch != EOF) {}
        puts("숫자 입력 요망");
        return;
    }
    while ((ch = getchar()) != '\n' && ch != EOF) {}

    if (index < 1 || index > count) {
        puts("입력범위 초과");
        return;
    }

    puts("삭제할 정보:");
    print_contact(index - 1);

    printf("정말 삭제 하시겠습니까(y/n)> ");
    read_line(yn, sizeof(yn));
    if (!(yn[0] == 'y' || yn[0] == 'Y')) {
        puts("삭제 취소합니다");
        return;
    }

    for (i = index - 1; i < count - 1; i++) {
        contacts[i] = contacts[i + 1];
    }
    count--;
    puts("삭제 완료!");
}

static int save_contacts(const char* filename) {
    FILE* fp = fopen(filename, "w");
    int i;

    if (!fp) {
        puts("파일 저장 실패! 경로나 권한을 확인하세요.");
        return 0;
    }

    for (i = 0; i < count; i++) {
        fprintf(fp, "%s|%s|%s|%s|%s\n",
            contacts[i].name,
            contacts[i].phone,
            contacts[i].address,
            contacts[i].email,
            contacts[i].memo
        );
    }

    fclose(fp);
    puts("저장 완료!");
    return 1; // 한건 성공
}

static int load_contacts(const char* filename) {
    FILE* fp = fopen(filename, "r");
    char line[512];

    if (!fp) {
        puts("파일 로드 실패! 경로나 권한을 확인하세요.");
        return 0;
    }

    count = 0;
    while (fgets(line, sizeof(line), fp) != NULL && count < MAX_CONTRACTS) {
        char* name, * phone, * address, * email, * memo;

        trim_newline(line);

        // '|'로 필드 분리
        name = strtok(line, "|");
        phone = strtok(NULL, "|");
        address = strtok(NULL, "|");
        email = strtok(NULL, "|");
        memo = strtok(NULL, "|");

        // 필드가 하나라도 없으면 건너뜀
        if (!name || !phone || !address || !email || !memo) continue;

        // contacts 배열에 안전하게 복사
        strncpy(contacts[count].name, name, NAME_LEN);
        contacts[count].name[NAME_LEN - 1] = '\0';

        strncpy(contacts[count].phone, phone, PHONE_LEN);
        contacts[count].phone[PHONE_LEN - 1] = '\0';

        strncpy(contacts[count].address, address, ADDR_LEN);
        contacts[count].address[ADDR_LEN - 1] = '\0';

        strncpy(contacts[count].email, email, EMAIL_LEN);
        contacts[count].email[EMAIL_LEN - 1] = '\0';

        strncpy(contacts[count].memo, memo, MEMO_LEN);
        contacts[count].memo[MEMO_LEN - 1] = '\0';

        count++;
    }

    fclose(fp);
    puts("로드 완료!");
    return 1;
}
static int ab_init(void) {
    capacity = INIT_CAPACITY;
    count = 0;
    contacts = (Contact*)malloc(sizeof(Contact) * capacity);
    if (!contacts) {
        puts("메모리 할당 실패!!");
        return 0;
    }
    return 1;
}

static void ab_free(void) {
    free(contacts);
    contacts = NULL;
    count = 0;
    capacity = 0;
}
//주소록 크기가 작으면 동적으로 늘리는 함수
static int ab_ensure_capacity(int need) {
    Contact* newbuf;
    int newcap;

    if (need <=capacity) return 1;

    newcap = capacity;
    while (newcap < need) {
        newcap = newcap * 2;
    }
    newbuf = (Contact*)realloc(contacts, sizeof(Contact) * newcap);
    if (!newbuf) {
        puts("메모리 재할당 실패(메모리 부족)!!");
        return 0;

    }
    contacts = newbuf;
    capacity = newcap;
    return 1;
}

#pragma endregion