#include <stdlib.h>
#include <stdio.h>

    int main (){

        int veta[10], vetb[10], vetc[10], i, j, k;

        for ( i = 0; i < 10; i++) {
                printf("%iº Numero primeiro vetor: ", i + 1);
                    scanf("%i", &veta[i]);
        }

        printf("\n");
        for ( j = 0; j < 10; j++) {
            printf("%iº Numero segundo vetor: ", j + 1);
                scanf("%i", &vetb[j]);
        }

        printf("\n");
        for ( k = 1; k < 11; k++) {
            if (veta[k] > vetb[k]){
                vetc[k] = 1;
            }
            if (veta[k] == vetb[k]){
                vetc[k] = 0;
            }
            if (veta[k] < vetb[k]){
                vetc[k] = -1;
            }
        printf("%iº valor do vetor C: %i\n", k, vetc[k]);
        }

    }