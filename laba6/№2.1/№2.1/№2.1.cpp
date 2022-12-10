#include"Header.h"

int main()
{
	int n = 0, m = 0;
	raz(n, m);
	int** arr;
	arr = memory(n, m);
	fillArray(arr, n, m);
	printArray(arr, n, m);
	sortShell(arr, n, m);
	clearMemory(arr, n);
	return 0;
}