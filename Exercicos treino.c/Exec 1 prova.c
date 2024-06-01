#include <stdlib.h>
#include <stdio.h>
#include <stdalign.h>

    int main(){

        int  somb, sombpred;
        float tot, alt;

            printf("Qual é a altura da pessoa?");
                scanf("%f", &alt);

            printf("Qual é o comprimento da sombra da pessoa??");
                scanf("%i", &somb);
            
            printf("Qual é o comprimento da  sombra do predio?");  
                scanf("%i", &sombpred);

            tot = (alt * sombpred) / somb;

                if (tot > 2.30){
                    printf("%.2f M é uma altura valida", tot);
                }else {
                    printf("%.2f M não é uma altura valida");
                }

        system("pause");
    }