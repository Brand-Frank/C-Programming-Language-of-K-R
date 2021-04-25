#include<stdio.h>
#include<conio.h>

/*	Description: print ASCII table
*	- from 0 to 128
*/

main() {
	int c;
	
	printf("\t\t\t\tASCII(128)\t\t\n");
	
	for (int i = 0; i < 128; i++) {
		printf("%d:\t%c\t", i, i);
		if (i % 5 == 0)
			printf("\n");
	}

	/*while ((c = getchar()) != EOF) {
		printf("%d:\t%c\n", c, c);
		putchar(c);
	}*/
}