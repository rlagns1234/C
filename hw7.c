#include <stdio.h>

void print(int arr[], int n) {
	printf("arr%d: ", n);
	for (int i = 0; i < 6; i++) {
		printf("%d ", *(arr + i));
	}
	printf("\n");
}

int main(void) {
	int arr1[6] = {1, 2, 3, 4, 5, 6};
	int arr2[6] = {7, 8, 9, 10, 11, 12 };
	int* ptr1 = arr1;
	int* ptr2 = arr2;
	print(arr1, 1);
	print(arr2, 2);
	printf("\nafter swap\n");
	for (int i = 0; i < 6; i++) {
		int temp = *(ptr1+i);
		*(ptr1 + i) = *(ptr2 + i);
		*(ptr2 + i) = temp;
	}
	print(arr1, 1);
	print(arr2, 2);
}