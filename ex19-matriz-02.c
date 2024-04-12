#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define L 3
#define C 3

int main() {
    int matriz[L][C];
    FILE *arquivo;
    arquivo = fopen("matriz.txt", "r"); 

    for(int i=0; i<L; i++){
        for(int j=0; j<C; j++){
            fscanf(arquivo, "%d",&matriz[i][j]);
        }
    }

    for (int i = 0; i < L; i++) {
        for (int j = 0; j < C; j++) {
            printf("%d\t", matriz[i][j]);
        }
        printf("\n");
    }

    fclose(arquivo);
    printf("Matriz lida com sucesso!\n");
    return 0;
}
