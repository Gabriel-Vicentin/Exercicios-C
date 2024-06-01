# include <stdlib.h>
# include <stdio.h>

int main(){

    float horastrab, sal, hsal, hext, tot;

        printf ("Qual o total de horas trabalhadas no mes?\n");
            scanf("%f", &horastrab);

        printf("Qual é o salario recebido?\n");
            scanf("%f", &sal);
            hsal = (sal / 160);

        if (horastrab > 160){
            hext = (horastrab - 160);
            tot = hext * (hsal + (hsal * 0.5));
            
            printf("O salario total do funcionario com o acrescimo de hora extra é %.2f\n", tot + sal);
        }else{
            printf("O salario total é equivalente a %.2f\n", sal);
        }
    system("pause");
}