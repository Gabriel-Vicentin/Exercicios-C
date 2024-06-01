#include <stdio.h>
#include <stdlib.h>

    int main () {

        int escolha, resp, cont;
        char ida;

            do{
                printf("Qual o seu destino?\n");
                printf("1 - Região norte\n");
                printf("2 - Região Nordeste\n");
                printf("3 - Região Centro Oeste\n");
                printf("4 - Região Sul\n");
                    scanf("%i", &escolha);
                
                switch (escolha)
                {
                case 1:
                    printf("Deseja ida e volta? [S/N]\n");
                        scanf("%s", &ida);
                    if (ida == 'S' || ida == 's'){
                        resp = 900;
                    }else{
                        resp = 500;
                    }
                    printf("O valor da viagem equivale a: %i\n", resp);
                    break;
                

                case 2:
                    printf("Deseja ida e volta? [S/N]\n");
                        scanf("%s", &ida);
                    if (ida == 'S' || ida == 's'){
                        resp = 650;
                    }else{
                        resp = 350;
                    }
                    printf("O valor da viagem equivale a: %i\n", resp);
                    break;

                case 3:
                    printf("Deseja ida e volta? [S/N]\n");
                        scanf("%s", &ida);
                    if (ida == 'S' || ida == 's'){
                        resp = 600;
                    }else{
                        resp = 350;
                    }                        
                    printf("O valor da viagem equivale a: %i\n", resp);
                    break;
                
                case 4:
                    printf("Deseja ida e volta? [S/N]\n");
                        scanf("%s", &ida);
                    if (ida == 'S' || ida == 's'){
                        resp = 550;
                    }else{
                        resp = 300;
                    }    
                    printf("O valor da viagem equivale a: %i\n", resp);
                    break;
                
                default:
                    printf("Opção invalida\n");
                    break;
                }
                printf("Deseja realizar outra operação?\n");
                printf("1 para sim\n");
                printf("0 para não\n");
                    scanf("%i", &cont);

            }while (cont == 1);

    }