#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>/*
int stPay = 1000000;

void deposit(unsigned int input)
{
	stPay += input;
	printf("�Ա��� �Ϸ�Ǿ����ϴ�.");
}

void withdraw(unsigned int input)
{
	if (input <= stPay) {
		stPay -= input;
		printf("����� �Ϸ�Ǿ����ϴ�.");
	}
	else {
		printf("�ܾ��� �����մϴ�.");
	}
}

void check_balance()
{
	printf("\n���� �ܰ�� %d���Դϴ�.\n", stPay);
}

int main(void) {
	int start = 1;
	printf("\n==== �������� ATM���Դϴ�. ====\n1. �Ա�\n2. ���\n3. �ܾ� ��ȸ\n4. ����\n���ϴ� �۾� ��ȣ�� �����ϼ���: ");
	while (start == 1) {
		int num;
		scanf("%d", &num);
		if (num < 1 || num > 4) {
			while (1) {
				printf("�ùٸ� �۾� ��ȣ�� �����ϼ���. ");
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
			printf("�Ա��� �ݾ��� �Է��ϼ���: ");
			scanf("%d", &input);
			deposit(input);
			check_balance();
			break;
		case 2:
			printf("����� �ݾ��� �Է��ϼ���: ");
			scanf("%d", &input);
			withdraw(input);
			check_balance();
			break;
		case 3:
			check_balance();
			break;
		case 4:
			printf("�ȳ��� ������.");
			start = 0;
			break;
		default:
			break;
		}

	}

	return 0;
}
*/