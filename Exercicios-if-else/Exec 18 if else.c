# include <stdio.h>
# include <stdlib.h>

int main () {

    float alt, peso;
    int sex;

        printf("Qual é a sua altura");
            scanf("%f", &alt);

        printf("Qual e o seu genero?");
            scanf("%i", &sex);

        if (sex == 'M'){
            peso = ((72.4 * alt) - 58);
            printf("O peso ideal para sua altura equivale a %.2f\n", peso);
        
        }else if (sex == 'F'){
            peso = ((62.1 * alt) - 44.7);
            printf("O peso ideal para sua altura equivale a: %.2f\n", peso);
        } 

    system("pause");
}