#define _CRT_SECURE_NO_WARNINGS 1
#include "game.h"


int main() {
	int input;
	srand(time(0));
	do {
		menu();
		printf("\033[32mInput->\033[0m");
		scanf("%d", &input);
		switch (input) {
		case 0:
			printf("\033[31mExit\n\033[0m");
			break;
		case 1:
			game();
			break;
		default:
			printf("\033[31mWrong\n\033[0m");
			break;
		}
		if (input == 1)system("pause");
		if (input) {
			Sleep(1000);
			system("cls");
		}
	} while (input);

	return 0;
}