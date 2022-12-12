#include "Header.h"
#include <time.h>
#include <stdio.h>
#include <stdlib.h>
#include<Windows.h>

void fillArray(int mas[N][M], int& row)
{
	int ans = -1;


	while (ans != 1 && ans != 0)
	{
		printf("input array random(1) or arms(0)\n");
		rewind(stdin);

		while (proverka(ans)) {
			printf("input array random(1) or arms(0)\n");
			rewind(stdin);
		}
	}
	printf("input value of array\n");
	while (proverka(row) || row < 0 || row>100)
	{
		printf("input value of array\n");
		rewind(stdin);
	}
	if (ans == 1)
	{
		srand(time(NULL));
		for (int i = 0; i < row; i++)
		{
			for (int j = 0; j < row; j++)
				mas[i][j] = rand() % 100 - 50;

		}

	}
	else
	{
		printf("input\n");
		for (int i = 0; i < row; i++)
		{
			for (int j = 0; j < row; j++)
			{
				int a;

				while (proverka(a))
				{
					printf("enter number : ");
					rewind(stdin);
				}

				mas[i][j] = a;
			}


		}

	}

}
bool proverka(int& col)
{
	return scanf_s("%d", &col) != 1 || getchar() != '\n';
}

void printArray(int mas[N][M], int row)
{
	for (int i = 0; i < row; i++)

	{
		for (int j = 0; j < row; j++)
		{
			printf("%d\t", mas[i][j]);

		}
		printf("\n");
	}

}
void max_element(int mas[N][M], int row)
{
int max = 0;
	for (int i = 0; i <row-i; i++)
	
		for (int j = 0; j < (row / 2 + 1)-i; j++)
				if (mas[i][j] > max && mas[i][j]%2==1)
					max = mas[i][j];
		/*if (i < row / 2 + 1)
		{*/
			
		/*}*/
		/*else
			for (int j = 0; j < (row - i); j++)
				if (mas[i][j] > max && mas[i][j] % 2 == 1)
					max = mas[i][j];
	}*/
	printf("max element = %d", max);
}