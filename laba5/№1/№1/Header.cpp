#include<stdio.h>
#include"Header.h"
#include<stdlib.h>

void raz(int &n)
{
	printf("\033[092minput value of array\033[0m\n");
	while (proverka(n) || n < 0)
	{
		printf("\033[31input value of array\033[0m\n");
		rewind(stdin);
	}
}
void fillArray(int *p,int &n)		
{
	
	printf("\033[092mfill array\033[0m\n");
	for (int i = 0; i < n; i++)
	{
        int a;
		while (proverka(a))
		{
			printf("\033[31menter number:\033[0m ");
			rewind(stdin);
		}

		*(p + i) = a;
	}
}
void printArray(int* p, int& n)
{
	for (int i = 0; i < n; i++)
	{

		printf("%d ", *(p+i));

	}
	printf("\n");
}
void minElements(int* p, int &n)
{
	
	int min = *p;
	for (int i = 0; i < n; i++) 
	{

		if (*(p + i) < min)
		{
			min = *(p + i);
			
		}
		
	}
	int i = 0;
	while (i < n) 
	{
		if (*(p+i) == min) {
			deleteMinElements(p, n, i);

		}
		else {
			i++;
		}
	}
	
	
	
	
}
void deleteMinElements(int* p, int &n, int &i)
{
	int	r = *p;
	for (int j = i; j < (n) - 1; j++)
	{
		
		*(p + j) = *(p + j + 1);
		
	
	}
	n--;
	
	
}
bool proverka(int& n)
{
	return scanf_s("%d", &n) != 1 || getchar() != '\n';
}