#include"Header.h"
#include<stdio.h>
#include<stdlib.h>

void raz(int& n, int& m)
{
	printf("\033[033menter number of  line\033[0m\n");
	while (proverka(n) || n < 0)
	{
		printf("\033[031menter number of line\033[0m\n");
		rewind(stdin);
	}
	printf("\033[033menter number of  columns\033[0m\n");
	while (proverka(m) || m < 0)
	{
		printf("\033[031menter number of columns\033[0m\n");
		rewind(stdin);
	}

}


int** memory(int& n, int& m)
{
	int** mas;
	mas = (int**)calloc(n, sizeof(int*));
	for (int i = 0; i < n; i++)
	{
		if (mas)
			mas[i] = (int*)calloc(m, sizeof(int));
	}
	return mas;
}
void fillArray(int** arr, int& n, int& m)
{

	for (int i = 0; i < n; i++)
	{


		for (int j = 0; j < m; j++)
		{

			printf("\033[093menter the number %d %d\033[0m\n", i + 1, j + 1);
			while (proverka(arr[i][j]))
			{
				printf("\033[031menter the number\033[0m\n");
				rewind(stdin);
			}

		}

	}

}
void sortShell(int** arr, int& n, int& m)
{
	for (int gap = m / 2; gap > 0; gap /= 2)
	{
		int fl;
		do
		{
			fl = 0;
			for (int i = gap, j = 0; i < n; i++, j++)
			{
				int tmp = arr[0][j];
				for (int k = 0; k < m; k++)
					if (arr[i][k] > arr[j][k])
					{
						tmp = arr[j][k];
						arr[j][k] = arr[i][k];
						arr[i][k] = tmp;
						fl = 1;
					}

			}
		} while (fl);

	}


	printArray(arr, n, m);

}


void printArray(int** arr, int& n, int& m)
{
	printf("\033[094marr :\033[0m \n");
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++)
			printf("%3d  ", arr[i][j]);
		printf("\n");
	}


}

void clearMemory(int** arr, int& n)
{
	for (int i = 0; i < n; i++)
	{
		free(arr[i]);
	}
	free(arr);

}

bool proverka(int& n)
{
	return scanf_s("%d", &n) != 1 || getchar() != '\n';
}