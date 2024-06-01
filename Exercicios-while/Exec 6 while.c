# include <stdlib.h>
# include <stdio.h>

    int main(){

        int cont;
        float altf, altm, somaf, somam, nmul, nhom;
        char gen;

        while (cont < 10){
        printf("Qual o seu genero? [M ou F]");
            scanf(" %c", &gen);

        if (gen == 'F'){
            printf("Qual é a sua altura? ");
                scanf("%f", &altf);
                somaf = somaf + altf;
                nmul =  nmul + 1;
        }else{
            printf("Qual é a sua altura?");
                scanf("%f", &altm);
                somam = somam + altm;
                nhom = nhom + 1;
        }
        cont = cont + 1;
        }
        printf("A media de altura das mulheres equivale a %.2f\n", (somaf/nmul));
        printf("A media de altura dos homens equivale a %.2f\n", (somam/nhom));
    system("pause");
    


    }