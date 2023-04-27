#include <stdio.h>
#include "../include/prototipos.h"

unsigned short int continuar(void){
    char flag;
    printf("\tcontinuar [s] / [n]: ");
    scanf("%c", &flag);
    getchar();
    printf("\n\n");

    switch(flag){
        case 's':
        case 'S':
            return 1;
            break;
        case 'n':
        case 'N':
            return 0;
            break;
    }
}