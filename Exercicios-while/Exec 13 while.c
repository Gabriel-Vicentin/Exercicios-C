# include <stdlib.h>
# include <stdio.h>

    int main(){

        int n, cont = 0, result = 1;

            cont = 0;
            printf("Digite um numero: ");
                scanf("%i", &n);
            
            do
            {
                if (result % 2 != 0){
                    printf ("%i\n", result);
                    cont++;
                }
                result++;
            } while  (cont < n);
        system("pause");
    }