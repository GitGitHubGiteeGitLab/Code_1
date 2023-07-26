#define _CRT_SECURE_NO_WARNINGS 1
#include "game.h"

void game() {
	int input;
	char mine[ROWS][COLS];
	char show[ROWS][COLS];
	initBoard(mine, ROWS, COLS, '0');
	initBoard(show, ROWS, COLS, '*');
	do {
		system("cls");
		menuChoose();
		printf("\033[32mInput->\033[0m");
		scanf("%d", &input);
		switch (input) {
		case 1:
			system("cls");
			SetMine1(mine, ROW, COL);
			DisplayBoard(show, ROW, COL);
			is_Mine1(mine, show, ROW, COL);
			break;
		case 2:
			system("cls");
			SetMine2(mine, ROW, COL);
			DisplayBoard(show, ROW, COL);
			is_Mine2(mine, show, ROW, COL);
			break;
		case 3:
			system("cls");
			SetMine3(mine, ROW, COL);
			DisplayBoard(show, ROW, COL);
			is_Mine3(mine, show, ROW, COL);
			break;
		default:
			printf("\033[31mWrong\n\033[0m");
			break;
		}
	} while (input != 1 && input != 2 && input != 3);

}