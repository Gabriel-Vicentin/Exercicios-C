# include <stdlib.h>
# include <stdio.h>

int main(){

    float sal;

        printf("Qual é o seu salario?");
            scanf("%f", &sal);

        if (sal <= 600){
            printf("Isento");
        }else if (sal > 600 && sal <= 1200){
            printf ("O desconto do inss foi %.2f\n: ", sal * 0.20);
        }else if (sal > 1200 && sal <= 2000){
            printf("O desconto do inss foi %.2f\n: ", sal * 0.25);
        }else if (sal > 2000){
            printf("O desconto do inss foi %.2f\n: ", sal * 0.30);
        }
        
}