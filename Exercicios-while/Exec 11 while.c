#include <stdio.h>
#include <stdalign.h>

int main() {

    int n, i, j;
    
        printf("Digite um numero:");
        scanf("%i", &n);
    
        i = n;
        while (i >= 1) {
            j = 1;
            while (j <= i) {
                printf("*");
                j++;
        }
        printf("\n");
        i = i - 1;
    }
    
    return 0;
}