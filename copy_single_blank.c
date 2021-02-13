#include <stdio.h>
#include <stdbool.h>


int main() {
	bool flag = false;
	int c;

	while ((c = getchar()) != EOF) {
		if (c == ' ' && flag)
			;
		else {
			putchar(c);
			if (c == ' ')
				flag = true;
			else
				flag = false;
		}
	}
	return 0;
}

