#include<stdio.h>
int main (){

    int num1;
    int num2;
    int soma;
    int multiplicacao;
    int dividir;
    int subtrair;

    printf("Digite um numero inteiro e tecle ENTER\n");
    scanf("%d" , &num1);

    printf("Digite outro numero inteiro e tecle ENTER\n");
    scanf("%d" , &num2);

    soma = num1 + num2;
    subtrair = num1 - num2;
    dividir = num1 / num2;
    multiplicacao = num1 * num2;

    printf("A soma dos numeros %d e %d resultou em %d\n", num1,num2,soma);
    printf("A soma dos numeros %d e %d resultou em %d\n", num1,num2,subtrair);
    printf("A soma dos numeros %d e %d resultou em %d\n", num1,num2,dividir);
    printf("A soma dos numeros %d e %d resultou em %d\n", num1,num2,multiplicacao);
return 0;

}