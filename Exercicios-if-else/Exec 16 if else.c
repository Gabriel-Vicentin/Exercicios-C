# include <stdio.h>
# include<stdlib.h>

int main(){

    int dia, mes, ano;

        printf("Qual a sua data de aniversario? [dia, mês, ano]\n");
            scanf("%i %i %i", &dia, &mes, &ano);
    
        if (dia > 31 || dia <= 0){
            printf("Data invalida");
        return 0;
        }

        if (mes < 1 || mes > 12 ){
            printf("data invalida");
        return 0;
        }

        if (ano > 2018){
            printf("data invalida");
        return 0;
        }

        if (dia < 31 && dia >= 1 && ano < 2018 && mes >= 1 && mes <= 12 ){
            printf("Data de aniversario valida");
        }
    system("pause");
    }