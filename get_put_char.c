#include <stdio.h>
#include <stdlib.h>


int main() {
	int c;
	while ((c = getchar()) != EOF) {
		putchar(c);
	}
	printf("\nEOF\n");
	printf("%d", c);
	return 0;
}

