#define _CRT_SECURE_NO_WARNINGS 1
#pragma once
#include "game.h"
#include<stdio.h>

void initBoard(char board[ROW][COL], int row, int col) {
	for (int i = 0; i < row; i++) {
		for (int j = 0; j < col; j++) {
			board[i][j] = ' ';//空格初始化
		}
	}

}

void DisplayBoard(char board[ROW][COL], int row, int col) {
	for (int i = 0; i < row; i++) {
		for (int j = 0; j < col; j++) {
			 printf(" %c ", board[i][j]);//打印元素，两边留空格
			 if(j < col - 1)printf("|");
		}
		printf("\n");//换行打下划线
		if(i < row - 1){
			for (int k = 0; k < col; k++) {
				printf("---");
				if (k < col - 1)printf("|");
			}
		}
        printf("\n");
	}
}

void Player(char board[ROW][COL], int row, int col) {
	int m, n;
	printf("Player：\n");
	while (1) {
		printf("Location:");
		scanf("%d%d", &m, &n);
		//越界检查要有，先判断坐标合法性，做判断值3
		if (m >= 1 && m <= row && n >= 1 && n <= row) {
			if (board[m - 1][n - 1] == ' ') {
				board[m - 1][n - 1] = '*';
				break;
			}else printf("Invalid input!\n");
		}
		else {
			printf("Invalid input!\n");
		}
	}

}

void Computer(char  board[ROW][COL], int row, int col) {
	int m, n;
	printf("Computer:\n");
	while (1) {
		m = rand() % row, n = rand() % col;
		if (board[m][n] == ' ') {
			board[m][n] = '#';
			break;
		}
	}
}

char Win(char board[ROW][COL], int row, int col) {
	for (int i = 0; i < row; i++) {
		if (board[i][0] == board[i][1] && board[i][1] == board[i][2] && board[i][0] != ' ') {
			return board[i][0];//简化
		}
	}
	for (int j = 0; j < col; j++) {
		if (board[0][j] == board[1][j] && board[1][j] == board[2][j] && board[0][j] != ' ') {
			return board[0][j];//简化
		}
	}
	for (int i = 0; i < row - 1; i++) {
		if (board[i][i] != board[i + 1][i + 1])break;
		if (board[i][i] ==' ')break;//不能赋值 = ==
		if (i == row - 2) return board[i][i];//不能赋值 = ==,不是board[i]
	}
	for (int i = 0, j = col - 1; j > 1; i++, j--) {
		if (board[i][j] != board[i + 1][j - 1])break;
		if (board[i][j] == ' ')break;
		if (i == col - 2) return board[i][j];//不是board[i][i]
	}
	for (int i = 0; i < row ; i++) {//不是row - 1
		for (int j = 0; j < col ; j++) {
			if (board[i][j] == ' ')return ' ';
		}
	}
	return 'e';
}