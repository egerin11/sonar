#include<stdio.h>

int main()
{
	
	int N, a = 1, b=1,c=1;
	printf_s("input N(N>1) ");
	while (!scanf_s("%d", &N)|| N == 1 || N == 0)
	{
		printf_s("wrong input, try again input");
		rewind(stdin);
		
	}
	
	

	while (c <= N) {
		a = b;
		b = c;
		c = a + b;
	}
	printf_s("fibonacci= %d", c);
	
	return 0;
}