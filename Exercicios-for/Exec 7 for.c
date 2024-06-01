#include <stdlib.h>
#include <stdio.h>

    int main(){

        int x, p1, p2, soma, mult;

            for (x=1000; x <=9999; x++){
                p1 = x%100;
                p2 = x/100;
                soma = p1 + p2;
                mult = soma * soma;
                if (mult == x){
                    printf("%i +  %i  =  %i -> %i * %i = %i \n", p2, p1, soma, soma, soma, mult);        
                }
            }   
    }