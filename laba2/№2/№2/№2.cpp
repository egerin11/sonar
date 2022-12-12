#include<stdio.h>

int main() 
{
	int a;
	printf_s("input a ");
	while (scanf_s("%d", &a)!=1)
	{
		printf_s("wrong input, try again input");
		rewind(stdin);
	}
	for (int x = 0; x < 1000000; x++)
	{
		x = a * a + 1;
		x = x * x + 1;
		printf_s("desired number %d", x);
		return 0;
	}
	return 0;
}