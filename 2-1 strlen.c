#include<stdio.h>

int r_strlen(char str[]);

main() {
	char s[20];

	for (int i = 0; i < (sizeof(s) / sizeof(s[1])); i++)
		s[i] = 0;

	for (int i = 0; i < (sizeof(s) / sizeof(s[1])); i++) {
	/*for (int i = 0; i < 20; i++) {*/
		/*scanf("%c", s[i]);*/
		s[i] = getchar();
		if (s[i] == 'q')
			break;
	}

	printf("len = %d\n", r_strlen(s));

	return 0;
}

/*	ÖØĞ´strlen()º¯Êı	*/
int r_strlen(char str[]) {
	int i;

	i = 0;
	while (str[i] != 'q')
		++i;

	return i;
}