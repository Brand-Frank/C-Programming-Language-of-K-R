#include<stdio.h>

int bitcount(unsigned x);

main() {
	unsigned int x;

	scanf("%d", &x);

	printf("n(1) = %d\n", bitcount(x));

	return 0;
}

/*	bitcount()函数: 统计x中值位1的二进制位数	*/
int bitcount(unsigned x) {
	int i;

	for (i = 0; x != 0; x &= x - 1)		//把x右移，最低位和1对比，为1则 i 加一
		i++;

	return i;
}