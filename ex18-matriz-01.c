#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define L 3
#define C 3

int main() {
    int matriz[L][C];
    srand(time(NULL));
    for(int i=0; i<L; i++){
        for(int j=0; j<C; j++){
            matriz[i][j]=rand()%51;
        }
    }

    FILE *arquivo;
    arquivo = fopen("matriz.txt", "w"); 

    if (arquivo == NULL) {
        printf("Erro ao abrir o arquivo.\n");
        return 1;
    }
    for (int i = 0; i < L; i++) {
        for (int j = 0; j < C; j++) {
            fprintf(arquivo, "%d ", matriz[i][j]);
        }
        fprintf(arquivo, "\n");
    }

    fclose(arquivo);
    printf("Matriz salva com sucesso!\n");
    return 0;
}
