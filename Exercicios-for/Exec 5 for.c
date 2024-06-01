#include <stdlib.h>
#include <stdio.h>
#include <stdalign.h>

    int main(){

        float num, cont=0, mai, tot, quant, men;

            printf("Quantos numeros deseja testar?\n");
                scanf("%f", &quant);
                
                printf("Digite os %.1f numeros\n", quant);

                    for ( cont = 0; cont < quant; cont++){
                            scanf("%f", &num);

                            if (num > mai){
                                mai = num;
                            }
                            men = mai;
                            if (num <= men);
                                men = num;
            }
            printf("O maior numero digitado foi: %.1f\n", mai);
            printf("O menor numero digitado foi %.1f\n", men);
            
        system("pause");
    }