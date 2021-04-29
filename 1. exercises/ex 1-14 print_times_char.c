#include<stdio.h>
#include<ctype.h>

#define MAXHIST 15
#define MAXCHAR 128

/*	打印输入中各个字符出现的频度的直方图	
*	1: 初始化数组用于保存0-127的字符
*	2: 按格式打印直方图-设置上限处理方式(超出部分不打印)
*/



main() {
	int c, i;
	int len;		/*	length of each bar	*/
	int maxvalue;	/*	maximum value for cc[]	*/
	int cc[MAXCHAR];/*	character counters	*/

	/*	Initialize the array	*/
	for (i = 0; i < MAXCHAR; ++i)
		cc[i] = 0;

	while ((c = getchar()) != 'q') {	//EOF was replace to q (q to quit)
		if (c < MAXCHAR)
			++cc[c];		/*	c为ASCII对应的数字码	*/
	}

	maxvalue = 0;
	for (i = 0; i < MAXCHAR; ++i) {
		if (cc[i] > maxvalue)
			maxvalue = cc[i];	/*	超出128的部分按128处理	*/
	}

	for (i = 1; i < MAXCHAR; ++i) {
		if (isprint(i))
			printf("%5d - %c - %5d : ", i, i, cc[i]);
		else
			printf("%5d -   - %5d : ", i, cc[i]);
		//if (cc[i] > 0) {
		//	if (len = cc[i] * MAXHIST / maxvalue <= 0)
		//		len = 1;
		//}
		//else
		//	len = 0;

		len = cc[i];	//# 修改部分(modified) #

		while (len > 0) {
			putchar('#');
			--len;
		}
		putchar('\n');
	}
}