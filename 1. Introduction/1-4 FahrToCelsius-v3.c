#include<stdio.h>
/*	Description: print Fahr to Celsuis while fahr = 0, 20, ..., 300
	- lower to upper
	- for: 适合初始化和增加步长都是单独语句并且逻辑相关的情形。
*/

main() {
	int fahr;
	for (fahr = 0; fahr <= 300; fahr += 20) {	/*	for	*/
		printf("Fahr:%4d\tCelsuis:%6.1f\n", fahr, 5.0 / 9.0 * (fahr - 32.0));
	}
}