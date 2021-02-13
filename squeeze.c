#include <stdio.h>
#include "str_func.h"

#define MAXLEN 1000

void squeeze(char str1[], char str2[]);

int main() {
    int st[MAXLEN], st2[MAXLEN];

    if(!get_string(st, MAXLEN))
        return -1;
    if(!get_string(st2, MAXLEN))
        return -1;

    printf("index: %d\n", any(st, st2));

    return 0;
}

