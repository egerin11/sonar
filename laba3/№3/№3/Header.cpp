#include "Header.h"
#include <stdio.h>
#include <stdlib.h>
#include <time.h>



void fillArray(int* mas, int& n)
{
	int ans = -1;

	
	while (ans != 1 && ans != 0) {
		printf("input array random(1) or arms(0)\n");
		while (proverka(ans))
		{
			printf("input array random(1) or arms(0)\n");
			rewind(stdin);
		}
	}

	printf("input value of array\n");
	while (proverka(n)||n<0||n>100)
	{
		printf("input value of array\n");
		rewind(stdin);
	}

	if (ans == 1)
	{
		srand(time(NULL));
		for (int i = 0; i < n; i++)
		{
			mas[i] = rand() % 100-50;

		}
		
		
	}
	else
	{
		printf("input\n");
		for (int i = 0; i < n; i++)
		{
			int a;

			while (proverka(a))
			{
				printf("enter number : ");
				rewind(stdin);
			}

			mas[i] = a;
		}	
	}
	sortirovka(mas, n);
}
bool proverka(int& n)
{
	return (scanf_s("%d", &n) != 1 || getchar() != '\n');
}

void sortirovka(int* mas, int n)
{
	int i,j;
	for (i = 1; i < n; i++)
	{
		int a = mas[i];
		for ( j = i - 1; j >= 0 && mas[j]<a; j--)
		{
			mas[j + 1] = mas[j];
		}
		mas[j + 1] = a;

	}
	
}

void cikl(int* mas, int n, int counter,int cntr,int nmbr)
{
	
	for (int i = 0; i < n; i++)
	{
		for (int j = i; j < n; j++)
		{
			if (mas[i] == mas[j] && mas[i] % 2 == 0)
				counter += 1;
			
		}
		if (counter > cntr)
		{
		
			cntr = counter;
			nmbr = mas[i];
		}
		
		counter = 0;
	}
	
	printf("Number %d, counter %d\n", nmbr, cntr);
}
void printArray(int* mas, int n)
	{
		for (int i = 0; i < n; i++)
			printf(" %d ", mas[i]);


	}
