#include <stdlib.h>
#include <stdio.h>

int main (){
    int vet [5], i, soma=0;
        printf("Informe 5 valores para preencher o veor...\n");
        for (i=0; i<5; i++){
            scanf("%i", &vet[i]);
            soma = soma + vet[i];
        }
        for (i = 0; i < 5; i++) {
            printf("%i  ", vet[i]);
        }
        printf("\n A soma dos valores do vetor equivale a %i\n", soma);

    system("pause");
        
}