#include <stdio.h>

int main()
{
    int n, x, a, b;
    scanf("%d",&n);
    n = 5;
    x = n++;
    x = ++x;
    a = x++;
    b = a++ * 2;
    printf("%d\n",b);
}