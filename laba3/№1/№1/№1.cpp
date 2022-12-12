#include "Header1.h"
#include <stdio.h>
#define _CRT_SECURE_NO_WARNING

int main() 
{
	int n, mas[100], counter=0, s=0;
	fillArray(mas, n);
	printArray(mas, n);
	count(mas, n, counter);
	sum(mas, n,s);
	printf("counter : %d\n", counter);
	
	return 0;
}