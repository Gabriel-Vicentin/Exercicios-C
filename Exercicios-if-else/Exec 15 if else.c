# include <stdlib.h>
# include <stdio.h>

int main(){
     int res;
     char p1, p2, p3, p4, p5;
            
            res = 0;
            printf("-----------------------------\n");
            printf("     INVESTIGAÇÃO CRIMNIAL   \n");
            printf("-----------------------------\n");
            printf("\n");

            printf("O suspeito telefonou para a vitima? (S / N) \n");
                scanf( "%c", &p1);

            printf("O suspeito esteve no local do crime? (S / N) \n");
                scanf( "%c", &p2);

            printf("O suspeito mora perto da vitima? (S / N) \n");
                scanf( "%c", &p3);

            printf("O suspeito devia para a vitima? (S / N) \n");
                scanf( "%c", &p4);

            printf("O suspeito ja trabalhou para a vitima? (S / N) \n");
                scanf( "%c", &p5);

            if (p1 == 'S'){
                res = res + 1;

            }else if (p2 == 'S'){
                res = res + 1;

            }else if (p3 == 'S'){
                res = res = 1;

            }else if (p4 == 'S'){
                res = res + 1;

            }else if (p5 == 'S'){
                res = res + 1;
            }
            
            if (res >= 2){
                printf("Suspeita\n");

            }else if (res >= 3 && res <= 4){
                printf("Cumplice\n");

            }else if (res >= 5){
                printf("Assasino\n");

            }else if (res < 2){
                printf("Inocente\n");
            }
    system("pause");
            
}