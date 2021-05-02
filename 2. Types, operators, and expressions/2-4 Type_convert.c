#include<stdio.h>

main() {

	//当把较长的整型转换为较短的整型或char型时，超出的高位部分将被丢弃。
	//int i = 69;
	//char c = 69;

	//c = i;
	//i = c;
	///*c = i;*/

	//printf("i = %d\nc = %c\n", i, c);

	//x是float类型 i是int类型，那么x=i和i=x在执行的时候都要进行类型转换
	float x = 78.0;
	int i = 80;
	x = i;		//int to float --> x = 80.0
	i = x;		//float to int --> i = 80
	printf("x = %f\ni = %d", x, i);
}
