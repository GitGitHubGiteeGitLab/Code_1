#define _CRT_SECURE_NO_WARNINGS 1
#include "game.h"


void menu() {
    printf("\033[32m*******************\n");
    printf("*****0.Exit********\n");
    printf("*****1.Game********\n");
    printf("*******************\n\033[0m");
}

void menuChoose() {
    printf("\033[32m*******************\n");
    printf("*****1.Easy********\n");
    printf("*****2.Medium******\n");
    printf("*****3.Difficult***\n");
    printf("*******************\n\033[0m");
}