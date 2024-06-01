#include <stdio.h>
#include <string.h>

int main() {
    char original[] = "zywkbdf";
    char substituto[] = "AEOTMNP";

    int n,j,k,i;
    printf("Qual a quantidade de linhas que voce deseja decodificar?? ");
        scanf("%d", &n);
        getchar();
    char linha[100];

    for ( i = 0; i < n; i++) {
        printf("Digite a linha %d: ", i + 1);
        fgets(linha, sizeof(linha), stdin);

        linha[strcspn(linha, "\n")] = '\0';

        printf("Original: %s\n", linha);

        for ( j = 0; linha[j] != '\0'; j++) {
            for ( k = 0; k < strlen(original); k++) {
                if (linha[j] == original[k]) {
                    linha[j] = substituto[k];
                    break;
                }
            }
        }
        printf("Decodificada: %s\n", linha);
    }

}
