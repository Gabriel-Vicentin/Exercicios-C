#include <stdlib.h>
#include <stdio.h>
#include <stdalign.h>

    int main (){

        int i=1; 
        float num;


            for ( i > 1; i < 999; i++)
            {
                if (i % 11 == 5){
                    num = i;
                printf("%.2f\n", num);
                }
            }
            
    }