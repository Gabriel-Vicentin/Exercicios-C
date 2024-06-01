#include <stdio.h>
#include <stdlib.h>
#include <math.h>

    int main(){

        int soma, cont;

            cont = 1;
    
            while  (cont < 500){

                // se o numero dividido por 3 = 0 então é multiplo de 3   

                if (cont % 3 == 0 && cont % 2 != 0){
                soma = soma + cont;
                }
                cont = cont + 1;
            }
            printf("A soma de todos os numeros impares multiplos de 3 de 1 a 500 equivale a %i\n", soma);

        system("pause");
    }    