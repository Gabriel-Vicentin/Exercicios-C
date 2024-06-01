#include <stdlib.h>
#include <stdio.h>

    int main (){
        float vet[10];
        int i, j, flag=0;
            printf("Informe 10 valores\n");
            for (i = 0; i < 10; i++)
            {
                scanf("%f", &vet[i]);
            }
            for ( i = 0; i < 10; i++){
                for (j = i+1; j < 10; j++){
                    if (vet[i]  == vet[j]){
                        printf("%f  ", vet[i]);
                        flag = 1;
                    }
                }
            }
            if (flag == 0){
                printf("Todos os numeros são diferentes");
            }
    return 0;            
    }