#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define N 10

int main()
{
    int vet1[N], vet2[N], aux, cont1=0, cont2=0;
    srand(time(NULL));
    for (int i = 0; i < N; i++)
    {
        vet2[i]=vet1[i] = rand() % 51;
        printf("%d\t", vet1[i]);
    }
    printf("\n");
    for (int i = 0; i < N-1; i++)
    {
        for (int j = i + 1; j < N; j++)
        {
            if (vet1[i] > vet1[j])
            {
                aux = vet1[i];
                vet1[i] = vet1[j];
                vet1[j] = aux;
            }
            cont1++;
        }
    }
    for (int i = 0; i < N-1; i++){
        if (vet2[i] > vet2[i+1])
        {
            aux = vet2[i];
            vet2[i] = vet2[i+1];
            vet2[i+1] = aux;
            i=-1;
        }
        cont2++;
    }
    for (int i = 0; i < N; i++)
        printf("%d - %d\n", vet1[i], vet2[i]);
    printf("Cont1 = %d\n",cont1);
    printf("Cont2 = %d\n",cont2);
}