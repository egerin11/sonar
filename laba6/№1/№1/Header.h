#ifndef HEADER_H
#define HEADER_H
#include<time.h>
bool proverka(int& n);
void raz(int& n);
int* memory( int& n);
void fillArray(int* arr, int& n);
void printArray(int* arr, int& n);
int abs1(int& k);
void reverse(int* arr, int& n);
void bubbleSort(int* arr, int& n, clock_t& start,clock_t & stop);
void otrel(int* arr, int& n);
void sortShell(int* arr, int& n, clock_t& start, clock_t  &stop);

//void qsort1(int* arr, int &l, int& k);

#endif 
