//Este código exemplifica a estrutura de repetição do-while

//Inclusão da biblioteca standard input e output
//Esta biblioteca contem a função printf
#include <stdio.h>

//Esta é a função principal. O programa começa aqui.
int main(){
    
    //Declaração da variável auxiliar.
    //"int" é o tipo da variável. "i" é uma caixinha que recebe números inteiros.
    int i = 1;

    //estrude repetição do-while
    do{
        printf("%d\n", i);
        i++;
    }
    while(i <= 5);

    return 0;
}



