# include <stdlib.h>   
# include <stdio.h>
# include <math.h>
# include <locale.h>

    int main(){
    float n, positivo, negativo;
        printf("Digite um numero\n");
            scanf("%f", &n);
        if (n > 0){
            positivo = n * 3;
            printf("O triplo deste numero e:%.1f", positivo);
        }else{
            negativo = pow(n, 2);
            printf("O quadrado deste numero e:%.1f", negativo);
        } 
        system("pause");
    }