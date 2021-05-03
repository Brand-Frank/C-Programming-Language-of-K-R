#include<stdio.h>

void r_strcat(char s[], char t[]);

main() {
	char s[15] = "Zhang";
	char t[8] = "Jinlin";
	char s1[15];
	char t1[8];

	scanf("%s", s1);
	scanf("%s", t1);

	r_strcat(s, t);
	r_strcat(s1, t1);

	//for (int i = 0; i < (sizeof(s)/sizeof(s[0])); ++i)
	printf("%s\n\n", s);
	printf("%s\n", s1);
}

/*	strcat()函数:将字符串t连接到字符串s的末尾	*/
void r_strcat(char s[], char t[]) {
	int i, j;

	i = j = 0;
	while (s[i] != '\0')		/*	判断是否为字符串s的末尾	*/	//当前i为'\0'则结束
		i++;
	while ((s[i++] = t[j++]) != '\0')	/*	从上一个i之后开始-拷贝	*/
		;
}