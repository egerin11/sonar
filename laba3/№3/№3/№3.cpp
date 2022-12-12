#include "Header.h"
#include <stdio.h>
#define _CRT_SECURE_NO_WARNING

int main()
{
	int n, mas[100], counter = 0, cntr = 0,nmbr=0
		;//counter число повторений  cntr наибольшее число повторений 
	//nmbr наиболее часто встр число 
	fillArray(mas, n);
	cikl(mas, n,counter,cntr,nmbr);

	printArray(mas, n);
	
	return 0;
}