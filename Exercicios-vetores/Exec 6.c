#include <stdlib.h>
#include <stdio.h>
#include <time.h>

    int main (){

        int veta[8], x, y, i, j, k, num1, num2, result, flag = 0;

            srand(time(NULL));
            for ( i = 0; i < 8; i++) {
                veta[i] = 1+rand()%10;
                printf("%i..   ", veta[i]);
            }

            do{
                printf("\n");
                printf("Informe duas posições do vetor: \n");
                    scanf("%i %i", &x, &y);
            
                flag = 0;
                if (x <= 0 || x > 9 || y <= 0 || y > 9){
                    printf("Posição invalida, tente novamente");
                    flag = 1;
                }
            }while (flag != 0);

            for ( j = 0; j < x; j++) {
                num1 = veta[j];
            }

            for ( k = 0; k < y; k++) {
                num2 = veta[k];
            }

            result = num1 + num2;
            printf("A soma das posições informadas equivale a: %i", result);

        return 0;
    }