#include "Header.h"
#include <time.h>
#include <stdio.h>
#include <stdlib.h>

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
			printf(" %d ", mas[i][j]);

		}
		printf("\n");
	}
	
}

void str_stl(int mas[N][M], int row)
{
	int z = -1;
	for (int i = 0; i < row; i++)
	{
		int k = 0;
		for (int j = 0; j < row; j++)
		{
			k += mas[i][j];
		}
		if (k == 0)
		{
			z = i;
			break;
		}



	}
	if (z != -1)
	{
		for (int j = 0; j < row; j++)
			mas[j][z] /= 2;
		printf("\n");
		printArray(mas, row);
	}
	else
	{
		printf("no string with all zeros");
	}


}
