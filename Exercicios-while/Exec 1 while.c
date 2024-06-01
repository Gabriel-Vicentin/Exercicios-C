#include <stdlib.h>
#include<stdio.h>

int main () {

    int cont;

        cont = 1;

        while (cont <= 50){
            
            if (cont % 2 == 0)
            {

                printf("%i\n", cont);
            }
            cont = cont + 1;
        }
        system("pause");

}