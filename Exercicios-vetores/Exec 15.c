#include<stdio.h>

int main(){
    int A[10], B[10], C[10],i,j,y=0,w,flag=0;
    srand(time(NULL));
    for(i=0; i<10;i++){
        A[i]= 1+rand()%10;
        B[i]= 1+rand()%10;
        C[i]=0;
    }
    printf("Vetor A\n");
    for(i=0; i<10;i++){
        printf("%i  ",A[i]);
    }
    printf("\nVetor B\n");
    for(i=0; i<10;i++){
        printf("%i  ",B[i]);
    }
    for(i=0;i<10;i++){
        for(j=0;j<10;j++){
            if(A[i] == B[j]){
                for(w = 0; w <= y; w++){
                    if(C[w] == A[i]){
                        flag = 1;
                    }
                }
                if (flag == 0){
                    C[y] = A[i];
                    y++;
                }
                flag=0;
            }
        }
    }
    printf("\nVetor C\n");
    for(i=0; i<y;i++){
        printf("%i  ",C[i]);
    }
}