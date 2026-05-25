// Importação da biblioteca padrão de entrada e saida 

#include <stdio.h> 
// O programa iniciar e executar a partir da função main

int main () {
    // Declaração da variavel j com o tigo int (inteiro)
    int j;

    // Vamos pedir ao usuario digitar um valor 
    // Inteiro para ser guardado na variavel J
    
    printf ("Digite um numero inteiro e tecle ENTER\n");
    // O comando scanf sera utilizado para capturar o numero inteiro que o usuario ira digitar. 
    // O caracter f do scan é usado para indicar qual será o formato de dados digitados pelo usuario.
    // Neste caso, usremos %d, que indica que o usuario digitou é um numero decimal.
    // este numero será alocada no endereço de memoria da variavel J. Portanto, usaremos &j para indicar 
    // O endereço da variavel 

    scanf("%d, &j");
    printf("Valor digitado pelo usuario é %d\n\n", j);
    return 0;  //Informa ao compilador que o programa acabou
}