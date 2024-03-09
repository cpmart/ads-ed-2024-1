#include <stdio.h>

short menuGeral();
short menuArea();
short menuVolume();
float calcularAreaQuadrado(float lado);
float calcularAreaCirculo(float raio);
float calcularAreaTrapezio(float baseMenor, float baseMaior, float altura);
float calcularVolumeCubo(float lado);
float calcularVolumeCilindro(float raio, float altura);
long calcularFatorial(short numeroFatorial);
int main()
{
    short opcao = 1, opcao2, numeroFatorial;
    float altura, baseMenor, baseMaior, lado, raio;
    while (opcao != 0)
    {
        opcao = menuGeral();
        switch (opcao)
        {
        case 1:
            while (opcao2 != 0)
            {
                opcao2 = menuArea();
                switch (opcao2)
                {
                case 1:
                    printf("Digite o valor do lado do quadrado");
                    scanf("%f", &lado);
                    printf("Área do quadrado: %g\n", calcularAreaQuadrado(lado));
                    break;
                case 2:
                    printf("Digite o valor do raio do círculo");
                    scanf("%f", &raio);
                    printf("Área do círculo: %g\n", calcularAreaCirculo(raio));
                    break;
                case 3:
                    printf("Digite o valor da base menor");
                    scanf("%f", &baseMenor);
                    printf("Digite o valor da base maior");
                    scanf("%f", &baseMaior);
                    printf("Digite o valor da altura");
                    scanf("%f", &altura);
                    printf("Área do trapézio: %g\n", calcularAreaTrapezio(baseMenor, baseMaior, altura));
                    break;
                case 0:
                    printf("Voltando ao menu principal...\n");
                    break;
                default:
                    printf("Opção inválida!!!\n");
                    break;
                }
            }
            break;
        case 2:
            while (opcao2 != 0)
            {
                opcao2 = menuVolume();
                switch (opcao2)
                {
                case 1:
                    printf("Digite o valor do lado do quadrado");
                    scanf("%f", &lado);
                    printf("Volume do quadrado: %g\n", calcularVolumeCubo(lado));
                    break;
                case 2:
                    printf("Digite o valor do raio do círculo");
                    scanf("%f", &raio);
                    printf("Digite o valor da altura do cilindro");
                    scanf("%f", &altura);
                    printf("Volume do cilindro: %g\n", calcularVolumeCilindro(raio, altura));
                    break;
                case 0:
                    printf("Voltando ao menu principal...\n");
                    break;
                default:
                    printf("Opção inválida!!!\n");
                    break;
                }
            }
            break;
        case 3:
            printf("Digite o valor: ");
            scanf("%hd", &numeroFatorial);
            printf("Fatorial de %hd é: %ld\n", calcularFatorial(numeroFatorial));
            break;

        default:
            break;
        }
    }
}

short menuGeral()
{
    short opcao;
    printf("[1] Calcular área\n");
    printf("[2] Calcular volume\n");
    printf("[0] Sair\n");
    printf("Escolha uma opção: ");
    scanf("%hd", &opcao);
    return opcao;
}

short menuArea()
{
    short opcao;
    printf("[1] Calcular área do quadrado\n");
    printf("[2] Calcular área do círculo\n");
    printf("[3] Calcular área do trapézio\n");
    printf("[0] Sair\n");
    printf("Escolha uma opção: ");
    scanf("%hd", &opcao);
    return opcao;
}

short menuVolume()
{
    short opcao;
    printf("[1] Calcular o volume do cubo\n");
    printf("[2] Calcular o volume do cilindro\n");
    printf("[0] Sair\n");
    printf("Escolha uma opção: ");
    scanf("%hd", &opcao);
    return opcao;
}

float calcularAreaQuadrado(float lado)
{
    return lado * lado;
}

float calcularAreaCirculo(float raio)
{
    return 3.141519 * raio * raio;
}

float calcularAreaTrapezio(float baseMenor, float baseMaior, float altura)
{
    return ((baseMenor + baseMaior) * altura) / 2;
}

float calcularVolumeCubo(float lado)
{
    return lado * calcularAreaQuadrado(lado);
}

float calcularVolumeCilindro(float altura, float raio)
{
    return altura * calcularAreaCirculo(raio);
}

long calcularFatorial(short numeroFatorial)
{
    long fatorial = 1;
    if (numeroFatorial >= 0)
    {
        for (int i = 1; i <= numeroFatorial; i++)
        {
            fatorial *= i;
        }
        return fatorial;
    }
    else
        printf("Valor inválido para o cálculo.\n");
}
