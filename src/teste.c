#include<stdio.h>

int main(){
    int i,num,res;
    printf("Digite um numero para fazer a tabuada e tecle Enter\n");
    scanf("%d",&num);

    i = 0;
    while( i <= 20 ){
        res = num * i;
        printf("%d X %d = %d\n",num,i,res);
        i++;
    

    }
    return 0;

    