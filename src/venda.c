#include<stdio.h>
#include<stdlib.h>

int main(){

    system("clear");
    int i;
    for( i = 0 ; i < 100 ; i++){
        printf("=");
    }
    printf("\nPrograma de cadastro\n");
    char nomedocliente[10];
    char nomedovendedor[10];
    char nomedoproduto[50];
    float precodoproduto;
    char formadepagamento[10];

    
    //float é quando se trata de dinheiro valores com "virgula-,"
    // ele não carrega a quantidade de caracterisitcas das letras 
    // [10] se trata da quantidade de caracteristicas no nome por exemplo:
    // quantas letras no nome

    printf("Digite o nome do cliente: \n");
    fgets(nomedocliente,10,stdin);

    printf("Digite o nome do vendedor: \n");
    fgets(nomedovendedor,10,stdin);

    printf("Digite o nome do produto: \n");
    fgets(nomedoproduto,50,stdin);

    printf("Digite o preço do produto?: \n");
    scanf("%f",&precodoproduto); 

      printf("Digite a forma de pagamento: \n");
    fgets(formadepagamento,10,stdin);

    if (
    

    //vamos criar um arquivo de exto para guardar os dados dos clientes

    FILE *arquivo = fopen("files/cadastro.txt","a");
    
    fprintf(arquivo,"nome: %s\n",nomedocliente);
    fprintf(arquivo,"nomedovendedor: %s\n",nomedovendedor);
    fprintf(arquivo,"nomedoproduto: %s\n",nomedoproduto);
    fprintf(arquivo,"precodoproduto: %f\n",precodoproduto);
    fprintf(arquivo,"formadepagamento: %s\n",formadepagamento);


    //vamos fechar o arquivo
    fclose(arquivo);
    
 •                                                                                                                      
    return 0;
}
