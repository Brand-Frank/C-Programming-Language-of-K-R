#include<stdio.h>
/*	Description: print Fahr to Celsuis while fahr = 0, 20, ..., 300
	- lower to upper
	- float
*/

main() {
	float fahr, celsuis;	/*	float	*/
	int lower = 0, upper = 300, step = 20;
	fahr = lower;
	while (fahr <= upper) {
		//celsuis = 5 * (fahr - 32) / 9;
		celsuis = 5.0 / 9 * (fahr - 32.0);
		printf("Fahr:%4f\tCelsuis:%6.1f\n", fahr, celsuis);
		fahr += step;
	}
}