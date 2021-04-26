#include<stdio.h>
/*	Description: test Power() function.	*/

int power(int base, int n);

main() {
	int i;

	printf("FUNCTION - power(x,y) - x^y\ny\t2^y\t(-3)^y\n\n");
	for (i = 0; i < 10; i++)
		printf("%d\t%d\t%d\n", i, power(2, i), power(-3, i));
	return 0;
}

/*	Function:	power() - 求底数base的n次幂	*/
int power(int base, int n) {
	int i, p;

	p = 1;
	for (i = 1; i <= n; i++)
		p = p * base;
	return p;
}