#include<stdio.h>
/*	Description: 统计空格/制表符/换行符个数 - v1	
*/

main() {
	int ns = 0, nt = 0, nl = 0, total = 0;
	int c = 0;
	while ((c = getchar()) != EOF) {
		++total;
		if (c == ' ')
			++ns;
		else if (c == '\t')
			++nt;
		else if (c == '\n')
			++nl;
		else
			putchar(c);
	}
	printf("Spaces = %d\tTables = %d\tLines = %d\n", ns, nt, nl);
}