#include <stdio.h>

#define TABSTOP 8


int main() {
	int i, c;

	while((c = getchar()) != EOF) {
		if (c == '\t')
			for (i=0; i<TABSTOP; ++i)
				putchar(' ');
		else
			putchar(c);
	}
	return 0;
}

