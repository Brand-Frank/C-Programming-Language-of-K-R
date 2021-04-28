/*	打印输入单词的长度的直方图 - 水平方向	*/

#include<stdio.h>
#define MAXHIST 15
#define MAXWORD 11
#define IN 1
#define OUT 0

main() {
	int c;	/*	receive input from keyboard	*/
	int i, nc, state;
	int len;			/*	length of each bar		*/
	int maxvalue;		/*	maxium value for wl[]	*/
	int overflow;		/*	number of overflow words*/
	int wl[MAXWORD];	/*	word length counters	*/

	state = OUT;
	nc = 0;				/*	number of chars in a word	*/
	overflow = 0;		/*	number of words >= MAXWORD	*/

	for (i = 0; i < MAXWORD; ++i)
		wl[i] = 0;

	while ((c = getchar()) != EOF) {
		if (c == ' ' || c == '\n' || c == '\t') {
			state = OUT;
			if (nc > 0)
				if (nc < MAXWORD)
					++wl[nc];
				else
					++overflow;		/*	处理超出部分的单词	*/
			nc = 0;		/*	在单词外边	*/
		}
		else if (state == OUT) {	/*	每个单词的第一个字母	*/
			state = IN;
			nc = 1;		/*	beginning of a new words	*/
		}
		else
			++nc;		/*	inside a word	*/
	}

	maxvalue = 0;
	for (i = 1; i < MAXWORD; ++i) {
		if (wl[i] > maxvalue)
			maxvalue = wl[i];		/*	找出直方图中的最大值	*/
	}

	for (i = 1; i < MAXWORD; ++i) {
		printf("%5d - %5d : ", i, wl[i]);
		if (wl[i] > 0) {
			if ((len = wl[i] * MAXHIST / maxvalue) <= 0)
				len = 1;
		}
		else
			len = 0;

		while (len > 0) {
			putchar('*');
			--len;
		}
		putchar('\n');
	}
	if (overflow > 0)
		printf("There are %d words >= %d\n", overflow, MAXWORD);
}