# include <stdlib.h>
# include <stdio.h>

    int main(){

        int num, mai, cont;

            cont = 1;
            while (cont <= 10)
            {
            printf("Digite um valor: \n");
                scanf("%i", &num);
                cont = cont + 1;
                    if (num > mai){
                        mai = num;
                    }
            }
            printf("O maior numero digitado foi: %i\n ", mai);

            system("pause");
        
    }