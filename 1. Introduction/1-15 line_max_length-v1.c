#include<stdio.h>
#define MAXLINE 1000
/*	Description: 允许输入行的最大值	
*	main()		比较长度并将结果更新至copy函数
*	getline()	获取输入，计算长度
*	copy()		保存已知的最长输入行
*/


int getline(char s[], int lim);
void copy(char to[], char from[]);

main() {
	int len;	/*	当前行长度	*/
	int max;	/*	目前为止最长行长度	*/
	char line[MAXLINE];		/*	当前的输入行	*/
	char longest[MAXLINE];	/*	保存当前的最长行	*/

	max = 0;
	while ((len = getline(line, MAXLINE)) > 0) {
		if (len > max) {
			max = len;
			copy(longest, line);
		}
	}
	if (max > 0)
		printf("%s", longest);
	return 0;
}



/*	getline()	将一行读入到s并返回其长度
*	args1: s[]	获取输入行
*	args2: lim	限制最长长度
*	retrun:int	输入行的长度
*/
int getline(char s[], int lim) {
	char c, i;

	for (i = 0; i < lim - 1 && (c = getchar()) != EOF && c != '\n'; ++i) {
		if (c == 'q')	//replace EOF with q to quit!
			break;
		s[i] = c;
	}
	if (c == '\n') {
		s[i] = c;
		++i;
	}

	s[i] = '\0';	//当碰到换行符时，最后一位置'\0'.
	return i;		//不包括'\0'.
}

/*	copy()		将from复制到to,假定to足够大	*/
void copy(char to[], char from[]) {
	int i;

	i = 0;
	while ((to[i] = from[i]) != '\0')
		++i;
}