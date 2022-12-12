#include"Header.h"
#include<stdio.h>
#include<stdlib.h>

void raz(int& n)
{
	printf("\033[092menter number of  line\033[0m\n");
	while (proverka(n) || n < 0)
	{
		printf("\033[31menter number of line\033[0m\n");
		rewind(stdin);
	}
}

void fillArray(int** arr, int* arr1,int &n)
{

	for (int i = 0; i < n; i++)
	{
	
		printf("\033[092menter the number of row columns %d\033[0m\n",i+1);
		while (proverka(*(arr1 + i))||*(arr1+i)<0)
		{
			printf("\033[31menter the number of row columns\033[0m\n");
			rewind(stdin);
		}
	
		arr[i] = (int*)calloc((arr1[i]+1), sizeof(int));
		
		for (int j = 0; j < arr1[i]; j++)
		{
				printf("\033[092menter the number %d %d\033[0m\n" ,i+1,j+1);
			while (proverka(arr[i][j])||arr[i][j]<0)
			{
				printf("\033[31menter the number\033[0m\n");
				rewind(stdin);
			}
			
		}
		
		arr[i][arr1[i]] = -1;
	}
	
}


void deleteEvenElements(int** arr, int* arr1, int &n)
{
		int* temp_arr1 = (int*)calloc(n,sizeof(int) );
		for (int i = 0; i < n; i++) 
		{ 
			temp_arr1[i] = arr1[i];
		}

		for (int i = 0; i < n; i++)
		{
			for (int j = temp_arr1[i] - 1 - (temp_arr1[i] - 1) % 2; j >= 0; j -= 2) {
				if (arr[i][j] % 2 == 0)
				{
					for (int k = j; k < temp_arr1[i]; k++)
					{
						arr[i][k] = arr[i][k + 1];
					}
					arr1[i]--;
					arr[i] = (int*)realloc(arr[i], (arr1[i]+1) * sizeof(int));
				}
			}

		}
		

	printArray(arr, arr1, n);

}
void printArray(int** arr, int* arr1, int& n)
{
	printf("\033[092marr :\033[0m \n");
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < *(arr1 + i) + 1; j++)
			printf("%d  ", arr[i][j]);
		printf("\n");
	}


}

void clearMemory(int** arr, int* arr1, int& n)
{
	for (int i = 0; i < n; i++)
	{
		free(arr[i]);
	}
	free(arr);
	free(arr1);
}

bool proverka(int& n)
{
	return scanf_s("%d", &n) != 1 || getchar() != '\n';
}