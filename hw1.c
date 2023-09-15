#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
	int input1, input2;
	printf("Input two integers: ");
	scanf("%d %d", &input1, &input2);
	printf("\n10 & 15 = %d\n10 | 15 = %d\n10 ^ 15 = %d\n", 10 & 15, 10 | 15, 10 ^ 15);
	return 0;
}