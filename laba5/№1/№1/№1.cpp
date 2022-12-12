#include<stdio.h>
#include"Header.h"
#include<stdlib.h>
int main()
{
	int n=0;
	raz(n);
	int *p = (int*)calloc(n, sizeof(int));
    fillArray(p, n);
	printArray(p, n);
	minElements(p,n);
	/*int* */p = (int*)realloc(p, n * sizeof(int));
	/*if (x != NULL)
		p = x;*/
	printArray(p, n);
	free(p);
	return 0;
}