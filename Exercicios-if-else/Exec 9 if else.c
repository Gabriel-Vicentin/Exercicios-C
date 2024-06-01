# include <stdio.h>
# include <stdlib.h>

    int main () {

        float n1, n2, med;

        printf("Digite a primeira nota: ");
            scanf("%f", &n1);
        
        printf("Digite a segunda nota: ");
            scanf("%f", &n2);

        med = (n1 + n2) / 2;

        if (med < 5){
            printf("Reprovado\n");

        }else if (med >= 5.1 && med <= 6.9){
            printf("Exame\n");

        }else if (med >= 7 && med <= 10){
            printf("Aprovado\n");
        }
    system("pause");
    }