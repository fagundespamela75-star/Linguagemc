#include<stdio.h>
#include<stdlib.h>

int main(){

    int a = 35;
    int *ptra =&a;

    printf("O valor da variavel a é %d\n" ,a);
    printf("O endereço de memoria da variavel a é %p\n",ptra);
    printf("O valor que esta no endereço da variavel é %d\n",*ptra);
    return 0;
}
