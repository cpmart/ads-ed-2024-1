#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define L 4
#define C 4

int main()
{
    int matriz[L][C], somaLinha=0, somaColuna=0,maior, totalDiagonalPrincipal=0;
    srand(time(NULL));
    for (int i = 0; i < L; i++)
    {
        somaLinha=0;
        for (int j = 0; j < C; j++)
        {
            matriz[i][j] = rand() % 11;
            somaLinha += matriz[i][j];
            printf("%3d  ", matriz[i][j]);
        }
        totalDiagonalPrincipal += matriz[i][i];
        printf("| %3d\n",somaLinha);
    }
    maior = matriz[0][0];
    printf("---------------------\n");
    for (int i = 0; i < C; i++)
    {   
        somaColuna=0;
        for (int j = 0; j < L; j++)
        {
            somaColuna += matriz[j][i];
            maior = matriz[j][i]>maior?matriz[j][i]:maior;
        }
        printf("%3d  ",somaColuna);
    }
    printf("\n\nMaior: %d\n",maior);
    printf("Diagonal principal: %d\n",totalDiagonalPrincipal);
    printf("\n\n");
}