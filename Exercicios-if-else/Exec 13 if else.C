# include <stdlib.h>
# include <stdio.h>

int main (){    

    float sal, prest;

        printf("Qual o valor do salario bruto?\n");
            scanf("%f", &sal);

        printf("Qual o valor da prestação?\n");
           scanf("%f", &prest);

        if (prest < sal * 0.30)
            printf("O emprestimo pode ser concedido\n");
        else
            printf("O emprestimo não pode ser concedido\n");

    system("pause");
}