#include<stdio.h>

/*	a worst version	*/
int binary_search(int x, int v[], int n);

main() {
	int v[10];
	for (int i = 0; i < 10; ++i)
		scanf("%d", &v[i]);

	printf("9 is in pos(%d).\n", binary_search(9, v, 10));

	return 0;
}

int binary_search(int x, int v[], int n) {
	int low, mid, high;

	low = 0;
	high = n - 1;
	mid = (low + high) / 2;
	while (low <= high && x != v[mid]) {
		if (x < v[mid])
			high = mid - 1;
		else if (x > v[mid])
			low = mid + 1;
	}

	if(x == v[mid])
		return mid + 1;	//数组下标(从0开始) + 1
	else
		return -1;		//没有匹配的值
}