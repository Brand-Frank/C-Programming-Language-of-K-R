#include<stdio.h>
/*	Description: 统计各个数字、空白符（包括空格符、制表符及换行符）以及所有其它字符出现的次数。
*/


int main() {
	int c;	/*	gethchar*/
	int i, nwhite, nother;
	int ndigit[10];	/*	store number from 0 to 10	*/

	nwhite = nother = 0;	/*	初始化	*/
	for (i = 0; i < 10; i++) {
		ndigit[i] = 0;
	}

	while ((c = getchar()) != EOF) {
		if (c >= '0' && c <= '9')
			++ndigit[c - '0'];	/*	当c在范围内时，对应位置上的值加一	*/
		else if (c == ' ' || c == '\t' || c == '\n')
			++nwhite;
		else if (c == 'q')		/*	对原书的改变，按键q停止*/
			break;
		else
			++nother;
	}
	printf("Digits = ");
	for (i = 0; i < 10; i++)
		printf("\t%d", ndigit[i]);
	printf("\nwhite space = %d\nother = %d\n", nwhite, nother);	/*	BUG?	*/
	return 0;
}
