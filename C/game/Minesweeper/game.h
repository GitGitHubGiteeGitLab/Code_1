#pragma once
#define ROW 9
#define COL 9
#define ROWS ROW+2
#define COLS COL+2
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<windows.h>
#define Easy_Count 6
#define Medium_Count 10
#define Difficult_Count 13

void game();

void menuChoose();

void initBoard(char(*board)[COLS], char rows, char cols, char ch);

void DisplayBoard(char(*board)[COLS], char row, char col);

void SetMine1(char(*board)[COLS], int row, int col);

void SetMine2(char(*board)[COLS], int row, int col);

void SetMine3(char(*board)[COLS], int row, int col);

void is_Mine1(char(*mine)[COLS], char(*show)[COLS], int row, int col);

void is_Mine2(char(*mine)[COLS], char(*show)[COLS], int row, int col);

void is_Mine3(char(*mine)[COLS], char(*show)[COLS], int row, int col);

int mineCount(char(*mine)[COLS], char(*show)[COLS], int row, int col, int x, int y);

void revealNonMineCells(char(*mine)[COLS], char(*show)[COLS], int row, int col, int x, int y, int* pwin);

void MarkMine(char(*show)[COLS], int row, int col, int *pwin, int count);