#include <stdlib.h>
#include <stdio.h>

    int main (){

        int vet[8], i, j, soma;

            for ( i = 1; i < 9; i++){
                printf("%iº Numero: ", i);
                    scanf("%i", &vet[i]);
            }   
            for (j = 8; j > 0; j--) {
                printf("%i ", vet[j]); 
            }
        return 0;
    }   