#include<stdio.h>
//#pragma warning(once:6031)		/*	to solve error - scanf()	*/
//#define _CRT_SECURE_NO_WARNINGS

int r_lower(int c);

main() {
	char s[20];

	for (int i = 0; i < (sizeof(s) / sizeof(s[0])); ++i)
		//s[i] = getchar();
		scanf("%c", &s[i]);

	for (int i = 0; i < (sizeof(s) / sizeof(s[0])); ++i) {
		s[i] = r_lower(s[i]);
	}
	for (int i = 0; i < (sizeof(s) / sizeof(s[0])); ++i)
		/*putchar(s[i]);*/
		printf("%c", s[i]);


	/*int ch = 'A';
	r_lower(ch);
	printf("%c", ch);*/
}

int r_lower(int c) {
	if (c >= 'A' && c <= 'Z')
		return c + 'a' - 'A';
	else
		return c;
}