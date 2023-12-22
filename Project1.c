#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
/*
int main(void) {
	double pay = 0;	//결제금액
	char select = "";	//결제방법
	char check = "";
	double cDiscount = 0;	//청구할인
	double basicA = 0;	//기본적립
	double npA = 0;	//네이버페이 머니 결제적립
	double nbbA = 0;	//네이버통장 추가적립
	double nhA = 0;	//네이버 현대카드 추가적립
	double naverM = 0;	//네이버 멤버십 적립
	double allA = 0;	//총 적립액
	printf("=== 네이버페이 결제 계산 프로그램 ===\n주문액을 입력하세요: ");
	scanf("%lf", &pay); 
	printf("\n=== 결제 수단 목록 ===\na)NPay머니 네이버통장 충전결제\tb)NPay머니 일반 충전결제\tc)계좌 간편결제\nd)네이버 현대카드 간편결제\te)청구할인 삼성카드결제\tf)일반 카드결제\n결제 수단을 입력하세요: ");
	scanf(" %c", &select);
	printf(" %c", select);
	while (!(select >= 'a' && select <= 'f')) {
		printf("\n잘못 입력하셨습니다. 재입력 바랍니다.\n결제 수단을 입력하세요: ");
		scanf(" %c", &select);
		if (select >= 'a' && select <= 'f') {
			break;
		}
	}
	printf("\n=== 네이버 멤버십에 가입되어 있나요 (y/n)?");
	scanf(" %c", &check);
	printf("\n=== 결제 및 적립 내역 ===\n주문금액 %.0lf원", pay);
	if (pay > 0) {
		if (select == 'e' && pay > 50000){
			cDiscount = ((pay / 20) < 5000 ? pay / 20 : 5000);
			printf("\n청구할인 %.0lf원", cDiscount);
		}
		basicA = pay / 100;
		printf("\n기본적립 %.0lf원", basicA);
		switch (select)
		{
		case 'a':
			npA = pay * 15 / 1000;
			nbbA = pay * 5 / 1000;
			printf("\n네이버페이 머니 결제 적립 %.0lf원\n네이버통장 추가적립 %.0lf원", npA, nbbA);
			break;
		case 'b':
			npA = pay * 15 / 1000;
			printf("\n네이버페이 머니 결제 적립 %.0lf원", npA);
			break;
		case 'd':
			nhA = ((pay * 5 / 100) < 10000 ? (pay * 5 / 100) : 10000);
			printf("\n네이버 현대카드 추가적립 %.0lf원", nhA);
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
			printf("\n네이버 멤버십 추가적립 %.0lf원", naverM);
		}
	}
	else {
		printf("\n기본 적립 0원");
	}
	allA = basicA + npA + nbbA + nhA + naverM;
	printf("\n총 적립액은 %.0lf원입니다.", allA);
	return 0;
}
*/