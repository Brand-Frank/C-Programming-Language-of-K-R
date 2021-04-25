#include<stdio.h>

/*	Description: 统计输入的字符数量 v-1
	- EOF: end of file(文件结束)
*/
main() {
	int nc = 0, c;	/* number of characters*/

	while ((c = getchar()) != EOF) {
		putchar(c);
		++nc;
	}
	printf("nc = %d\n", nc);
}