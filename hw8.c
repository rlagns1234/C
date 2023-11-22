#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>

double standardDeviation(int list[], int N) {
	int sum = 0;
	int mean = 0;
	double sd_pow = 0;

	for (int i = 0; i < N; i++) {
		sum += list[i];
	}
	mean = sum / N;
	for (int i = 0; i < N; i++) {
		sd_pow += pow(list[i] - mean, 2);
	}

	return sqrt(sd_pow / N);
}

int main(void) {
	int input[5];
	printf("Enter 5 real numbers: ");
	scanf("%d %d %d %d %d", &input[0], &input[1], &input[2], &input[3], &input[4]);
	double sd = standardDeviation(input, sizeof(input) / sizeof(int));
	printf("Standard Deviation = %.3lf", sd);
	return 0;
}
