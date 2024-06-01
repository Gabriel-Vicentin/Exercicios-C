# include <stdlib.h>   
# include <stdio.h>
# include <math.h>
# include <locale.h>
# include <conio.h>

int main () {

    int num1, numdec;
    printf("Digite um numero\n");
        scanf("%i %i", &num1, &numdec);
    if (numdec == 00){
        numdec = 100;
    }

    if (num1 % 2 == 0){
        num1 = sqrt(num1);
        printf("A raiz desse numero equivale a: %i\n,", num1); 
    
    }else{
        num1 = num1 / 2;
        numdec = numdec / 2;

        printf("a metade deste numero é %i %i\n", num1, numdec);
    }
system("pause");
}