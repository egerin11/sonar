#ifndef HEADER
#define HEADER
#include<Windows.h>
#define N 100
#define M 100

void fillArray(int mas[N][M], int& row);
bool proverka(int& col);
void printArray(int mas[N][M], int row);
void max_element(int mas[N][M], int row);
#endif
