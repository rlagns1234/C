/*
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include "ascii_art.h"

int main(void) {
	int input = 0;
	int loop = 1;
	char* drow = NULL;
	int move_right = 0;
	int move_down = 0;
	int row = 0;
	int col = 0;
	while(loop){
		printf("�׸� ��ȣ ����(1. main, 2.flower, 3.castle, ��Ÿ:����): ");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			drow = *ascii_main;
			col = sizeof(ascii_main) / sizeof(ascii_main[0]);
			row = sizeof(ascii_main[0]);
			break;
		case 2:
			drow = *ascii_flower;
			col = sizeof(ascii_flower) / sizeof(ascii_flower[0]);
			row = sizeof(ascii_flower[0]);
			break;
		case 3:
			drow = *ascii_castle;
			col = sizeof(ascii_castle) / sizeof(ascii_castle[0]);
			row = sizeof(ascii_castle[0]);
			break;
		default:
			loop = 0;
			printf("�ȳ���������.");
			continue;
		}

		printf("���������� �� ĭ �̵��ұ��? ");
		scanf("%d", &move_right);
		printf("�Ʒ��� �� �� �̵��ұ��? ");
		scanf("%d", &move_down);
		printf("������ �׸��� �ش� ��ġ�κ��� ����մϴ�.\n");
		for (int i = 0; i < col; i++) {
			for (move_down; move_down > 0; --move_down) {
				printf("\n");
			}
			for (int j = 0; j < move_right; j++) {
				printf(" ");
			}
			printf("%s\n", drow + i*row);
		}
		printf("\n");
	}
}
*/