#include <stdio.h>
#define N 3

struct Aluno
{
    int codigo;
    char nome[10];
    float media;
};
typedef struct Aluno Aluno;

int main(){
    Aluno vetAluno[N];
    for(int i=0; i<N; i++){
        vetAluno[i].codigo=i+1;
        printf("Código: %d\n",vetAluno[i].codigo);
        printf("Nome: ");
        scanf("%s",vetAluno[i].nome);
        printf("Média:");
        scanf("%f",&vetAluno[i].media);
    }
    printf("---------------\n");
    printf("Código | Média | Nome\n");
    for(int i=0; i<N; i++){
        printf("%6d | %5.2f | %s\n",vetAluno[i].codigo, vetAluno[i].media, vetAluno[i].nome);
    }
}