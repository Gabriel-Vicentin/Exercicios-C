#include <stdlib.h>
#include <stdio.h>

    int main(){

        int lados;

        printf("Qual o numero de lados da figura geometrica?\n");
            scanf("%i", &lados);

        if (lados < 3){
            printf("Numero de lados invalido\n");
        }

        switch (lados){
            
            case 3:
                printf("A figura é um triangulo\n");
                break;

            case 4:
                printf("A figura é um quadrado\n");
                break;
            
            case 5:
                printf("A figura é um pentagono\n");
                break;
            
            case 6:
                printf("A figura é um hexagono\n");
                break;

            default:
                printf("Numero de lados invalido");
                break;
        }
        system("pause");
    }