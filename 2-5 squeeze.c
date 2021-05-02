#include<stdio.h>

void squeeze(char s[], int c);

main() {
	//char s[5] = "Acsda";
	char s[5] = { 'A','c','s','w','a' };
	int c = 's';
	squeeze(s, c);
	for(int i=0;i<5;++i)
		printf("%c", s[i]);
}

/*	squeeze()函数:从字符串s中删除字符c	*/
void squeeze(char s[], int c) {
	int i, j;

	for (i = 0, j = 0; s[i] != '\0'; i++) {
		if (s[i] != c) {
			s[j] = s[i];	/*	两行相当于 s[j++] = s[i];	*/
			j++;
		}
	}
	s[j] = '\0';
}