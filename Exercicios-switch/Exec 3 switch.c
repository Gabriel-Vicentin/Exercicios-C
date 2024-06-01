#include <stdlib.h>
#include <stdio.h>

    int main (){
        int cont;
        char escolha;
        float raio, acirculo, bretangulo, altretangulo, lquadrado, aretangulo, aquadrado;
            
            do{
                printf("|-----------------------------|\n");
                printf("|            MENU             |\n");
                printf("|-----------------------------|\n");
                printf("|   C - Area de um circulo    |\n");
                printf("|   R - Area de um retangulo  |\n");
                printf("|   Q - Area de um quadrado   |\n");
                printf("|-----------------------------|\n");
                    scanf(" %s", &escolha);

                switch (escolha)
                {
                    case 'c':
                    case 'C':
                        printf("Qual o raio do ciruclo?\n");
                            scanf("%f", &raio);
                        acirculo = 3.14 * (raio * raio);
                        printf("A area do circulo equivale a: %.2f\n", acirculo);

                    break;
                
                    case 'r':
                    case 'R':
                        printf("Qual a base e a altura do retangulo?\n");
                            scanf("%f %f", &bretangulo, &altretangulo);
                        aretangulo = bretangulo * altretangulo;
                        printf("A area total do retangulo equivale a: %.2f\n", aretangulo);
                    break;

                    case 'q':
                    case 'Q':
                        printf("Qual o lado do quadrado?");
                            scanf("%f", &lquadrado);
                        aquadrado = lquadrado * lquadrado;
                        printf("A area total do quadrado equivale a: %.2f\n", aquadrado);
                    break;


                    default:
                        printf("Valor invalido\n");
                    break;
                }
            printf("Deseja continuar?\n");
            printf("1 - para sim\n");
            printf("0 - para não\n");
                scanf("%i", &cont);

            }while (cont == 1);

    return 0;
    }