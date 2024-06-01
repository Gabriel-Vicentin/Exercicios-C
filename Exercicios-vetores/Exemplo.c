#include <stdio.h>
#include <time.h>

int main (){

    int vet[6], i, flag=0, aux;
    
        printf("Vetor preenchido: \n");
        srand(time(NULL));
            for (i = 0; i < 6; i++)
            {
                vet[i] = 1+rand()%100;
                printf("%i  ", vet[i]);
            }
            //bubble sort
            do{
            flag = 0;
            for (i = 0; i < 6; i++){
                if (vet > vet[i+1]){
                    aux = vet[i];
                    vet[i] = vet[i+1];
                    vet[i+1] = aux;
                    flag = 1;
                }
                printf("\n");
                for (i = 0; i < 6; i++){
                    printf("%i  ", vet[i]);
                }
                
                    
        }
        
    }while(flag != 0);

}