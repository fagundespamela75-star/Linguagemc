#include <stdio.h>
int main (){
    // Vamos usar as variaveis como tipo de dados float, pois, 
    // este programa recebe valores com casas decimais 
    float preco;
    float taxa;
    float parcelas;
    float resultados;
    float resultadoParcelas;
    /* 
    Camel case ( nomeCompletoCliente)
    Snake Case (nome_completo_cliente)
    Simple Case (nomecompletocliente)
    nome-completo-cliente
    */

    printf("Digite o preço do produto e tecle Enter\n");
    scanf("%f",&preco); 

    printf("Digite a taxa de acrescimo sem o aimbolo de porcentagem e tecle Enter/n");
    scanf("%f",&taxa);

    printf("Digite o numero de parcelas e tecle Enter\n");
    scanf("%f", &parcelas);

    resultados = preco *(taxa / 100) + preco;
    resultadoParcelas = resultados / parcelas;

    printf ("O valor final do produto é R$ %.2f\n", resultados);
    printf("O valor da parcela é R$ %.2F\n", resultadoParcelas);

    return 0;



}