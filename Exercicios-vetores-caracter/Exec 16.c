#include <stdio.h>
#include <string.h>

int main() {
    char nome[80];
    char primeiroNome[50], ultimoNome[50];
    int i, j, tamn;

        printf("Digite o nome completo: ");
        gets(nome);
        fflush(stdin);

        tamn = strlen(nome);

        if (nome[tamn - 1] == '\n') {
            nome[tamn - 1] = '\0';
        }

        i = 0;

        while (nome[i] != ' ' && nome[i] != '\0') {
            primeiroNome[i] = nome[i];
            i++;
        }

        primeiroNome[i] = '\0';

        
        j = tamn - 1;

        while (j >= 0 && nome[j] != ' ') {
            j--;
        }

        j++; 
        i = 0;

        while (nome[j] != '\0') {
            ultimoNome[i] = nome[j];
            i++;
            j++;
        }
        
        ultimoNome[i] = '\0';

            printf("Ola: %s, %s\n", ultimoNome, primeiroNome);

        return 0;
}
