#include <stdio.h>

void troca(int *num1, int *num2);
int main(){
    int num1=10, num2=33;
    troca(&num1, &num2);
    printf("Num1: %d\n",num1);
    printf("Num2: %d\n",num2);
}

void troca(int *num1, int *num2){
    int aux;
    aux = *num1;
    *num1 = *num2;
    *num2 = aux;
}