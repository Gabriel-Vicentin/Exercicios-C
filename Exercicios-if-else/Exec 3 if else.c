# include <stdlib.h>   
# include <stdio.h>
# include <math.h>
# include <locale.h>

int main() {

float n1, n2, n3;
    printf("digite tres numeros\n");
        scanf("%f %f %f", &n1, &n2, &n3);
    if (n1 > n2 && n1 > n3){
        printf("%f %f %f \n", n1);
    }else if (n2 > n1 && n2 > n3){
        printf("%f\n", &n2);
    }else if (n3 > n1 && n3 > n2){
        printf("%f\n", &n3);
    }
system("pause");
}