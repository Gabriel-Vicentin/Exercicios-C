#include <stdlib.h>
#include <stdalign.h>
#include <math.h>
#include <stdio.h>


    int main (){

        int expo, base, result;

            printf("Qual sera a base?\n");
                scanf("%i", &base);

            printf("Qual vai ser o expoente?\n");
                scanf("%i", &expo);

                if (base > 1 && expo >=2 ){
                    result = pow(base, expo);
                    printf("%i\n", result);

                }else{
                    printf("Numero invalido\n");
            }
        system("pause");

    }