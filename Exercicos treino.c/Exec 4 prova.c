#include <stdio.h>

    int main(){

        int tempo, cont=0, x=0, men;

            while (cont <=3){
                printf("Digite o tempo do %i atleta: ", cont);
                    scanf("%i", &tempo);
                
                x = tempo;
                if (x == 0 || tempo < x){
                    men = tempo;
                }

                if (tempo < men){
                    men = tempo;
                }
            cont++;
            }
                printf("menor tempo %i\n", men);
                
        system("pause");
    }