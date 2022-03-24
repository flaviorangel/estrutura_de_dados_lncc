#include "exercicio1_2.h"
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int matriz_identidade (int* mat, int n){
    for (int i = 0; i < n; i++){
        for (int j = 0; j < n; j++){
            if (i == j){
                if (*(mat + (i * n) + j) != 1) return 0;
            } else {
                if (*(mat + (i * n) + j) != 0) return 0;
            }
        }
    }
    return 1;
}

int* cria_matriz(int n, int eh_identidade){
    int* mat = (int*)malloc(sizeof(int)*n*n);
    if (eh_identidade == 1) {
        for (int i = 0; i < n; i++){
            for (int j = 0; j < n; j++){
                if (i == j) mat[(i * n) + j] = 1;
                else mat[(i * n) + j] = 0;
            }
        }
    } else {
        srand(time(NULL));
        for (int i = 0; i < n; i++){
            for (int j = 0; j < n; j++){
                mat[(i * n) + j] = (rand() % (101) + 1);
            }
        }
    }
    return mat;
}

void imprime_matriz(int* mat, int n){
    for (int i = 0; i < n; i++){
        for (int j = 0; j < n; j++){
            printf("(%d, %d) = %d\n", i, j, *(mat + (i * n) + j));
        }
    }
}