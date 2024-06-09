#include <stdlib.h>
#include <stdio.h>

    int main (){

        int vet[5], cod, i, flag = 0, j;

            printf("digite 5 valores para um vetor: \n");
                for (i = 0; i < 5; i++) {
                    scanf("%i", &vet[i]);
                }
            do{
            printf("\n");
            flag = 0;
            printf("|------------------------------------------|\n");
            printf("|                  MENU                    |\n");
            printf("| 1 - Demonstrar o vetor                   |\n");
            printf("| 2 - Demonstrar o vetor na ordem inverda  |\n");
            printf("| 0 - Sair                                 |\n");
            printf("|------------------------------------------|\n");
                scanf("%i", &cod);

                switch (cod){

                case 1:

                    for (i = 0; i < 5; i++){
                        printf("%i  ", vet[i]);
                    }
                    
                break;
                
                case 2:
                
                    for (j = 4; j >= 0; j--){
                        printf("%i  ", vet[j]);
                    }
                    
                break;

                case 0:
                    return 0;
                break;


                default:
                    printf("Opção invalida, tente novamente: \n");
                    flag = 1;
                break;
                }
            }while (flag != 0);
        return 0;
    }