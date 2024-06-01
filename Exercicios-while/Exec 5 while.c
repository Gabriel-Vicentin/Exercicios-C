# include <stdlib.h>
# include <stdio.h>

    int main(){

        int num, mult, result;

            mult = 1;
            printf("Digite um numero para vizualizar sua tabuada: ");
                scanf("%i", &num);

            while (mult <= 10){
            printf("%i x %i = %i\n", num, mult, (num * mult));
            mult = mult + 1;
            }
    }