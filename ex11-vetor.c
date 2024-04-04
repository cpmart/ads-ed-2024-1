#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define N 10

int main(){
    int vet[N];
    srand(time(NULL));
    for(int i=0; i<N; i++){
        vet[i]=rand()%n;
        printf("vet[%p] = %d\n",vet+i,*(vet+i));
    }
}