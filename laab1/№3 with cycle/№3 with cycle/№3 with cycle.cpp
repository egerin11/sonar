#include<stdio.h>

int main()
{
	int x = 0, y = 0,c;

	printf("Input x ");
	while(!scanf_s("%d", &x))//проверка ввода данных
	{
		printf_s("wrong input, please try again input x");
		rewind(stdin);
	}
	printf("Input y ");
	while(!scanf_s("%d", &y))
	{
		printf_s("wrong input, please try again input ");
		rewind(stdin);
	}
	
	
	if (x > 1 || x < -1 || y < 0 || y < -1)
		printf("false");

	else if (x < 1 || x < -1 || y > 0 || y < 1)
	{
		c = x * x + y * y;
		printf("point M ");
	}
	else
		printf("false");




	return 0;
}
