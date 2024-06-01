# include <stdlib.h>
# include <stdio.h>
# include <string.h>

int main (){

    int idade;
    char sexo;

        printf("Qual o seu sexo (M ou F)?");
            scanf(" %c", &sexo);

        printf("Qual a sua idade?\n");
            scanf("%i", &idade);

        if (idade <= 25 && sexo == 'F')
            printf("Aceita\n");

        else printf ("Não aceita(o)\n");

    system("pause");
}
