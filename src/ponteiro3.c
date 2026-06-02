#include<stdio.h>
#include<stdlib.h>

int main(){
    //vamos criar uma estrutura de colecao de 
    //dados chamada de array(arranjo)
    int idade[6] = {18,25,17,16,10,21};
    int *pidade = idade;

    printf("%d\n",idade[0]);
    printf("Primeiro elemento é %d\n" ,idade[0]);
    printf("Primeiro elemento é %d\n" ,*pidade);
    printf("O endereço do primeiro elemento é %p\n" ,pidade);
     
    pidade++;
    
    printf("Segundo elemento é %d\n" ,idade[1]);
    printf("Segundo elemento é %d\n" ,*pidade);
    printf("O endereço do segundo elemento é %p\n" ,pidade);

    pidade++;
    
    printf("terceiro elemento é %d\n" ,idade[2]);
    printf("terceiro elemento é %d\n" ,*pidade);
    printf("O endereço do terceiro elemento é %p\n" ,pidade);


    return 0;


}