#include<stdio.h>
#include<stdlib.h>

int main (){
    system("clear");
 //declaração da variavel char (character) letra, simbolo, numero
    char letra = 'P';

    //declaração da variavel char para guardar uma palavra, ou seja, uma 
    //string(cadeia de caracteres) - uma coleção de caracteres 

    char nome[10] = "Pamela";

    printf("%c\n" ,letra);
    printf("%s\n" ,nome);
    printf("%c\n" ,nome[0]);
    


    return 0;




}