#include <stdlib.h>
#include <stdio.h>

    void parimpar(int num){
        if (num % 2 == 0)
            printf("O valor é par\n");
        else
            printf("O valor é impar\n");
    }

    int main (){

        int num;
            printf("Digite um valor: ");
                scanf("%i", &num);
            parimpar(num);
    return 0;
    }