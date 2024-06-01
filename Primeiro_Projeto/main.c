#include <stdio.h>
#include <stdlib.h>
#include "prova02.h"
#include "prova03.h"
#include "prova04.h"
#include "prova05.h"
int main() {
    int op, cont;
    do{
    printf("escolha uma opcao\n");
    printf("1 - Ex prova 1\n");
    printf("2 - Ex prova 2\n");
    printf("3 - Ex prova 3\n");
    printf("4 - Ex prova 4\n");
        scanf("%i", &op);

        switch (op){
        case 1:
            prova1();
            break;

        case 2:
            prova02();
            break;

        case 3:
            prova03();
            break;

        case 4:
            prova04();
            break;

        default:
            printf("Opcao incorreta\n");
            break;
        }
        printf("Deseja continuar?\n");
        printf("1 - Continuar\n");
        printf("0 - Parar\n");
            scanf("%i", &cont);
    }while (cont == 1);
return 0;
}
