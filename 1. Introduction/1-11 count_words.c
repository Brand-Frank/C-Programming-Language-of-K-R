#include<stdio.h>
/*	Description: 统计单词个数
*/

#define IN 0	/*	in word		*/
#define OUT 1	/* out of word	*/

main() {
	int c, nl, nw, nc;
	int state;

	state = OUT;
	nl = nw = nc = 0;	//= (nl = (nw = (nc=0)))
	while ((c = getchar()) != EOF) {
		++nc;			/*	number of characters	*/
		if (c == '\n')
			++nl;		/*	number of lines	*/
		if (c == ' ' || c == '\n' || c == '\t')
			state = OUT;
		if (state == OUT) {
			state = IN;
			++nw;		/*	number of words	*/
		}
	}
	printf("nl = %d\nnw = %d\nnt = %d\n", nl, nw, nc);
}