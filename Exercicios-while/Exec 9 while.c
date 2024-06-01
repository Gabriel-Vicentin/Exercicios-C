#include <stdio.h>
#include <stdlib.h>

    int main (){

        float renda, continuar;
            
            do
            {
        
                printf("Qual a sua renda mensal?\n");
                    scanf("%f", &renda);
            
                if (renda < 1637.11){
                    printf("Isento\n");

                } else if (renda > 1637.12 && renda < 2453.50){
                    printf("O valor a ser pago equivale a: %f\n", renda * 0.075);

                } else if (renda > 2453.50 && renda < 3271.38) {
                    printf("O valor a ser pago equivale a: %f\n", renda * 0.15);

                }else if (renda > 3271.38 && renda < 4087.65){
                    printf("O valor a ser pago equivale a: %f\n", renda * 0.225);

                }else if (renda > 4087.65){
                    printf("O valor a ser pago equivale a: %f\n", renda * 0.275);
                }

                printf("Deseja continuar? \n");
                printf("1 para sim\n");
                printf("0 para sair\n");
                    scanf("%f", &continuar);      
                 
            } while (continuar != 0);
        system("pause");
    }