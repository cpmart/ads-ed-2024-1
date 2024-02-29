#include <stdio.h>
int main()
{
    int numero;
    for (numero = 5; numero < 21; numero++)
    {
        printf("\n\nTabudada do %d\n",numero);
        for (int i = 1; i < 11; i++)
        {
            printf("%3d x %3d = %3d\n", numero, i, numero * i);
        }
    }
}