#include<stdio.h>
#define OUT 0
#define IN 1
/*	统计单词个数	*/

main() {
	int c;	/*	receive input from keyboard	*/
	int wc, nl, nc;
	int state = OUT;
	wc = nl = nc = 0;
	while ((c = getchar()) != EOF) {
		++nc;
		if (c == '\n')
			++nl;
		if (c == ' ' || c == '\n' || c == '\t')
			state = OUT;
		else if (state == OUT) {
			state = IN;
			++wc;
		}
	}
	printf("chars = %d\nlines = %d\nwords = %d\n", nc, nl, wc);
}

/*	test
* 
*/