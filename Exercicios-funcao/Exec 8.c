#include <stdalign.h>
#include <stdio.h>
    
    void mediaari(float n1, float n2, float n3){
        printf("A media aritimetica destas nostas é %.2f\n", (n1 + n2 + n3) / 3);
    }

    void mediapon(float n1, float n2, float n3){
        float result;
            result = (n1*5 + n2*3 + n3*2) / 10;
            printf("A media ponderada destas notas é %.2f\n", result);
    }

    int main (){

        float n1, n2, n3;
        char esc;
            printf("Quais sao as 3 notas do aluno?\n");
                scanf("%f %f %f", &n1, &n2, &n3);
            printf("---------------------------\n");
            printf("           MENU            \n");
            printf("---------------------------\n");
            printf(" A - Media aritimetica\n");
            printf(" P - Media ponderada\n");
            printf("---------------------------\n");
                scanf("%s", &esc);

            switch (esc) {
                case 'A':
                case 'a':
                    mediaari(n1, n2, n3);
                    break;
                
                case 'P':
                case 'p':
                    mediapon(n1, n2, n3);
                    break;

                default:
                    printf("Opcao invalida\n");
                    break;
            }

    return 0;

    }