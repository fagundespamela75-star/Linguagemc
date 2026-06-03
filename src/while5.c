#include<stdio.h>

int main (){
    int linha, coluna;

    linha = 1;
    coluna = 1;

    while(linha <= 40){
        while(coluna <= linha){
            printf("#");
            coluna++;
        }
        // Voltar a contagem da coluna ao valor ou seja meio que rsseta o sistema pra voltar a contagem do 15 salvo na memoria 
        coluna = 10;
        printf("\n");
        linha++;
    
    }
}






