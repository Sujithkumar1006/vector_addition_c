#include<stdio.h>
#include<stdlib.h>
#include "vectors.h"



int main(int argc, const char *argv[]){
    if(argc != 3){
        printf("Usage ./run.sh %s %s", "N_OPS", "N_ENTRIES");
    }
    FILE *in = stdin;
    FILE *out = stdout;
    int N_ENTRIES = atoi(argv[2]);
    int N_OPS = atoi(argv[1]);

    if(N_OPS < 0 || N_ENTRIES < 0){
        printf("Usage: N_OPS and N_ENTRIES should be a positive number");
        return 1;
    }
    //printf("N_ENTRIES is %d\n", N_ENTRIES);

    for(int index = 0; index < N_OPS; index++){
    long int* vector1 = (long int*)malloc(N_ENTRIES * sizeof(long int));
    long int* vector2 = (long int*)malloc(N_ENTRIES * sizeof(long int));
    long int* resultVector = (long int*)malloc(N_ENTRIES * sizeof(long int));

    if(vector1 == NULL || vector2 == NULL || resultVector == NULL){
        printf("Memory allocation in heap is failed");
        goto cleanup;
        return 1;
    }

    readVector(N_ENTRIES, vector1, in);
    readVector(N_ENTRIES, vector2, in);
    addVectors(vector1, vector2, resultVector, N_ENTRIES);
    writeVector(resultVector, N_ENTRIES);
    printf("\n");
    printf("\n");
    cleanup:
        if(vector1 != NULL) free(vector1);
        if(vector2 != NULL) free(vector2);
        if(resultVector != NULL) free(resultVector);

    }
    
    return 0;
}