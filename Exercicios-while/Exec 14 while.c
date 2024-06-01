# include <stdlib.h>
# include <stdio.h>

    int main (){ 

        int n, cont = 1 , result = 0;

            printf("Digite um numero inteiro\n");
                scanf("%i", &n);

            while (cont < n){
                if (n % cont == 0){
                    result = result + cont;
                }
                cont++;
            }
        printf("A soma dos numeros divisores do numero digitado equivale a: %i\n", result);

    system("pause");
    }