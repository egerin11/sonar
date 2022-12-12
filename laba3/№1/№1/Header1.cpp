#include "Header1.h"
#include <time.h>
#include <stdio.h>
#include <stdlib.h>


void fillArray(int* mas, int& n) 
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
			
			mas[i] = rand() % 100 - 50;
				
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
	return scanf_s("%d", &n) != 1 || getchar() != '\n';

}
void printArray(int* mas, int n)
{
	for (int i = 0; i < n; i++)
		printf(" %d ", mas[i]);

}
void sum(int* mas, int n,int &s)
{
	int k=0,I=0;
	for (int i = 0; i < n ; i++)
	{
		if (mas[i] == 0)

		{
			k += 1;
			I = i;
		}
		
	}	
	if (k > 0)
	{
		for(int i=I;i<n;i++)
		s += mas[i];
		printf("sum : %d\n", s);
	}
	else
	{ printf("\nsum = 0\n");
	
	}
	
	
	
}
void count(int* mas,int n, int &counter)
{
	for (int i = 0; i < n; i++)
	{	
		if (mas[i] > 0)
			counter += 1;
     }
}