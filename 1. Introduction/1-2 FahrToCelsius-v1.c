#include<stdio.h>
/*	Description: print Fahr to Celsuis while fahr = 0, 20, ..., 300	
	- lower to upper
	- int
*/

main() {
	int fahr, celsuis;		/*	int	*/ 
	int lower = 0, upper = 300, step = 20;
	fahr = lower;
	while (fahr <= upper) {
		celsuis = 5 * (fahr - 32) / 9;
		printf("Fahr:%4d\tCelsuis:%6d\n", fahr, celsuis);
		fahr += step;
	}
}
