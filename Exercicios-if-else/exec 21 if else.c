# include <stdlib.h>
# include <stdio.h>
# include <math.h>

    int main () {

        int a, b, c; 
        float delta, raiz1, raiz2;

            printf("Insira o primeiro valor");
                scanf("%i", &a);

             if (a == 0){
                printf("Não é equação de segundo grau");
                return 0;
            }
            
            printf("Insira o segundo valor");
                scanf("%i", &b);

            printf("Insira o terceiro valor");
                scanf("%i", &c);
            
            // equação de segundo grau:  aX2 + bx + C = 0
            // delta = b^2 - 4.a.c

            delta = pow(b,2) - (4*a*c);
            
            if (delta >= 0) 
            {
                raiz1 = (-b + sqrt(delta)) / ( 2 * a);
                raiz2 = (-b - sqrt(delta)) / ( 2 * a);
                printf("O valor do delta equivale a %.2f\n", delta);
            }
            else
            {
                printf("Não ha raizes reais. \n");
            }
        }
