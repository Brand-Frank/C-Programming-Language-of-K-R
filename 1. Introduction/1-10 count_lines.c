#include<stdio.h>

/*	Description: 统计输入的字符的个数和行数 v-1
* 	- while
*	- '\n'
*/
main() {
	int nc = 0, nl = 0;	/* int	*/
	int c;

	while ((c = getchar()) != EOF) {
		++nc;	/*	numbers	*/
		if (c == '\n')
			++nl;
	}

	printf("nc = %d\nnl = %d\n", nc, nl);
}