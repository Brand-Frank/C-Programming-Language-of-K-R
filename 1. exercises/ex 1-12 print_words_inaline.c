#include<stdio.h>
#define OUT 0
#define IN 1
/*	每行一个单词的形式打印输出	*/

main() {
	int c;	/*	receive input from keyboard	*/
	int state = OUT;

	while ((c = getchar()) != EOF) {
		if (c == ' ' || c == '\n' || c == '\t') {
			if (state == IN) {		/*	有空格且在单词内部--换行	*/
				putchar('\n');
				state = OUT;
			}
		}
		else if (state == OUT) {
			state = IN;
			putchar(c);
		}
		else
			putchar(c);
	}
}
