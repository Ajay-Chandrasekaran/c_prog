/* converts hexadecimal digits to integer */
#include <stdio.h>
#include <ctype.h>
#include <math.h>
#define BUFFER 32

int isvalid(char s[], int size);
int getstring(char s[], int lim);
int parsehex(char s[], int size);

int main() {
    char hex[BUFFER];
    int len = 0, res = -1;
    
    if ((len = getstring(hex, BUFFER)) > 0 && isvalid(hex, len))
        printf("\nInteger: %d\n", parsehex(hex, len));

    printf("**%d**\n", res);
    return 0;

}

int isvalid(char s[], int size) {
    int i;

    i = 0;
    while (i<size && ((s[i] >= 'A' && s[i] <= 'F') || (s[i] >= '0' && s[i] <= '9')))
        ++i;

    return (i == size);
}

int getstring(char s[], int lim) {
    int c, i;

    for(i=0; i<lim-1 && (c=getchar())!=EOF && c!='\n'; ++i)
        s[i] = c;

    s[i] = '\0';

    return i;
}

int parsehex(char s[], int size) {
    int i, val;
    
    val = 0;
    for(i = 0; i < size; ++i) {
        if (isdigit(s[i]))
            val = val + (s[i] - '0') * pow(16, size-i-1);
        else
            val = val + (s[i] - 'A' + 10) * pow(16, size-i-1);
    }

    return val;
}
