#include <stdlib.h>
#include <stdio.h>

    int main (){

        int vet1[5], vet2[5], result[5], i, j, k;

            for ( i = 0; i < 5; i++) {
                printf("%iº Numero primeiro vetor: ", i + 1);
                    scanf("%i", &vet1[i]);
            }
            printf("\n");
            for ( j = 0; j < 5; j++) {
                printf("%iº Numero segundo vetor: ", j + 1);
                    scanf("%i", &vet2[j]);
            }
            printf("\n");
            for ( k = 0; k < 5; k++) {
                result[k] = (vet1[k] + vet2[k]);
                printf("A soma dos vetores equivale a: %i \n", result[k]);
            }
        return 0;
    }