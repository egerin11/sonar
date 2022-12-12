#ifndef HEADER_H
#define HEADER_H
bool proverka(int& n);
void size(int& n,int &m);
int** memory(int& n, int& m);
void fillArray(int** arr, int& m, int& n);
void deleteColumns(int** arr, int& n, int& m);
void deleteColumnsHelp(int** arr, int& n, int& m, int& k);
void printArray(int** arr,  int& n,int &m);
void clearMemory(int** arr,  int& n);

#endif 
