# include <stdlib.h>   
# include <stdio.h>
# include <math.h>
# include <locale.h>

int main () { 

    int peso, idade;

    printf("Qual a sua idade?\n");
        scanf("%i", &idade);
    printf("Qual o seu peso?\n");
        scanf("%i", &peso);
    if (idade >= 18 && idade <= 67 && peso >= 50){
        printf("elegivel para doação de sangue\n");
    }else{
        printf("Não elegivel para doar sangue\n");
    }
}