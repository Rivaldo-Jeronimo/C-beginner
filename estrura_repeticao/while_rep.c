//Estudo da estrutura de repetição "while".

//inclusão de biblioteca
#include <stdio.h>

//Esta função não recebe parâmetros porque está vazio dentro do parêntesis,
//mas o "int" induca que ela retorna um inteiro.
//A função principal, "main", é onde o programa começa. 
int main(){
    //declara uma variável auxiliar
    int i = 1;

    //estrutura de repetição "while"
    //"while" quer dizer enquanto
    while(i <= 5){
        printf("%d\n", i);//"%" é operador de formatação, "d" é decimal
                          //o "%d" vai ser substituído pelo valor da variável
                          //"\n" faz pular linha
        i++; //incrementar equivale a fazer i = i + 1
    }
    //teste
    //printf("Ao final i vale %d\n",i);

    return 0;
}
