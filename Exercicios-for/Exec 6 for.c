#include <stdlib.h>
#include <stdio.h>
#include <stdalign.h>

    int main (){

        int num, cont=0, par=0, impar=0, cont2=0;

            printf("digite um numero\n");
                scanf("%i", &num);

                    printf("Os primeiros %i numeros pares equivalem a: \n");
                    for ( cont = 0;  cont < num ; cont++)
                    {
                        if (par % 2 == 0) {
                            printf("P - %i\n", par);
                        }
                        par += 2;
                    }
                    printf("\n");

                    
                    printf("Os primeiros numeros impares equivalem a: \n");
                    
                    impar = 1;
                    for ( cont2 = 0; cont2 < num; cont2++)
                    {
                        if (impar % 2 != 0 ){
                            printf("I - %i\n", impar);
                        impar += 2;
                        }
                                                
                    }

            system("pause");                    
    }