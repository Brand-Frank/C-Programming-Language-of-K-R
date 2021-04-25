#include<stdio.h>

/*	Description: 将输入复制到输出 - v2
	- EOF: end of file(文件结束)
*/

main() {
	int c;	/*	int	*/

	while ((c = getchar()) != EOF) {
		if (c == 'q')	break;
		putchar(c);
	}
}