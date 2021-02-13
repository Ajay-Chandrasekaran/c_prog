#include <stdio.h>

#define MAXLINE 1000

int atoi(char s[]);

int main() {
    int n;
    char s[MAXLINE];

    while (getline(s, MAXLINE) <= 0)
        ;

    n = atoi(s);
    printf("0 is %d\n", '0');
    printf("%d\n", n);

    return 0;
}


int atoi(char s[]) {
    int i, n;

    n = 0;
    for (i = 0; s[i] >= '0' && s[i] <= '9'; ++i)
        n = 10 * n + (s[i] - '0');
    
    return n;
}

