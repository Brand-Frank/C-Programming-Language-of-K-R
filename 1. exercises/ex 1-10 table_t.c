#include<stdio.h>
/*	将输入复制到输出，制表符换为\t，回退符替换为\b,反斜杠\代替为\\	*/

main() {
	int c;	/*	receive input from keyboard	*/

	while ((c = getchar()) != EOF) {
		if (c == '\t')
			printf("\\t");
		else if (c == '\b')
			printf("\\b");
		else if (c == '\\')
			printf("\\\\");
		else
			putchar(c);
	}
}