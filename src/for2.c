#include<stdio.h>
#include<stdlib.h>

int main(){
    int ano;
    int qtd = 0;

    for( ano = 1950 ; ano <= 2026 ; ano++){
        if( ano % 4== 0){
            printf("O ano %d é bissxto\n",ano);
            qtd++;
        }

    }
    printf("=========================\n");
    printf("A quantidade de anos bissexyos é %d\n" ,qtd);
    return 0;
    
}