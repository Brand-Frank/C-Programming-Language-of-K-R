#include<stdio.h>

/*	Description: 统计输入的字符数量 v-2
	- long
	- for()	空语句
*/
main() {
	double nc;	/* double	*/
	for (nc = 0; getchar() != EOF; ++nc)
		;
	
	printf("nc = %.0f\n", nc);
}