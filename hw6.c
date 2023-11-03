#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
	int num[5];
	printf("Please input five integers: ");
	scanf("%d %d %d %d %d", &num[0], &num[1], &num[2], &num[3], &num[4]);
	for (int j = 0; j < 2; j++) {
		if (j == 0) {
			printf("\nOdd numbers: ");
		}
		else {
			printf("\nEven numbers: ");
		}
		for (int i = 0; i < sizeof(num)/4; i++) {
			if ((num[i] + j) % 2 != 0) {
				printf("%d ", num[i]);
			}
		}
	}
}