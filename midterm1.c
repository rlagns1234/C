#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>/*
int stPay = 1000000;

void deposit(unsigned int input)
{
	stPay += input;
	printf("입금이 완료되었습니다.");
}

void withdraw(unsigned int input)
{
	if (input <= stPay) {
		stPay -= input;
		printf("출금이 완료되었습니다.");
	}
	else {
		printf("잔액이 부족합니다.");
	}
}

void check_balance()
{
	printf("\n현재 잔고는 %d원입니다.\n", stPay);
}

int main(void) {
	int start = 1;
	printf("\n==== ㅅㅁ은행 ATM기입니다. ====\n1. 입금\n2. 출금\n3. 잔액 조회\n4. 종료\n원하는 작업 번호를 선택하세요: ");
	while (start == 1) {
		int num;
		scanf("%d", &num);
		if (num < 1 || num > 4) {
			while (1) {
				printf("올바른 작업 번호를 선택하세요. ");
				scanf("%d", &num);
				if (num >= 1 && num <= 4) {
					break;
				}
			}
		}
		int input;
		switch (num)
		{
		case 1:
			printf("입금할 금액을 입력하세요: ");
			scanf("%d", &input);
			deposit(input);
			check_balance();
			break;
		case 2:
			printf("출금할 금액을 입력하세요: ");
			scanf("%d", &input);
			withdraw(input);
			check_balance();
			break;
		case 3:
			check_balance();
			break;
		case 4:
			printf("안녕히 가세요.");
			start = 0;
			break;
		default:
			break;
		}

	}

	return 0;
}
*/