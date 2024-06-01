# include <stdlib.h>
# include <stdio.h>

    int main(){

        int i, j, linha, coluna;

            printf("Informe o numero de linhas: ");
                scanf("%i", &linha);

            printf("Informe o numero de linhas: ");
                scanf("%i", &coluna);

                j = 1; 
            
                while ( j <= linha){ //n = linha // m = coluna
                    i = 1;
                    while (i <= coluna){
                        printf("*");
                        i = i + 1;
                }
                    printf ("\n");
                    j = j + 1;
                }
        system("pause");
    }