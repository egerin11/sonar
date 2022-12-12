#include<stdio.h>


int main()
{
	int x = 0, x_1 = 0, y = 0, y_1 = 0,c,c_1;
	printf("Input coordinate x");
	while(!scanf_s("%d", &x))//проверка ввода данных через циклы
	{
		printf_s("wrong input, please try again input x");
		rewind(stdin);
	}
	
	printf("Input coordinate y");
	while(!scanf_s("%d", &y))
	{
		printf_s("wrong input, please try again input y");
		rewind(stdin);
	}
	
	printf("Input coordinate x_1 ");
	while(!scanf_s("%d", &x_1))
	{
		printf_s("wrong input, please try again input x_1");
		rewind(stdin);
	}
	
	printf("Input coordinate y_1");
	while(!scanf_s("%d", &y_1))
	{
		printf_s("wrong input, please try again input y_1");
		rewind(stdin);
	}
	printf("Input coordinate c");
	while (!scanf_s("%d", &c))
	{
		printf_s("wrong input, please try again input c");
		rewind(stdin);
	}printf("Input coordinate c_1");
	while (!scanf_s("%d", &c_1))
	{
		printf_s("wrong input, please try again input c_1");
		rewind(stdin);
	}
	
	if ((x-x_1 )*(x-x_1)+(y-y_1)*(y-y_1)==(c-c_1)*(c-c_1))
		printf("right triangle");
	else if ((x - x_1) * (x - x_1) + (y - y_1) * (y - y_1) >(c - c_1) * (c - c_1) )
		printf("acute triangle");
	else
		printf("obtuse triangle");
	return 0;
}
