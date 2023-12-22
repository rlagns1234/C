#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
/*
int main(void) {
	int num;
	printf("=== 아이스바 그리기 프로그램 ===");
	while (1) {
		printf("\n아이스바의 크기를 3 이상의 홀수로 입력하세요: ");
		scanf("%d", &num);
		if (num < 3 || num % 2 == 0) {
			printf("\n아이스바의 크기가 범위를 벗어납니다. (짝수 또는 3 미만)\n");
		}
		else {
			break;
		}
	}

	for (int i = 1; i <= num; i++) {
		printf("*");
	}
	printf("\n");
	for (int j = 1; j <= num - 2; j++) {
		for (int i = 1; i <= num; i++) {
			if (i == 1 || i == num || i == ((num / 2) / 1) + 1) {
				printf("*");
			}
			else {
				printf(" ");
			}
		}
		printf("\n");
	}
	for (int i = 1; i <= num; i++) {
		printf("*");
	}
	for (int i = 1; i <= (num / 5) / 1; i++) {
		printf("\n");
		for (int j = 1; j <= num; j++) {
			if (j == ((num / 2) / 1)+1) {
				printf("|");
			}
			else {
				printf(" ");
			}
		}
	}
	return 0;
}
*/