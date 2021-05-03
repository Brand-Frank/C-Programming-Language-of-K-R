#include<stdio.h>
#define MAXSIZE 100
#define LIM 10

main() {
	//origin for() loop was replaced by down loop.
	/*
	for (i = 0; i < LIM - 1 && (c = getchar()) != '\n' && c != EOF; ++i)
		s[i] = c;
	*/
	int c, i;
	char s[MAXSIZE];

	//methods 1:
	/*for (i = 0; i < LIM - 1; ++i) {
		if ((c = getchar()) != '\n') {
			if (c != EOF)
				s[i] = c;
		}
	}*/

	//methods 2:
	enum loop { NO, YES };
	enum loop okloop = YES;

	i = 0;
	while (okloop == YES) {
		if (i >= LIM - 1)
			okloop = NO;
		else if ((c = getchar()) == '\n')
			okloop = NO;
		else if (c == EOF)
			okloop = NO;
		else {
			s[i] = c;
			++i;
		}
	}

	return 0;
}