#include <stdio.h>

    int main(){

        int n[10], m[10], i, p = 0;

        srand(time(NULL));
            for(i=0; i<10;i++){
            n[i]= 1+rand()%10;
            m[i]= 1+rand()%10;
    }
        for (i = 0; i < 10; i++)
        {
            p += n[i] * m[i];
        }

    printf("O valor de P equivale a: %i", p);

}