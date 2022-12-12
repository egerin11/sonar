#include<stdio.h>

int main()
{
	int a = 0, b = 0, c = 0;
	float  s = 0, v = 0;
	printf("Input a");// проверка ввода данных
	while (!scanf_s("%d", &a))
	{
		printf_s("wrong input, please try again input a");
		rewind(stdin);
	}
	
	printf("Input b");
	while(!scanf_s("%d", &b))
	{
		printf_s("wrong input, please try again input b");
		rewind(stdin);
	}
	
	printf("Input c");
	while(!scanf_s("%d", &c))
	{
		printf_s("wrong input, please try again input c");
		rewind(stdin);
	}
	
	s = 2 * a * b + 2 * b * c + 2 * a * c;
	v = a * b * c;
	printf("Sqr area=%.3f ", s);
	printf("Volume %.3f ", v);

	printf("false");

	return 0;
}