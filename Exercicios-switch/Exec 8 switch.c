#include <stdlib.h>
#include <stdio.h>

    int main (){

        int conta, tipo;
        float saldo=0, valor;
        char resp;

            printf("Informe o numero da conta que deseja movimentar\n");
                scanf("%i", &conta);
            do{
            printf("Qual tipo de operação gostaria de realizar?\n");
            printf("1 - Deposito\n");
            printf("2 - Retirada\n");
            printf("3 - Consulta saldo\n");
                scanf("%i", &tipo);
            
                switch(tipo){
                    case 1:
                        printf("Qual valor sera depositado?\n");
                            scanf("%f", valor);   
                                saldo = saldo + valor;
                                //saldo += valor; 
                    break;

                    case 2:
                        printf("Qual valor sera retirado?\n");
                            scanf("%f", &valor);   
                                saldo = saldo - valor;
                                //saldo -= valor;
                                if (valor > saldo) {
                                    printf("Saldo insuficiente\n");
                                }else{
                                    saldo = saldo - valor;
                                }
                    break;

                    case 3:
                        printf("Saldo em conta:  %.2f\n", saldo);
                    break;

                    default:
                        printf("Opção invalida\n");
                    break;
                }
                printf("Deseja efetuar nova operação? [S / N]\n");
                    scanf(" %s", &resp);
            }while (resp == 's' || resp == 'S');

        system("pause");
    }