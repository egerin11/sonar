#include"Header.h"

int main()
{
	int n = 0, m = 0;
	size(n,m);
	int** arr;
	arr = memory(n, m);
	fillArray(arr, n, m);
	printArray(arr, n, m);
	deleteColumns(arr, n, m);
	clearMemory(arr,n);
	return 0;
}