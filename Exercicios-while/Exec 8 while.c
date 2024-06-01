#include <stdio.h>
#include <stdlib.h>

    int main(){

        float n, neg, pos, seq;

            do{ 
                printf("Digite um numero: ");
                    scanf("%f", &n);

                if (n < 0){
                    neg = neg + n;
                    
                }else{
                    pos = pos + n;
                }
                       
            }while (n != 0);
            
            printf("A soma de todos os numeros negativos digitados é: %f\n", neg);
            printf("A soma de todos os numeros positivos digitados é: %f\n", pos);

        system("pause");
    }