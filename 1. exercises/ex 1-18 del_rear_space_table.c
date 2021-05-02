#include<stdio.h>
#define MAXLINE 100

int getline(char s[], int maxline);
int removes(char s[]);

/*	删除每个输入行末尾的空格及制表符，并删除完全是空格的行	*/
main() {
	char line[MAXLINE];

	while (getline(line, MAXLINE) > 0) {
		if (removes(line) > 0)		/*	i<0 则为空行	*/
			printf("%s", line);
	}
}

/*	删除字符串s行尾的空格及制表符	*/
int removes(char s[]) {
	int i;

	i = 0;
	while (s[i] != '\n')	/*	找到换行符	*/
		++i;

	--i;	/*	暂时排除换行符'\n'	*/
	while (i >= 0 && (s[i] == ' ' || s[i] == '\t'))
		--i;	/*	遇到空格或制表符就减去	*/

	if (i >= 0) {	/*	判断是否为空行	*/
		++i;
		s[i] = '\n';
		++i;
		s[i] = '\0';
	}
	return i;
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