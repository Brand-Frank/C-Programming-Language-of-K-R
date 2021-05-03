#include<stdio.h>

int lower(int c);

main() {
	char c;

	scanf("%c", &c);

	printf("%c\n", lower(c));

	return 0;
}

/*	lower():将大写字母转换为小写字母	*/
int lower(int c) {
	return (c >= 'A' && c <= 'Z') ? (c + 'a' - 'A') : (c);
}