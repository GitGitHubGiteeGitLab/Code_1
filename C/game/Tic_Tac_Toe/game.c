#define _CRT_SECURE_NO_WARNINGS 1
#include "game.h"

void game() {
	char ch = 0;//防意外
	char board[ROW][COL];
	initBoard(board, ROW, COL);
	DisplayBoard(board, ROW, COL);
	while (1) {
		Player(board, ROW, COL);
		DisplayBoard(board, ROW, COL); 
		ch = Win(board, ROW, COL);//移一次判断一次
		if (ch != ' ')break;
		Computer(board, ROW, COL);
		DisplayBoard(board, ROW, COL);
		ch = Win(board, ROW, COL);
		if (ch != ' ')break;

	}
	//放到循环体外，简化判断
	 if(ch == '#') {
		printf("Computer Win\n");
	 }
	 else if (ch == '*') {
		printf("Player Win\n");

	 }
	 else{
		printf("Equals\n");

	 }
}