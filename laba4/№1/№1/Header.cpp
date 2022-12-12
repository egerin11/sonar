#include "Header.h"
#include <time.h>
#include <stdio.h>
#include <stdlib.h>

void fillArray(int mas[N][M],  int &row)
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
				mas[i][j] = rand() % 100 -50;

		}

	}
	else
	{
		printf("input\n");
		for (int i = 0; i < row; i++)
		{
			for(int j=0;j<row;j++)
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
bool proverka(int &col)
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
void product_of_numbers(int mas[N][M], int row)
{
	for (int i = 0; i < row; i++)

	{
		bool k = true;
		int a = 1;
		for (int j = 0; j < row; j++)
		{
			
			a *= mas[i][j];
			if (a < 0)
			{
				k = false;
			}
		}
		if (k == true) 
		{
			printf(" pr %d\n", a);

		}
		else 
		{
			printf("there is a negative term\n");
		}
	}
	
}
void max_sum(int mas[N][M], int row)
{
	int maxsum = 0;
	for (int j = 1; j < row - 1; j++)
	{
		int sum1 = 0, sum2 = 0, k = 0;
		for (int i = j; i < row; i++)
		{
			sum1 += mas[k][i];
			sum2 += mas[i][k];
			
			++k;
		}
		if (sum1 > maxsum)
			maxsum = sum1;
		if (sum2 > maxsum)
			maxsum = sum2;
	}
	printf("maxsum %d", maxsum);
}

	
	
    
	
