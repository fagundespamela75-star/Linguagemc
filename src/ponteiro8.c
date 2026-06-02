#include<stdio.h>
#include<stdlib.h>

int main(){

    system("clear");
    int i;
    for( i = 0 ; i < 100 ; i++){
        printf("=");
    }
    printf("\nPrograma de cadastro\n");
    char primeiro_nome[10];
    char sobrenome[10];
    char email[50];
    int idade;

    printf("Digite o seu primeiro nome: \n");
    fgets(primeiro_nome,10,stdin);

    printf("Digite o seu sobrenome: \n");
    fgets(sobrenome,10,stdin);

    printf("Digite o seu e-mail: \n");
    fgets(email,50,stdin);

    printf("Digite a sua idade?: \n");
    scanf("%d",&idade); 

    //vamos criar um arquivo de exto para guardar os dados dos clientes

    FILE *arquivo = fopen("files/cadastro.txt","a");
    
    fprintf(arquivo,"nome: %s\n",primeiro_nome);
    fprintf(arquivo,"sobrenome: %s\n",sobrenome);
    fprintf(arquivo,"e-mail: %s\n",email);
    fprintf(arquivo,"idade: %d\n",idade);

    //vamos fechar o arquivo
    fclose(arquivo);
    

    return 0;

}