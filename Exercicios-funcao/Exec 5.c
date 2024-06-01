#include <stdio.h>
#include <stdlib.h>
#include <stdalign.h>


void calculo(float metros){
            printf("O valor em decimetros equivale a: %.2f\n", metros * 10);
            printf("O valor em centimetros equivale a: %.2f\n", metros * 100);
            printf("O valor em milimetros equivale a: %.2f\n", metros * 1000);
}
int main(){
    
    float metros;
        printf("Quantos metros deseja calcular?\n");
            scanf("%f", &metros);
        calculo(metros);
    return 0;
}