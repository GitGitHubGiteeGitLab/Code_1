#define _CRT_SECURE_NO_WARNINGS 1
#include "game.h"

int main() {
	srand((unsigned)time(NULL));
	int n = 0;
	do {
		menu();
		printf("Input->");
		scanf("%d", &n);
		switch (n) {
		case 0:
				printf("\033[31mExit!!!\n\033[0m");
				break;
		case 1:
				game();
				break;
		default:
				printf("\033[31mWrong!\n\033[0m");
				break;
		}
	} while (n);
	return 0;
}