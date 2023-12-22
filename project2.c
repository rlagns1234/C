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
		printf("그림 번호 선택(1. main, 2.flower, 3.castle, 기타:종료): ");
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
			printf("안녕히가세요.");
			continue;
		}

		printf("오른쪽으로 몇 칸 이동할까요? ");
		scanf("%d", &move_right);
		printf("아래로 몇 줄 이동할까요? ");
		scanf("%d", &move_down);
		printf("선택한 그림을 해당 위치로부터 출력합니다.\n");
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