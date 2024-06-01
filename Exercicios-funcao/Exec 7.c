#include <stdio.h>
#include <stdlib.h>

float avista(float gasto){
    float result;
        result = gasto - (gasto * 0.10); 
            printf("O preco a vista com o desconto equivale a %.2f", result);
    return 0;
}


float duasv(float gasto){
    printf("O preco equivale a 2 parcelas de %.2f", gasto / 2);
return 0;
}

float parceladoj(float gasto){
    int mes;
    float result, juros;

    printf("Quantas vezes deseja fazer? [3 a 10]");
        scanf("%i", &mes);
        if (mes < 3 || mes > 10){
            printf("Quantidade de parcelas invalidas\n");
            return 0;
        }
        juros = 3 * mes;
        result = (gasto + (gasto * (juros / 100))) / mes;
    printf("o valor sera %i parcelas de %.2f\n", mes, result);
    return 0;
    
}

int main(){
    float gasto;
    int escolha;

        printf("Qual foi o total gasto na loja?");
            scanf("%f", &gasto);
                printf("|-----------------------------------------------------------------------------------|\n");
                printf("|                             MENU DE PAGAMENTO                                     |\n");
                printf("|-----------------------------------------------------------------------------------|\n");
                printf("|   1 - A vista com 10 por cento de desconto                                        |\n");
                printf("|   2 - Duas vezes (preco da etiqueta)                                              |\n");
                printf("|   3 - 3 até 10 vezes com 3 por cento de juros (apenas compras de R$100 ou mais)   |\n");
                printf("|-----------------------------------------------------------------------------------|\n");
                    scanf("%i", &escolha);
                switch (escolha)
                {
                case 1:
                    avista(gasto);
                break;
                
                case 2:
                    duasv(gasto);
                break;

                case 3:
                    if (gasto > 100){
                        parceladoj(gasto);
                    }else
                    printf("Apenas compras de R$100 ou mais");
                break;

                default:
                    printf("Opcao invalida");
                break;
                }
    return 0;
}