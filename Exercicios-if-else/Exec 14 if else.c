# include <stdio.h>
# include <stdlib.h>

int main(){

    float sal, aum;
    char porcento;

        printf("Qual é o seu salario?\n");
            scanf("%f", &sal);
        
        printf("------------------------------------------------------------------\n");       
        printf("O valor do salario antes do reajuste é equivalente a: %.2f\n", sal);

        porcento = '%';
        
        if (sal <= 280){
            aum = (sal * 0.20);
            printf ("O percentual de aumento aplicado foi 20 %c:\n", porcento);
        }else if (sal > 280  && sal <= 700){
            aum = (sal * 0.15);
            printf("O percentual de aumento aplicado foi 15 %c:\n", porcento);
        }else if (sal > 700 && sal <= 1500){
            aum =  (sal * 0.10);
            printf("O percentual de aumento aplicado foi 10 %c:\n", porcento);
        }else if (sal > 1500){
            aum =  (sal * 0.05);
            printf("O percentual de aumento aplicado foi 5 %c:\n", porcento);
        }   
        printf("O valor do aumento foi:%.2f\n", aum);
        printf("------------------------------------------------------------------\n");
    system("pause");
}       