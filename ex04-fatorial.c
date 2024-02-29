#include <stdio.h>

int main(){
    int numero;
    long fatorial=1;
    printf("Digite o valor: ");
    scanf("%d",&numero);

    if(numero>=0){
        for(int i=1; i<=numero; i++)
            fatorial*=i;
        printf("O fatorial de %d é %ld.\n",numero, fatorial);
    }
    else    
        printf("Valor inválido!\n");

}