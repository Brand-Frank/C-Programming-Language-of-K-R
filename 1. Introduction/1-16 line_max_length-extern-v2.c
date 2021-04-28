#include<stdio.h>
#define MAXLINE 1000
/*	Description: 允许输入行的最大值
*	- extern 共享内存(share memory)
*/

int max;	/*	目前为止最长行长度	*/
char line[MAXLINE];
char longest[MAXLINE];

int getline(void);
void copy(void);

main() {
	int len;
	extern int max;
	extern char longest[];

	max = 0;
	while ((len = getline()) > 0) {
		if (len > max) {
			max = len;
			copy();
		}
	}
	if (max > 0)
		printf("%s", longest);
	return 0;
}



/*	getline()	将一行读入到s并返回其长度	*/
int getline(void) {
	char c, i;
	extern char line[];

	for (i = 0; i < MAXLINE-1 && (c = getchar()) != EOF && c != '\n'; ++i) {
		if (c == 'q')	//replace EOF with q to quit!
			break;
		line[i] = c;
	}
	if (c == '\n') {
		line[i] = c;
		++i;
	}

	line[i] = '\0';	//当碰到换行符时，最后一位置'\0'.
	return i;		//不包括'\0'.
}

/*	copy()		将from复制到to,假定to足够大	*/
void copy(void) {
	int i;
	extern char line[], longest[];

	i = 0;
	while ((longest[i] = line[i]) != '\0')
		++i;
}