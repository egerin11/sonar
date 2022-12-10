#include"Header.h"
#include<stdio.h>
#include <stdlib.h>
#include <time.h>


void raz(int& n)
{
	printf("\033[033menter number \033[0m\n");
	while (proverka(n) || n < 0)
	{
		printf("\033[091minput error try again \033[0m\n");
		rewind(stdin);
	}


}
int* memory( int& n)
{
	int* memory;
	memory = (int*)calloc(n, sizeof(int));
	return memory;
}
void fillArray(int* arr, int& n)
{
	//printf("fill array\n");
	///*for (int i = 0; i < n; i++)
	//	
	//while (proverka(arr[i]))
	//{
	//	printf("input error try again\n");
	//	rewind(stdin);
	//}*/
	srand(time(NULL));
	for (int i = 0; i < n; i++)
	{
		arr[i] = rand() % 100 - 50;

	}

}
void printArray(int* arr, int& n)
{
	printf("\033[092marr :\033[0m \n");
	for (int i = 0; i < n; i++) 

		printf("%3d  ", arr[i]);
		
	printf("\n");

}
void reverse(int* arr, int& n)
{
	int tmp = *arr;
	for (int i = 0; i < n / 2; i++)
	{
		tmp = arr[i];
		arr[i] = arr[n - i - 1];
		arr[n - i - 1] = tmp;
	}
	
}
//void insertionSort(int* arr, int& n, clock_t &start, clock_t& stop)
//{
//	
//	start = clock();
//	int j = 0;
//	for (int i = 1; i < n; i++)
//	{
//		if (arr[i] < 0 && abs1(arr[i]) % 2 == 1) {
//			int value = arr[i];
//			int temp = i;
//			for (j = i - 1; j >= 0; j--)
//			{
//				if (arr[j] < 0 && abs1(arr[j]) % 2 == 1 && arr[temp] < arr[j]) {
//					arr[j] = arr[temp];
//					temp = j;
//				}
//			}
//			arr[temp] = value;
//		}
//	}
//	stop = clock();
//
//}
void sortShell(int* arr, int& n, clock_t& start, clock_t& stop)
{
	start = clock();
	for (int gap = n / 2; gap > 0; gap /= 2)
	{
		int j;
			for (int i = gap; i < n; i++)
			{
				
				if (arr[i] < 0 && abs1(arr[i]) % 2 == 1)
				{
					for (j = i-gap; j >=0&&arr[j]>arr[j+gap]; j -= gap)
						if (arr[j] < 0 && abs1(arr[j]) % 2 == 1)
						{
							

							int tmp = arr[j];
							arr[j] = arr[j + gap];
							arr[j + gap] = tmp;
							


						}
					
				}
			}
		 

	}

	stop = clock();
	}

////void qsort1(int* arr, int &l, int& k)
//{
//	int i, j, tmp = 0;
//	int srl = arr[(l + k) / 2];
//	i = l; j = k;
//	do
//	{
//		while (arr[i] < srl) i++;
//		while (arr[j] > srl)j--;
//		if (i <= j)
//		{
//			tmp = arr[i];
//			arr[i] = arr[j];
//			arr[j] = tmp;
//			i++; j--;
//		}
//
//	} while (i <= j);
//	
//	
//		if (i <k)
//			qsort1(arr, i, k);
//		if(j>l)
//			qsort1(arr, l, j);
//
//	
//	
//}


void bubbleSort(int* arr, int& n, clock_t& start, clock_t& stop)
{
	start = clock();

	for (int i = n-1; i >=0; i--)
	{
		if (arr[i] < 0 && abs1(arr[i]) % 2 == 1) {
			//int fl = 0;
			
			for (int j = 0; j < i; j++)
			{
				if (arr[j] < 0 && abs1(arr[j]) % 2 == 1) {
					if (arr[j] > arr[i]) {
						int temp = arr[i];
						arr[i] = arr[j];
						arr[j] = temp;

						//fl++;
					}
				}

			}

			/*if (fl != 0) {
				break;
			}*/
		}
	}

	stop = clock();
	
	//stop = GetTickCount64();
	
	//printf("time Bubble Sort =%d\n", ((stop - start)));
}
int abs1(int& k)
{
	int y = 0;
	int mod((k >= y) ? k : -k);
	return mod;
}
bool proverka(int& n)
{
	return scanf_s("%d", &n) != 1 || getchar() != '\n';
}