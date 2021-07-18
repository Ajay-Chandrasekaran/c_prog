#include <stdio.h>
#include "str_func.h"
#define MAX 100

int strindex(char[], char[]);

char pattern[] = "ould";

int main() {
    int found = 0;
    char line[MAX];

    while (get_string(line, MAX) > 0)
        if ((found = strindex(line, pattern)) >= 0) {
            printf("%d\n", found);
        }
    return found;
}

int strindex(char line[], char substr[]) {
    int i, j, k;
    int found = -1;

    for(i=0; line[i] != '\0'; ++i) {
        for(j=i, k=0; (substr[k] != '\0') && (substr[k] == line[j]); ++j, ++k) {
            ; // NOP
        }

        if ((substr[k] == '\0') && (k > 0)) {
            found = i;
        }
    }
    return found;
}
