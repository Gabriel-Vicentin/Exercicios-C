#include <stdio.h>
#include <stdlib.h>


int x, y, soma;

    int total(){
        soma = x + y;
    return 0;
}

int main (){

    int x, y, soma;

        printf("Informe o valor de x: ");
            scanf("%i", &x);
        printf("Informe o valor de y: ");
            scanf("%i", &y);
        total(x,y);
        printf("A soma de x e y equivale a %i\n", soma);

    system("pause");
}