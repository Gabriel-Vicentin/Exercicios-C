#include <stdlib.h>
#include <stdio.h>
#include <stdalign.h>
#include <math.h>

    void potencia (float x){
        float result;
        result = pow(x, 11);
        printf("%.2f elevado a enesima potencia equivale a: %.2f\n", x, result);
    }

    int main (){

        float x, n, f;
            printf("Defina o valor de x\n");
                scanf("%f", &x);
            potencia(x);
    }