#include <stdlib.h>
#include <stdio.h>

    int main(){

        int tipo, dist, cont;
        float resp;
            do{
                printf("|---------------------------------------------|\n");
                printf("|            Qual o tipo do carro?            |\n");
                printf("|---------------------------------------------|\n");
                printf("|   1 - Carro tipo A                          |\n");
                printf("|   2 - Carro tipo B                          |\n");
                printf("|   3 - Carro tipo C                          |\n");
                printf("|---------------------------------------------|\n");
                    scanf("%i", &tipo);

                printf("Qual o tamanho em KM da distancia percorrida?\n");
                    scanf("%i", &dist);

                switch (tipo)
                {
                case 1:
                    resp = dist / 12;
                    printf("o gasto em gasolina equivale a: %.2fL\n", resp);
                    break;

                case 2:
                    resp = dist / 9;
                    printf("o gasto em gasolina equivale a: %.2fL\n", resp);
                    break;

                case 3:
                    resp = dist / 8;
                    printf("o gasto em gasolina equivale a: %.2fL\n", resp);
                    break;
                
                default:
                    printf("Opção invalida\n");
                    break;
                
                }
                printf("Deseja realizar outro calculo?\n");
                printf("1 para sim\n");
                printf("0 para não\n");
                    scanf("%i", &cont);

            }while (cont == 1);

    }