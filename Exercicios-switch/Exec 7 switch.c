#include <stdlib.h>
#include <stdio.h>

    int main (){

        float  peso, pesotot;
        int planeta, escolha;

            do{
                printf("Qual o seu peso?");
                    scanf("%f", &peso);

                printf("|---------------------------------------------|\n");
                printf("|Deseja calculor o  seu peso em qual planeta? |\n");
                printf("|---------------------------------------------|\n");
                printf("|   1 - Mercurio                              |\n");
                printf("|   2 - Venus                                 |\n");
                printf("|   3 - Marte                                 |\n");
                printf("|   4 - Jupiter                               |\n");
                printf("|   5 - Saturno                               |\n");
                printf("|   6 - Urano                                 |\n");
                printf("|---------------------------------------------|\n");
                    scanf("%i", &planeta);
                
                switch (planeta)
                {
                case 1:
                    pesotot = peso * 0.37;
                    printf("O seu peso em Mercurio equivale a: %.2f\n",pesotot);
                    break;
                
                case 2:
                    pesotot = peso * 0.88;
                    printf("O seu peso em Venus equivale a: %.2f\n",pesotot);
                    break;

                case 3:
                    pesotot = peso * 0.38;
                    printf("O seu peso em Marte equivale a: %.2f\n",pesotot);
                    break;


                case 4:
                    pesotot = peso * 2.64;
                    printf("O seu peso em Jupiter equivale a: %.2f\n",pesotot);
                    break;
                
                case 5:
                    pesotot = peso * 1.15;
                    printf("O seu peso em Saturno equivale a: %.2f\n",pesotot);
                    break;

                case 6:
                    pesotot = peso * 1.17;
                    printf("O seu peso em Urano equivale a: %.2f\n",pesotot);
                    break;

                default:
                    printf("Opção invalida");
                    break;
                }
                printf("Gostariade realizar outro teste?\n");
                printf("1 para sim\n");
                printf("0 para não\n");
                    scanf("%i", &escolha);

            }while (escolha == 1);

    }