#include "Header.h"
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void fillArray(int* mas, int& n)
{
	int ans = -1;

	
	while (ans != 1 && ans != 0) {
		printf("input array random(1) or arms(0)\n");
		while (proverka(ans)) {
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
	
	
	

}
bool proverka(int& n)
{
	return (scanf_s("%d", &n) != 1 || getchar() != '\n');
}
void cikl(int* mas, int n)
{
	int k;
	printf("input k\n");
	while (proverka(k) || k == n || k>n || k<0)
	{
		printf("input k\n");
		rewind(stdin);
	}
	int i, j;
	for (i = n - 1; i > -1; i--)
	
		if (i %k==0&&i!=0)
		{
			for (j = n - 1; j > i; j--)
				mas[j + 1] = mas[j];
			mas[i + 1] = 0;

           n++;
		}
		
	
	printArray(mas, n);
}
void printArray(int* mas, int n)
{
	for (int i = 0; i < n; i++)
     printf(" %d ", mas[i]);
		
}
