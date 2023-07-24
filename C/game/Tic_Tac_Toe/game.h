#pragma once
#include<stdio.h>
#include<windows.h>
#include<stdlib.h>
#define ROW 3
#define COL 3

//菜单
void menu();

//game
void game();

//初始化棋盘
void initBoard(char board[ROW][COL], int row, int col);//为什么char** board不行

//打印棋盘
void DisplayBoard(char board[ROW][COL], int row, int col);

//玩家走
void Player(char board[ROW][COL], int row, int col);

//电脑走
void Computer(char board[ROW][COL], int row, int col);

//判胜负
char Win(char board[ROW][COL], int row, int col);
