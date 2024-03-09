#include <stdio.h>
//protótipo
void imprimirNome(void);
void imprimirNumeroReal(float num); 
int retornarAno(void);   
int soma(int n1, int n2);
int main(){
    imprimirNome();     //chamada da função
    imprimirNumeroReal(15.3);
    printf("Ano: %d\n",retornarAno());
    printf("Soma: %d\n",soma(2,3));
}
void imprimirNome(){    //construção da função
    printf("Cristiano\n");
    }
void imprimirNumeroReal(float num){
    printf("O número passado foi: %g\n",num);
}
int retornarAno(void){
    return 2024;
}
int soma(int n1, int n2){
    return n1+n2;
}