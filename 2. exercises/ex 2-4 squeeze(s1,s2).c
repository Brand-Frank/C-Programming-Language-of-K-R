#include<stdio.h>

void squeeze(char s1[], char s2[]);

main() {
	char s1[] = "abcdef";
	char s2[] = "agchei";

	printf("s1 = %s\n", s1);
	printf("s2 = %s\n", s2);

	squeeze(s1, s2);

	printf("\ns1 = %s\n", s1);
	printf("s2 = %s\n", s2);

	return 0;
}

/*	squeeze():将字符串s1中的任何与s2中字符匹配的字符都删除	*/
void squeeze(char s1[], char s2[]) {
	int i, j, k;

	for (i = k = 0; s1[i] != '\0'; ++i) {
		for (j = 0; s2[j] != '\0' && s2[j] != s1[i]; ++j)
			;
		if (s2[j] == '\0')
			s1[k++] = s1[i];	//把s1中被删除的字符补足
	}
	s1[k] = '\0';
}