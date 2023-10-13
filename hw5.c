#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
	int num = 0;
	printf("Please enter a number: ");
	scanf("%d", &num);
	int b = binary(num);
	printf("%d", b);
	return 0;
}

int binary(int n) {
	if (n == 1) {
		return n;
	}
	else {
		int num = n / 2;
		int result = n % 2;
		int b = binary(num);
		return b * 10 + result;
	}
}