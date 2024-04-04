#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define N 5

int main()
{
    int vet[N], maior, menor;
    float media = 0;
    srand(time(NULL));
    for (int i = 0; i < N; i++)
    {
        vet[i] = rand() % 51;
        printf("%d\n", vet[i]);
    }
    maior = menor = vet[0];
    for (int i = 0; i < N; i++)
    {
        media += vet[i];
        maior = vet[i] > maior ? vet[i] : maior;
        menor = vet[i] < menor ? vet[i] : menor;
    }
    printf("Média: %g\n", media / N);
    printf("Maior: %d\n", maior);
    printf("Menor: %d\n", menor);
}