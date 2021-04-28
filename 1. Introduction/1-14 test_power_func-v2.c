#include<stdio.h>
/*	Description: test Power() function.	 v-2	*/

int power(int base, int n);

int main() {
	int i;

	printf("FUNCTION - power(x,y) - x^y\ny\t2^y\t(-3)^y\n\n");
	for (i = 0; i < 10; i++)
		printf("%d\t%d\t%d\n", i, power(2, i), power(-3, i));	//printf()从右往左执行
	return 0;
}

/*	Function:	power() - 求底数base的n次幂	*/
int power(int base, int n) {
	int p;

	for (p = 1; n > 0; --n)
		p = p * base;
	return p;
}