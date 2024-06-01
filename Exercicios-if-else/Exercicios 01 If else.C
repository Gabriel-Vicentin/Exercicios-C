# include <stdlib.h>   
# include <stdio.h>
# include <math.h>
# include <locale.h>
int main() {

    int x;
    printf("Informe um valor para x\n");
    scanf("%i", &x);
    if(x > 10){
        printf("Valor de x maior que 10\n");
    }else if (x < 10){
        printf("Valor de x menor que 10\n");
    }else if (x == 10){
        printf("valor de x igual a 10\n");
    }
    system("pause");

}