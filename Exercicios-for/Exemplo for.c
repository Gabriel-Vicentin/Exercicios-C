#include <stdio.h>
#include <stdlib.h>

    int main(){

        int i, x, soma=0;

        printf("Informe 5 valores:\n");

            for (i=0; i < 5; i++){
                printf("valor: ");
                scanf("%i", &x);
                soma = soma + x;
            }
            printf("A soma dos valores informados equivale a: %i\n", soma);
            system("pause");
        
    }