#include<stdio.h>
#define YES 1
#define NO 0

int hoti(char s[]);

/*	test	(0x2E)	*/
main() {
	/*	pre test collective	*/
	char s[50] = "0x2E";		//	I have 0x2E pens.

	printf("%s was convert to %d\n", s, hoti(s));

	return 0;
}

/*	把十六进制数字组成的字符串转换为与之等价的整型值		*/
int hoti(char s[]) {
	int hexdigit, i, inhex, n;

	i = 0;
	if (s[i] == '0') {		//跳过可选的0x或0X
		++i;
		if (s[i] == 'x' || s[i] == 'X')
			++i;
	}

	n = 0;			//需要返回的值
	inhex = YES;	//assume无效的十六进制值
	for (; inhex == YES; ++i) {
		if (s[i] >= '0' && s[i] <= '9')
			hexdigit = s[i] - '0';
		else if (s[i] >= 'a' && s[i] <= 'f')
			hexdigit = s[i] - 'a' + 10;
		else if (s[i] >= 'A' && s[i] <= 'F')
			hexdigit = s[i] - 'A' + 10;		//exemplify: E -- (E-A+10 = 14)
		else
			inhex = NO;		//转换结束以及判断是否合法
		if (inhex == YES)
			n = 16 * n + hexdigit;
	}
	return n;
}