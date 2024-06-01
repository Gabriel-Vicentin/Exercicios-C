#include <stdlib.h>
#include <stdio.h>

    int main (){

        int vet[5], i, j, soma;
            for ( i = 0; i < 5; i++) {
                printf("%iº Numero: ", i + 1);
                    scanf("%i", &vet[i]);
                    soma += vet[i];
            }

            for ( j = 0; j < 5; j++) {
                printf("%i ", vet[j]);
            }

            printf("\n");
            printf("A soma dos numeros acima equivale a: %i", soma);
        return 0;
    }