#include <stdio.h>
#include <stdlib.h>

    int main (){

        int time, conts = 0, conta = 0, contg = 0;
        char op;
        do {

            printf("escolha o seu time preferido!\n");
            printf("1 - Santos\n");
            printf("2 - Arsenal\n");
            printf("3 - Guarani\n");
                scanf("%i", &time);
            switch (time)
            {
            case 1:
                conts++;
                break;

            case 2:
                conta++;
                break;

            case 3:
                contg++;
                break;

            default:
                printf("Time invalido");
                break;
            }
        
        printf("Deseja informar novo time [S / N] \n");
            scanf("%s", &op);

        }while (op == 's' || op == 'S');

        printf("Santos = %i\n", conts);
        printf("Arsenal = %i\n", conta);
        printf("Guarani = %i\n", contg);
    }