/*
*  Autores: Matheus Monteiro Barbosa
*           Gabriel Alderige de Carvalho Melo
*/

#include <stdio.h>
#include "../include/prototipos.h"

 int main(void){
    float n1, n2;
    char op;

    for(;;){ // Laço Infinito

        /* Leitura dos Dados */
        printf("Operador  -> ");
        scanf("%f", &n1);
        getchar();
        printf("+, -, *, /  -> ");
        scanf("%c", &op);
        printf("Operando  -> ");
        scanf("%f", &n2);
        getchar();

        /* Decisão e Chamada das Operações */
        switch(op){
            case '+':   printf("Resultado -> %5.2f\n", soma(n1, n2));
                        break;
            case '-':   printf("Resultado -> %5.2f\n", subtracao(n1, n2));
                        break;
            case '*':   printf("Resultado -> %5.2f\n", multiplicacao(n1, n2));
                        break;
            case '/':   printf("Resultado -> %5.2f\n", divisao(n1, n2));
                        break;
            default:
                        printf("\t operacao invalida...\n\n");
        }

        if (!continuar()) break; // Condição de Parada do Laço
    }

    return 0;
 }