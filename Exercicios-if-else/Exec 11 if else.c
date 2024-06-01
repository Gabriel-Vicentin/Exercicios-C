# include <stdlib.h>
# include <stdio.h>

int main() {

    int eleit, cand, min;
        printf("Qual o numero de eleitores aptos do municipio?\n");
            scanf("%i", &eleit);

        if (eleit < 20000){
                printf("Não elegivel a segundo turno\n");
            return 0;
        }
        
        printf("Qual foi o numero de votos do candidato mais votado?\n");
            scanf("%i", &cand);
            min = eleit * 0.50;

        if (cand < min){
            printf("Elegivel a segundo turno\n");
        }else{ 
            printf("Não elegivel a segundo turno\n");
        }
    system("pause");
}