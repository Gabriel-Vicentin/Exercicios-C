#include <stdio.h>
#include <stdlib.h>

    int main(){

        int n1, cont, mult, j = 0;

            n1 = 0;
            while (j <= 5 ){

                if (cont % 3 == 0){
                    printf("%i\n", cont);
                    j++;
                }
             cont = cont + 1;
            }
        system("pause");
    }