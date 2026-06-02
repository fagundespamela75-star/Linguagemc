#include<stdio.h>
#include<stdlib.h>

int main(){

    system("clear");
    char nome_completo[30];
    //vamos usar uma funçao para obter todos os caracteres
    // digitados pelo usuario na tela de tertminal
    //O nome da função é fgets
    printf("Digite o seu nome compĺeto\n");
    fgets(nome_completo,30,stdin);
    printf("Olá, Sr. (a) %s",nome_completo);

    return 0;
    

}


