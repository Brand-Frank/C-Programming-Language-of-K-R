#include<stdio.h>

#define swap(t,x,y){	t _z;	\
						_z = y;	\
						y = x;	\
						x = _z;	}
main() {
	int x = 8, y = 100;
	printf("Before\nx = %d\ty=%d\n", x, y);
	swap(int, x, y);
	printf("After\nx = %d\ty=%d\n", x, y);

	return 0;
}