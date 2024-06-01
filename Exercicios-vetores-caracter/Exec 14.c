#include<stdio.h>
#include<string.h>

int main(){
    char senha[20],confirma_senha[20];
    int tamanho, i,cont_num=0, cont_let=0,flag=0,tentativas=0;
    do{
    printf("Informe sua senha\n");
    gets(senha);
    tamanho = strlen(senha);
    if(tamanho >= 8){
        for(i=0;senha[i]!='\0';i++){
            if(senha[i] == '0'||senha[i]=='1'||senha[i]=='2'||senha[i]=='3'||senha[i]=='4'||senha[i]=='5'||senha[i]=='6'||senha[i]=='7'||senha[i]=='8'||senha[i]=='9'){
                cont_num++;
            }else{
                cont_let++;
            }
        }
        if(cont_num>0 && cont_let >0){
            printf("Senha valida\n");
            flag=1;
        }else{
            printf("Senha invalida - tente novamente...:)\n");
        }
    }else{
        printf("Senha invalida - quantidade de caracteres invalida\n");
    }
    tentativas++;
    }while(flag==0 && tentativas <=2);
    if(tentativas == 3){
        printf("SENHA BLOQUEADA..\n");
        return 0;
    }
    printf("Confirme sua senha\n");
    fflush(stdin);
    gets(confirma_senha);
    if(!strcmp(senha,confirma_senha)){
            printf("Senha confirmada...\n");
    }else{
            printf("Senha nao confere...\n");
    }
}