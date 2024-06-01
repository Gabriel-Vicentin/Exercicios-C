#include <stdlib.h>
#include <stdio.h>
#include <stdalign.h>

    int main (){

        int num, cont=0, t1=0, t2=1, t3;

            printf("Quantos numeros gostaria de observar?");
                scanf("%i", &num);

            printf("0 1");
            for ( cont = 3; cont <= num; cont++)
            {
                t3 = t1 + t2;
                t1 = t2;
                t2 = t3;

                printf(" %i", t3);
            }
        system("pause");
    }