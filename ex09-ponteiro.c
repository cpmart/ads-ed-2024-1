#include <stdio.h>
#include <stdlib.h>

void preenche(int *pnum);
int main(){
    system("clear");
    int num, *a, *b;
    a = &num;
    b = a;
    *b = 234;
    *a = 123;
    num = 15;
    preenche(&num);
    scanf("%d",&*a);
    scanf("%d",b);
    scanf("%d",&num);
}
void preenche(int *pnum){
    *pnum = 33;
}