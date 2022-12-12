#include<stdio.h>

int main()
{
	int i;
	for (i =401; i < 500; i++) 
	{
	
		if ((i % 10 + i / 10 % 10 + i / 100 == 9 && (i % 10 * 100 + i / 10 % 10 * 10 + i / 100) / 36 * 47 == i))
		
			printf_s("desired number:%d", (int)i);
		
		
	}
	return 0;
}