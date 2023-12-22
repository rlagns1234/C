#include <stdio.h>
/*
int main(void) {
	int arr[6] = { 1, 2, 3, 4, 5, 6 };
	int* st = arr;
	int* ed = arr + sizeof(arr) / 4 - 1;
	for (int i = 0; i < sizeof(arr) / 8; i++) {
		if (*(st + i) < *(ed - i)) {
			int temp = *(st + i);
			*(st + i) = *(ed - i);
			*(ed - i) = temp;
		}
	}
	for (int j = 0; j < sizeof(arr) / 4; j++) {
		printf("%d", *(arr + j));
	}
}
*/