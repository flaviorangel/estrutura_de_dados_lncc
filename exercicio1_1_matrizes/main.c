#include <stdlib.h>
#include <stdio.h>
#include "exercicio1_1.h"

int main(void){

    printf("--INICIO DOS TESTES--\n\n");

    printf("1.1) Matriz identidade\n\n");

    printf("Caso identidade tamanho 2\n\n");

    int* mat_id2 = cria_matriz(2, 1);
    imprime_matriz(mat_id2, 2);
    if (matriz_identidade(mat_id2, 2) == 1) printf("PASSOU!\n");
    else printf("FALHOU!\n");

    free(mat_id2);

    printf("\nCaso identidade tamanho 3\n\n");

    int* mat_id3 = cria_matriz(3, 1);
    imprime_matriz(mat_id3, 3);
    if (matriz_identidade(mat_id3, 3) == 1) printf("PASSOU!\n");
    else printf("FALHOU!\n");

    free(mat_id3);

    printf("\nCaso identidade tamanho 4\n\n");

    int* mat_id4 = cria_matriz(4, 1);
    imprime_matriz(mat_id4, 4);
    if (matriz_identidade(mat_id4, 4) == 1) printf("PASSOU!\n");
    else printf("FALHOU!\n");

    free(mat_id4);

    printf("\nCaso não identidade tamanho 2\n\n");

    int* mat_n_id2 = cria_matriz(2, 0);
    imprime_matriz(mat_n_id2, 2);
    if (matriz_identidade(mat_n_id2, 2) == 0) printf("PASSOU!\n");
    else printf("FALHOU!\n");

    free(mat_n_id2);

    printf("\nCaso não identidade tamanho 3\n\n");

    int* mat_n_id3 = cria_matriz(3, 0);
    imprime_matriz(mat_n_id3, 3);
    if (matriz_identidade(mat_n_id3, 3) == 0) printf("PASSOU!\n");
    else printf("FALHOU!\n");

    free(mat_n_id3);

    printf("\nCaso não identidade tamanho 4\n\n");

    int* mat_n_id4 = cria_matriz(4, 0);
    imprime_matriz(mat_n_id4, 4);
    if (matriz_identidade(mat_n_id4, 4) == 0) printf("PASSOU!\n");
    else printf("FALHOU!\n");

    free(mat_n_id4);

    return 0;
}