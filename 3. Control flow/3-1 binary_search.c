#include<stdio.h>

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
	while (low <= high) {
		mid = (low + high) / 2;

		if (x < v[mid])
			high = mid - 1;
		else if (x > v[mid])
			low = mid + 1;
		else
			return mid+1;	//数组下标(从0开始) + 1
	}
	return -1;		//没有匹配的值
}