#include"Header.h"
#include<stdio.h>
#include<stdlib.h>
int main()
{
	int n=0;
	raz(n);
	int** arr,*arr1;
  arr = (int**)calloc(n, sizeof(int*));
  arr1 = (int*)calloc(n, sizeof(int));
 fillArray(arr, arr1, n);
  printArray(arr, arr1, n);
 deleteEvenElements(arr, arr1, n);
  clearMemory(arr, arr1, n);
	return 0;
}