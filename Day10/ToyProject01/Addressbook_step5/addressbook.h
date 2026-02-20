#ifndef ADDRESSBOOK_H
#define ADDRESSBPPK_H

#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_CONTRACTS 100
#define NAME_LEN 31
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
} Contact;//이후 Contact 이름으로 사용

#endif
