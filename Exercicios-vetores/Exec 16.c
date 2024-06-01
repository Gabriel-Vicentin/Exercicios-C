#include <stdlib.h>
#include <stdio.h>

    int main (){

        int vet[10], j, i, k, num, flag = 0;

        for (i = 0; i < 10; i++)
        {
            do{
            printf("Digite o %i valor: \n", i + 1);
                scanf("%i", &num);

                    flag = 0;
                    for ( j = 0; j < i; j++) {
                        if (vet[j] == num){
                            flag = 1;
                            printf("Numero invalido, digite novamente: \n");
                        break;
                        }
                    }
            }while (flag != 0);

            vet[i] = num;
        }
        printf("Os valores do vetor equivalem a: ");
        printf("\n");

        for ( k = 0; k < 10; k++)
        {
            printf("%i   ", vet[k]);
        }

        return 0;
    }   