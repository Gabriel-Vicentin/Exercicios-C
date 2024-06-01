#include <stdio.h>
#include <stdlib.h>

    int main(){

        int idade, valor, cont, vfixo=100;
            
            do{
                printf("|---------------------------------------|\n");
                printf("|                 MENU                  |\n");
                printf("|---------------------------------------|\n");
                printf("|   1 - Crianças menos de 10 anos       |\n");
                printf("|   2 - Conveniado entre 10 e 30 anos   |\n");
                printf("|   3 - Conveniado entre 40 e 60 anos   |\n");
                printf("|   4 - Conveniados com mais de 60 anos |\n");
                printf("|---------------------------------------|\n");
                   scanf("%i", &idade);

                switch (idade)
                {
                case 1:
                    valor =+ vfixo + 80;
                    printf("O valor a ser pago do plano de saude equivale a: %i\n", valor);
                break;
                
                case 2:
                    valor += vfixo + 50;
                    printf("O valor a ser pago do plano de saude equivale a: %i\n", valor);
                break;

                case 3:
                    valor += vfixo + 95;
                    printf("O valor a ser pago do plano de saude equivale a: %i\n", valor);
                break;

                case 4:
                    valor += vfixo + 130;
                    printf("O valor a ser pago do plano de saude equivale a: %i\n", valor);
                break;

                default:
                    printf("Valor invalido\n");
                break;
                }
            printf("Gostaria de cotinuar?\n");
            printf("1 - para sim\n");
            printf("0 - para não\n");
                scanf("%i", &cont);
            }while(cont == 1);

        return 0;
    }