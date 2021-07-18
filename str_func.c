#include <stdio.h>
#include "str_func.h"

/* all functions in this header expects string to end with a '\0' character */

int get_string(char s[], int lim) {
    int c, i;

    for(i=0; i<lim-1 && (c=getchar())!=EOF && c!='\n'; ++i)
        s[i] = c;

    return i;
}

void print_string(char s[]) {
    int i;

    i = 0;
    while (s[i] != '\0')
        putchar(s[i++]);

}

/*
* Function: squeeze
* -----------------
* deletes each character in str1 that matches with any character in str2
*/
void squeeze(char str1[], char str2[]) {
    int i, j, k;
    
    k = 0;
    for (i = 0; str1[i] != '\0'; ++i) {
        j = 0;
        while (str2[j] != '\0' && str1[i] != str2[j])
            ++j;
        if (str2[j] == '\0')
            str1[k++] = str1[i];
    }
    str1[k] = '\0';
}

/*
* Function: any
* -------------
* returns the first location in string str1 where any character from the string srt2
* occours, -1 if str1 contains no character from str2.
*/
int any(char str1[], char str2[]) {
    int i, j;

    i = 0;
    while (str1[i] != '\0') {
        j = 0;
        while (str2[j] != '\0' && str1[i] != str2[j])
            ++j;
        if (str2[j] != '\0')
            return i;
        ++i;
    }
    
    return -1;
}

/*
* Function: findsubstr
* --------------------
* returns the index of the leftmost occurrence stbstr in line, or -1 if notfound
*/
int findsubstr(char line[], char substr[]) {
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
