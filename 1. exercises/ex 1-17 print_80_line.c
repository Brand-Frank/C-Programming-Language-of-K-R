#include<stdio.h>
#define MAXLINE 1000
#define LONGLINE 80
/*	打印长度大于80个字符的所有输入行	*/

int getline(char s[], int lim);

main() {
	int len;
	char line[MAXLINE];

	while ((len = getline(line, MAXLINE)) > 0) {
		if (len > LONGLINE)
			printf("%s", line);
	}
	return 0;
}
/*
int getline(char s[], int lim) {
	int c, i, j;

	j = 0;
	for (i = 0; (c = getchar()) != EOF && c != '\n'; ++i) {
		if (i < lim - 2) {
			s[j] = c;
			++j;
		}

		if (c == '\n') {
			s[j] = c;
			++j;
			++i;
		}
	}
	s[j] = '\0';
	return i;
}
*/


int getline(char s[], int lim) {
	char c = 0, i;

	for (i = 0; (c = getchar()) != EOF && c != '\n'; ++i) {
		if (c == 'q')	//replace EOF with q to quit!
			break;
		s[i] = c;		//将输入存入数组中
	}
	if (c == '\n') {
		s[i] = c;		//将输入存入数组中
		++i;			//记录当前数组的元素个数
	}

	s[i] = '\0';	//当碰到换行符时，最后一位置'\0'.
	return i;		//不包括'\0'.
}
