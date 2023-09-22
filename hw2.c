#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
	double kilometer = 0.0;
	printf("Please enter kilometers: ");
	scanf("%lf", &kilometer);
	printf("%.1f km is equal to %.1f miles.", kilometer, kilometer/1.609);
	return 0;
}