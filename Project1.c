#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
/*
int main(void) {
	double pay = 0;	//�����ݾ�
	char select = "";	//�������
	char check = "";
	double cDiscount = 0;	//û������
	double basicA = 0;	//�⺻����
	double npA = 0;	//���̹����� �Ӵ� ��������
	double nbbA = 0;	//���̹����� �߰�����
	double nhA = 0;	//���̹� ����ī�� �߰�����
	double naverM = 0;	//���̹� ����� ����
	double allA = 0;	//�� ������
	printf("=== ���̹����� ���� ��� ���α׷� ===\n�ֹ����� �Է��ϼ���: ");
	scanf("%lf", &pay); 
	printf("\n=== ���� ���� ��� ===\na)NPay�Ӵ� ���̹����� ��������\tb)NPay�Ӵ� �Ϲ� ��������\tc)���� �������\nd)���̹� ����ī�� �������\te)û������ �Ｚī�����\tf)�Ϲ� ī�����\n���� ������ �Է��ϼ���: ");
	scanf(" %c", &select);
	printf(" %c", select);
	while (!(select >= 'a' && select <= 'f')) {
		printf("\n�߸� �Է��ϼ̽��ϴ�. ���Է� �ٶ��ϴ�.\n���� ������ �Է��ϼ���: ");
		scanf(" %c", &select);
		if (select >= 'a' && select <= 'f') {
			break;
		}
	}
	printf("\n=== ���̹� ����ʿ� ���ԵǾ� �ֳ��� (y/n)?");
	scanf(" %c", &check);
	printf("\n=== ���� �� ���� ���� ===\n�ֹ��ݾ� %.0lf��", pay);
	if (pay > 0) {
		if (select == 'e' && pay > 50000){
			cDiscount = ((pay / 20) < 5000 ? pay / 20 : 5000);
			printf("\nû������ %.0lf��", cDiscount);
		}
		basicA = pay / 100;
		printf("\n�⺻���� %.0lf��", basicA);
		switch (select)
		{
		case 'a':
			npA = pay * 15 / 1000;
			nbbA = pay * 5 / 1000;
			printf("\n���̹����� �Ӵ� ���� ���� %.0lf��\n���̹����� �߰����� %.0lf��", npA, nbbA);
			break;
		case 'b':
			npA = pay * 15 / 1000;
			printf("\n���̹����� �Ӵ� ���� ���� %.0lf��", npA);
			break;
		case 'd':
			nhA = ((pay * 5 / 100) < 10000 ? (pay * 5 / 100) : 10000);
			printf("\n���̹� ����ī�� �߰����� %.0lf��", nhA);
		default:
			break;
		}
		if (check == 'y') {
			if (pay > 200000) {
				naverM += 200000 * 4 / 100;
				naverM += (pay - 200000) / 100;
			}
			else {
				naverM += pay * 4 / 100;
			}
			if (naverM > 20000) {
				naverM = 20000;
			}
			printf("\n���̹� ����� �߰����� %.0lf��", naverM);
		}
	}
	else {
		printf("\n�⺻ ���� 0��");
	}
	allA = basicA + npA + nbbA + nhA + naverM;
	printf("\n�� �������� %.0lf���Դϴ�.", allA);
	return 0;
}
*/