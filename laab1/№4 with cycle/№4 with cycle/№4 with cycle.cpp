#include<stdio.h>

int main()
{
	int a, b, input, c;
	printf("Input a ");
	while(!scanf_s("%d", &a))// проверка ввода данных 
	{
		printf_s("wrong input, please try again input a ");
		rewind(stdin);
	}
	printf("Input b ");
	while(!scanf_s("%d", &b))// проверка ввода данных 
	{
		printf_s("wrong input, please try again input b ");
		rewind(stdin);
	}
	printf("1.* \n");
	printf("2./ \n");
	printf("3.+ \n");
	printf("4.- \n");
	printf("5.%% \n");
	printf("selection: ");
	while (!scanf_s("%d", &input)|| input<1||input>5) // проверка ввода данных 
	{
		printf_s("wrong input, please try again input  ");
		rewind(stdin);
	}
	switch (input)
	{
	case 1:

		c = a * b;
		break;
	case 2:

		c = a / b;
		break;
	case 3:
		c = a + b;
		break;
	case 4:

		c = a - b;
		break;
	case 5:

		c = a % b;
		break;
	

	}
	printf_s("%d", c);// чтобы передовалось целое значение в printf_s

	return 0;
}