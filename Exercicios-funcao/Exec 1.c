#include <stdlib.h>
#include <stdio.h>

    void positivo(int num){
        if (num > 0)
            printf("O valor é positivo");
        else
            printf("O valor é negativo");
    }

    int main (){

        int num;
            printf("Digite um valor");
                scanf("%i", &num);
            positivo(num);
    return 0;
    }