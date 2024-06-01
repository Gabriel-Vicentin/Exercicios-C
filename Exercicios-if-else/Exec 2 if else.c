# include <stdlib.h>   
# include <stdio.h>
# include <math.h>
# include <locale.h>

int main(){ 

    int idade;
    printf("Qual é a sua idade?\n");
        scanf("%i", &idade);
    if (idade == 16 || idade == 17 || idade > 70){
        printf("Voto facultativo\n");
    }else if (idade >= 18 && idade <= 70){
        printf("Voto obrigatorio\n");
    }else{
        printf("Você não pode votar");
    }
    system("pause");
}