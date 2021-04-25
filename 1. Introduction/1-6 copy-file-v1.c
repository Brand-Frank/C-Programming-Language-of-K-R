#include<stdio.h>

/*	Description: 将输入复制到输出 - v1
	- EOF: end of file(文件结束)
*/

main() {
	int c;	/*	int	*/

	c = getchar();
	while (c != EOF) {
		//if (c == 'q')	break;
		putchar(c);
		c = getchar();
	}
}