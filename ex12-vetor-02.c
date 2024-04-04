#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define N 10

int main()
{
    int vet[N];
    srand(time(NULL));
    for (int i = 0; i < N; i++){
        vet[i] = rand() % 11;
        printf("%d\t",vet[i]);
    }
    printf("\n");
    for (int i = 0; i < N; i++){
        printf("---TABUADA DO %d---\n",vet[i]);
        for(int j = 1; j<11; j++)
            printf("%d x %d = %d\n",vet[i], j, vet[i]*j);
    }
}