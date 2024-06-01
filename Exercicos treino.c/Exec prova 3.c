#include <stdio.h>
#include <stdalign.h>

    int main(){

        int ano;

            for ( ano = 1990; ano <= 2024; ano++)
            {
                if (ano % 4 == 0 || ano % 400 == 0 && ano % 100 != 0){
                    printf("%i é um Ano valido\n", ano);
                }

    
            }
        return 0;        
    }