#include<stdio.h>

unsigned getbits(unsigned x, int p, int n);

main() {
	unsigned int x, p, n;
	unsigned int result;

	scanf("%o%d%d", &x, &p, &n);		//输入为16进制

	result = getbits(x, p, n);
	printf("dec = %d\noct = %o", result, result);

	return 0;
}

/*	返回x中从右数第p位开始向右数n位的字段	*/
unsigned getbits(unsigned x, int p, int n) {
	return (x >> (p + 1 - n)) & ~(~0 << n);
}