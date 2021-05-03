#include<stdio.h>

unsigned setbits(unsigned x, int p, int n, unsigned y);

main() {
	unsigned int x, y;
	int p, n;
	unsigned int result;

	scanf("%d%d%d%d", &x, &p, &n,&y);		//输入为16进制

	result = setbits(x, p, n, y);
	printf("dec = %d\noct = %o", result, result);

	return 0;
}

/*	将x中从右数第p位开始向右数n位的字段，设置为y中最右边的n位的值		*/
unsigned setbits(unsigned x, int p, int n, unsigned y) {
	return (x & ~((~(~0 << n)) << (p + 1 - n))) | ((y & (~((~0) << n))) << (p + 1 - n));
}