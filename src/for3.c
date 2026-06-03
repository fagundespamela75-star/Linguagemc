// O programa deve calcular a potencia de um determinado numero(base) de acordo// 
// com um expoente(potencia). O usuario dece informar os dois valores.//
// O programa deve usar a estrutura de repetição for para calcular. Ao final// 
// deve exibir o resulçtado.//

#include<stdio.h>
#include<stdlib.h>

int main(){
    system("clear");

    int b,e,t;

    printf("Digite um numero para a base e tecle Enter\n");
    scanf("%d",&b);

    printf("Digite um numero para o expoente e tecle Enter\n");
    scanf("%d",&e);

    t = b;
    for(i = 1 ; i < e ; i++){
        t *= b ;
    }
    printf("O resultado é %d\n",t);

    return 0;

}
