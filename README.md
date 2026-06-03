# Estudo da linguagem C e NASM
## Aplicado a logica de programação e algoritimos

<p aling="center">
     <img src="rosa.png"  width="300" height="300">
     
</p>

- - -


Estudos das principais estruturadas da linguagem de programação C.

Vamos listar os itens trabalhados neste repositorio

    *Variaveis 
    *Comandos de Entrada e Saida(IO-Input output):
        *printf
        *scanf
    *Desvio de fluxo simples (if ...)1
    *Desvio de fluxo Multiplo (if ... else ...)
    Estrutura de Repetição While (Enquanto)
    *Estrutura de Repetição For(Para)
    *Função (Modulos) 
        -Função interna (Dentro do arquivo .c)
        -Função Externa (Dentro do arquivo .h)
    * Importação de Modulos 
        -Modulos da linguagem (stdio.h)
        -Modulos do usuario (funcoes.h)
    * Ponteiro 
    * Criação de arquivos 

#### Demonstração de uma estrutura simples de arquivo .c
```c
#include <stdio.h>
int main(){
    int x = 10;
    printf("O valor é %d\n",x);
    return 0;

}
```