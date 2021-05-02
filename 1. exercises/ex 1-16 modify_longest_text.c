#include<stdio.h>
#define MAXLINE 100

int getline(char line[], int maxline);
void copy(char to[], char from[]);

/*	修改打印最长文本的程序主程序，使之可以打印任意长度的输入行，并尽可能多地打印文本	*/
main() {
	int len;				/*	current line length	*/
	int max;				/*	maximum length seen so far	*/
	char line[MAXLINE];		/*	current input line	*/
	char longest[MAXLINE];	/*	longest line saved here	*/

	max = 0;
	while ((len = getline(line, MAXLINE)) > 0) {
		printf("%d\toutput: %s\n", len, line);		/*	print current line and its length	*/
		if (len > max) {
			max = len;
			copy(longest, line);
		}
	}
	if (max > 0)
		printf("%s", longest);
	return 0;
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

/*	将from复制到to	*/
void copy(char to[], char from[]) {
	int i;

	i = 0;
	while ((to[i] = from[i]) != '\0')
		++i;
}