#include <stdlib.h>
#include <stdio.h>

int main (){

    int a[6]={1, 0, 5, -2, -5, 7}, soma, i;

        soma = a[0] + a[1] + a[5];
        printf("a soma desses vetores equivale a: %i\n", soma);

    a[4] = 100;
    for (i = 0; i < 6; i++)
    {
        printf("%i\n", a[i]);
    } 
    
    return 0;

}