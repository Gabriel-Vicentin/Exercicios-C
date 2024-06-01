#include <stdio.h>
#include <stdlib.h>
#include <stdalign.h>

    int  main (){

        int num, cont=0;

            printf("Qual sera o limite da contagem?\n");
                scanf("%i", &num);

            for ( cont = 0; cont < num; cont++)
            {
                if (cont % 2 != 0)
                    printf("%i\n", cont); 
            }
        system("pause");
    }