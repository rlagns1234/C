#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>
#include <string.h>

int main(void) {
	int n = 0;
	char s[] = "a";
	printf("Please enter a number: ");
	scanf("%d", &n);
	for (int i = 2; i <= sqrt(n); i++) {
		if (n % i == 0) {
			strcpy(s, "not");
			break;
		}
	}
	printf("\nIt is %s prime number.", s);
}