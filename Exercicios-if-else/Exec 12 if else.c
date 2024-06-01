# include <stdlib.h>
# include <stdio.h>
# include <math.h>

int main (){
    float l1, l2, hip, res;

        printf("Quais são os dois lados do triangulo retangulo?\n");
            scanf("%f %f", &l1, &l2);

        hip =  pow(l1, 2) + pow(l2, 2);
        res = sqrt (hip);

        if (res > 100)
            printf("Hipotenusa excede o tamanho permitido para a área\n");
        else 
            printf("Hipotenusa aceita\n");

    system("pause");
}