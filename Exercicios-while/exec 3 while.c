# include <stdlib.h>
# include <stdio.h>

    int main (){

        float cont, soma, num, media;

            cont = 1;
            while (cont <= 10){
                printf("Digite um valor\n");
                    scanf("%f", &num);
                    cont = cont + 1;
                    soma = soma + num;
            }  

            media = (soma / 10);

            printf("A media de todos os valores informados equivale a: %.2f \n", media);
            
    system("pause");
    }