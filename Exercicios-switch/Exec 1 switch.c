#include <stdlib.h>
#include <stdio.h>

    int main(){

        float n1, n2, result;
        char op;
        int operador;
        
        do{
        printf("Informe dois numeros: ");
            scanf("%f %f", &n1, &n2);

        printf("Qual operador deseja utilziar?\n");
        printf("----------------\n");
        printf("1 para + \n");
        printf("2 para - \n");
        printf("3 para / \n");
        printf("4 para * \n");
            scanf("%i", &operador);
        printf("----------------\n");

        switch(operador){

            case 1:
                result = (n1 + n2);
                break;
            
            case 2:
                result = (n1 - n2);
                break;

            case 3:
                result = (n1 / n2);
                break;
            
            case 4:
                result = (n1 * n2);
                break;
            
            default:
                printf("Operador invalido\n");
                break;
            }
            
            printf("O resultado da conta equivale a: %.3f \n", result);

            printf("Deseja fazer outro calculo [S ou N]?\n");
                scanf("%s", &op);

        }while (op == 's' || op == 'S');
        
    system("pause");

    }