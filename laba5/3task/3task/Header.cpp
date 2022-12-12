#include"Header.h"
#include<stdio.h>
#include<stdlib.h>

void size(int& n,int &m)
{
	printf("\033[093menter number of  line\033[0m\n");
	while (proverka(n) || n < 0)
	{
		printf("\033[31menter number of line\033[0m\n");
		rewind(stdin);
	}
	printf("\033[093menter number of  columns\033[0m\n");
	while (proverka(m) || m < 0)
	{
		printf("\033[31menter number of columns\033[0m\n");
		rewind(stdin);
	}
	
}


int** memory(int& n, int& m)
{	
	int** mas;
	mas = (int**)calloc(n, sizeof(int*));
	for (int i = 0; i < n; i++)
	{
		if(mas)
		mas[i] = (int*)calloc(m, sizeof(int));
	}
	return mas;
}
void fillArray(int** arr, int& n ,int& m)
{
	
	for (int i = 0; i < n; i++)
	{
		

		for (int j = 0; j <m; j++)
		{
			
			printf("\033[093menter the number %d %d\033[0m\n", i + 1, j + 1);
			while (proverka(arr[i][j]))
			{
				printf("\033[31menter the number\033[0m\n");
				rewind(stdin);
			}

		}
		
	}
	
}

void deleteColumns(int** arr, int &n, int& m)
{
	

	for (int i = 0; i < m; i++)
	{
		int count = 0;
		for (int j = 0; j < n; j++)
		{

			
			if (arr[j][i] <0)
			{
				
				count++;

			}

			if (count == n)
			{
				deleteColumnsHelp(arr, n, m, i);

				arr[i] = (int*)realloc(arr[i], (m) * sizeof(int*));

			}


		}

		arr[i] = (int*)realloc(arr[i], (m) * sizeof(int*));

	}
	 
	printArray(arr, n,m);
}

void deleteColumnsHelp(int** arr, int& n, int& m,int &k)
{
	for (int i = 0; i < n; i++)
	{
		for (int j = k; j < m - 1; j++)
			arr[i][j] = arr[i][j + 1];
		
	}
	m--;
	
	
}
void printArray(int** arr,  int& n,int &m)
{
	printf("\033[093marr : \033[0m\n");
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++)
			printf("%4d  ", arr[i][j]);
		printf("\n");
	}


}

void clearMemory(int** arr,  int& n)
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