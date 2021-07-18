#include <stdio.h>
#define MAX 100U

int strindex(char[], char[]);
int getln(char[], int);

int main() {
    int found;
    char line[] = "found";
    char pattern[] = "found";

    printf("index: %d\n", strindex(line, pattern));
    return 0;
}

int strindex(char line[], char substr[]) {
    int i, j, k;

    for(i=0; line[i] != '\0'; ++i) {
        for(j=i, k=0; (substr[k] != '\0') && (substr[k] == line[j]); ++j, ++k) {
            ; // NOP
        }

        if ((substr[k] == '\0') && (k > 0)) {
            return i;
        }
    }
    return -1;
}

int getln(char line[], int max) {
    
    return 0;
}
