/* Verifica se a matriz eh identidade, retornando 1 caso sim e 0 caso nao.
Recebe a matriz mat e seu tamanho n. */
int matriz_identidade (int** mat, int n);

/* Cria uma matriz quadrada de tamanho n x n.
Caso eh_identidade == 1, retorna a matriz identidade. */
int** cria_matriz(int n, int eh_identidade);

/* Imprime matriz quadrada de tamanho n. */
void imprime_matriz(int** mat, int n);