#include <stdio.h>

#define TABSTOP 8

int main() {
	int i, j, c, nb;

	nb = 0;
	while ((c = getchar()) != EOF) {
		if (c != ' ') {
			for (i=0; i<nb/TABSTOP; ++i)
				putchar('\t');
			for (i=0; i<nb%TABSTOP; ++i)
				putchar(' ');
			nb = 0;
			
			putchar(c);
		} else {
			++nb;
		}
	}
	
	return 0;
}

