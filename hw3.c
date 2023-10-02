#include <stdio.h>

int main(void) {
	for (int i = 0; i < 5; i++) {
		for (int j = 0; j < 4; j++) {
			if (4-i > j) {
				printf(" ");
			}
			else {
				printf("*");
			}
		}
		printf("*");
		for (int k = 0; k < 4; k++) {
			if (i <= k) {
				printf(" ");
			}
			else {
				printf("*");
			}
		}
		printf("\n");
	}
}