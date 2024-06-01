#include <stdlib.h>
#include <stdio.h>
#include <math.h>

     float delta(int a, int b, int c){
        
        return pow (b, 2) - (4*a*c);
    }
     

    int main (){

        float a, b, c, resp;
            printf("Digite o valor de A: ");
                scanf("%f", &a);
            printf("Digite o valor de B: ");
                scanf("%f", &b);
            printf("Digite o valor de C: ");
                scanf("%f", &c);    
            resp = delta(a,b,c);
            printf("O delta equivale a: %.2f", resp);
    return 0;
    }