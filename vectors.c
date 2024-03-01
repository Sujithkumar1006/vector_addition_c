#include<stdio.h>

void readVector(int no_of_entries, long int* vector, FILE *in) {
    for(int index = 0; index < no_of_entries; index++){
       
        fscanf(in, "%ld", &vector[index]);
    }
}

void writeVector(long int* result, int no_of_entries){
    for(int index = 0; index < no_of_entries; index ++){
        printf("%ld ", result[index]);
    }
}

void addVectors(long int* vector1, long int* vector2,long int* result, int no_of_entries){
    for(int index = 0; index < no_of_entries; index++){
        result[index] = vector1[index] + vector2[index];
    }
}
