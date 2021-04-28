#include<stdio.h>
#define NONBLANK 'a'

/*	将输入复制到输出，连续的空格用一个空格代替	*/

main() {
	int c, lastc;

	lastc = NONBLANK;
	while ((c = getchar()) != EOF) {
		if (c != ' ')
			putchar(c);
		else if (lastc != ' ')
			putchar(c);
		lastc = c;
	}
}