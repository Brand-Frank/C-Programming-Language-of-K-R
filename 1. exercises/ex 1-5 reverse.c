#include<stdio.h>

main() {
	float fahr, celsius;
	float lower = 0, upper = 300, step = 20;

	printf("Celsius\t  Fahr\n");

	celsius = upper;
	while (celsius >= lower) {
		fahr = (float)(9.0 * celsius / 5.0 + 32.0);
		printf("%3.0f\t%6.1f\n", celsius, fahr);
		celsius -= step;
	}
}