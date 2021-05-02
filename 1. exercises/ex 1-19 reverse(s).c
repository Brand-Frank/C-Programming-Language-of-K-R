#include<stdio.h>
#define MAXLINE 1000

int getline(char s[], int maxline);
void reverse(char s[]);

/*	reverse(s)将字符串s中的字符顺序颠倒过来，每次颠倒一个输入行中的字符顺序	*/
main() {
	char line[MAXLINE];

	while (getline(line, MAXLINE) > 0) {
		reverse(line);
		printf("%s\n", line);
	}
}

void reverse(char s[]) {
	int i, j;
	char temp;

	i = 0;
	while (s[i] != '\0')	/*	找到字符串的末尾	*/
		++i;
	--i;		/*	排除'\0'	*/

	if (s[i] == '\n')
		--i;

	j = 0;
	while (j < i) {
		temp = s[j];
		s[j] = s[i];
		s[i] = temp;
		--i;
		++j;
	}
}

/*	获取输入，并返回长度	*/
int getline(char s[], int lim) {
	int c, i, j;

	j = 0;
	for (i = 0; (c = getchar()) != EOF && c != '\n'; ++i) {
		if (i < lim - 2) {		/*	s[lim-2]='\n'	s[lim-1]='\0'	*/
			s[j] = c;
			++j;
		}
		if (c == '\n') {
			s[j] = c;
			++j;		/*	记录复制到字符串s中的字符个数	*/
			++i;		/*	记录字符串长度(包括换行符)		*/
		}
		/*if (c == 'q')
			break;*/
	}
	s[j] = '\0';
	return i;
}