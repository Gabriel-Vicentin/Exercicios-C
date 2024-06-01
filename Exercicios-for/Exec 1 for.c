#include <stdio.h>
#include <stdalign.h>

    int main (){

        int num, cont=1, result;

            printf("Qual numero você deseja vizualizar a tabuada?\n");
                scanf("%i", &num);

            for (cont = 1; cont <= 10; cont++)
            {
                result = num * cont;
                printf("%i X %i  =  %i\n", num, cont, result);
            }
        return 0;
    }