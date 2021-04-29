#include<stdio.h>

float celsius(float fahr);

main() {
	float fahr;
	float lower = 0, upper = 300, step = 20;

	for (fahr = lower; fahr <= upper; fahr += step)
		printf("%3.0f\t%5.2f\n", fahr, celsius(fahr));
}

float celsius(float fahr) {
	return (5.0 / 9.0) * (fahr - 32.0);
}