#include<stdio.h>
/*	统计空格，制表符和换行符个数	*/

main() {
	int c;		/*	receive input from keyboard	*/
	int nspace, ntable, nline;
	
	nspace = ntable = nline = 0;
	while ((c = getchar()) != EOF) {
		if (c == ' ')
			++nspace;
		if (c == '\t')
			++ntable;
		if (c == '\n')
			++nline;
	}
	printf("Space = %d\nTable = %d\nLine = %d\n", nspace, ntable, nline);
}