#include <stdlib.h>
#include <stdio.h>

int main(){

    int valor, total, n100 = 0, n50 = 0 , n20 = 0, n10 = 0, n5 = 0, n2 = 0, n1 = 0;

        printf("Qual o valor do saque?");
            scanf("%i", &valor);

        while (valor >= 100) {
            valor = valor - 100;
            n100 = n100 + 1;
        }
        while(valor >= 50){
            valor = valor - 50;   
            n50 = n50 + 1;
        }

        while(valor >= 20){
            valor = valor - 20;   
            n20 = n20 + 1;
        }
        
        while(valor >= 10){
            valor = valor - 10;   
            n10 = n10 + 1;
        }

        while(valor >= 5){
            valor = valor - 5;   
            n5 = n5 + 1;
        }

        while(valor >= 2){
            valor = valor - 2;   
            n2 = n2 + 1;
        }

        while(valor >= 1){
            valor = valor - 1;   
            n1 = n1 + 1;
        }

        printf("O total de notas necessarias para o saque equivale a:\n");
        printf("Notas de 100 reais: %d\n", n100);
        printf("Notas de 50 reais: %d\n", n50);
        printf("Notas de 20 reais: %d\n", n20);
        printf("Notas de 10 reais: %d\n", n10);
        printf("Notas de 5 reais: %d\n", n5);
        printf("Notas de 2 reais: %d\n", n2);
        printf("Notas de 1 real: %d\n", n1);
            
        

    system("pause");
}