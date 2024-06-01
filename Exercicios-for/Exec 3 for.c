#include <stdlib.h>
#include <stdio.h>
#include <stdalign.h>

    int main(){

        int num, cont=0, mai, tot;

            printf("Digite 10 numeros\n");
                for ( cont = 0; cont < 4; cont++){
                        scanf("%i", &num);
                        if (num > mai)
                        mai = num;
            }
            printf("O maior numero digitado foi: %i\n", mai);
            
        system("pause");
    }