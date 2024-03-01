#ifndef vectorsh
#define vectorsh
#include<stdio.h>

long readVector(int no_of_entries, long int* vector, FILE *in);

long writeVector(long int* result, int no_of_entries);

void addVectors(long int* vector1, long int* vector2,long int* result, int no_of_entries);


#endif