#include <stdio.h>
#include <stdlib.h>

    int main(){

        int n, cont = 2, result = 1;

        printf("Digite um numero");
            scanf("%i", &n);

            while (cont < n){
                if (n % cont == 0) {
                    result = 0; 
                    break; 
                }
                cont++;
            }
                
            if (n != 1 && result == 1){
                printf("%i é um numero primo\n", n);
            }else{
                printf("%i não é um numero primo\n", n);
            }
        system("pause");        
    }
