//whilhe aninhado
#include <stdio.h>

//main é a função principal
//Ela não recebe parâmentro de entrada, porque "()" está vazio.
//ao final da execução do programa ela retorna algum número inteiro, ja que a função é do tipo "int".
//Esse inteiro vai ser "0" porque ao final existe o comando "retorn 0"
int main(){

    //A linha seguinte declara a variável "i" dizendo que a váriável "i" é do tipo inteiro,
    //e dizendo que a variável "i" tem valor de 1.
    int i = 1;

    //while repete as tarefas enquanto a condição for verdadeira.
    //while vai testar se a condição i <= 10 é verdadeira.
    while ( i <= 10 ){

        //a linha seguinte declara a variável "j".
        //Declarar uma variável consiste em:
        //dar um nome a ela, "j",
        //escolher um tipo para variável, "int",
        //iniciar a variável com algum valor.
        int j = 1;
        while (j <= 10){
            printf("%d\n", i * j);
            j++;
        }
        printf("\n");
        i++;
    }
    return 0;

}