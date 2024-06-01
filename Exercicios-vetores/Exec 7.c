#include <stdlib.h>
#include <stdio.h>

    int main (){

        int vet[10], i, men, mai = 0, k, x = 0, j;

            printf("Digite 10 valores para preencher o vetor: \n");

                for (i = 0; i < 10; i++) {
                    printf("%iº valor: ", i + 1);
                        scanf("%i", &vet[i]);
                    if (mai < vet[i]){
                        mai = vet[i];
                    }

                    x = vet[i];
                    if (x == 0 || vet[i] < x ){
                        men = vet[i];
                    }

                    if (vet[i] < men){
                        men = vet[i];
                    }
                }
            printf("\n");
            printf("Os valores do vetor equivalem a: \n");
            
            for (k = 0; k < 10; k++) {
                printf("%i  ", vet[k]);
            }
            
            printf("\n");
            printf("O menor valor equivale a: %i \n", men);
            printf("O maior valor equivale a: %i \n", mai);

            for (j = 0; j < 10; j++) {

                if (vet[j] == mai){
                    printf("A posicao do maior vetor equivale a: %i \n", j + 1);
                }

                if (vet[j] == men){
                    printf("A posicao do menor vetor equivale a: %i \n", j + 1);
                }
            }   
        return 0;
    }