#include <stdio.h>

int main() {
    int hab, codigo, consumo;
    float kwh, consumo_total = 0, consumo_residencial = 0, consumo_comercial = 0, consumo_industrial = 0;
    int maior_consumo = 0, menor_consumo = __INT_MAX__;
    float media_consumo;
    
    printf("Digite o número de habitantes da cidade: ");
    scanf("%i", &hab);
    
    printf("Digite o valor do kWh: ");
    scanf("%f", &kwh);
    
    for (int i = 0; i < hab; i++) {
        printf("Digite o consumo do habitante %d em kWh: ", i + 1);
        scanf("%i", &consumo);
        
        printf("Digite o código do consumidor (1 - Residencial, 2 - Comercial, 3 - Industrial): ");
        scanf("%i", &codigo);
        
        
        consumo_total += consumo;
        
        
        switch(codigo) {
            case 1:
                consumo_residencial += consumo;
                break;
            case 2:
                consumo_comercial += consumo;
                break;
            case 3:
                consumo_industrial += consumo;
                break;
            default:
                printf("Código de consumidor inválido.\n");
        }
        
        
        if (consumo > maior_consumo) {
            maior_consumo = consumo;
        }
        if (consumo < menor_consumo) {
            menor_consumo = consumo;
        }
    }
    
    
    media_consumo = consumo_total / hab;
    
    
    printf("\nMaior consumo: %i kWh\n", maior_consumo);
    printf("Menor consumo: %i kWh\n", menor_consumo);
    printf("Média do consumo: %.2f kWh\n", media_consumo);
    printf("Consumo residencial: %.2f kWh\n", consumo_residencial);
    printf("Consumo comercial: %.2f kWh\n", consumo_comercial);
    printf("Consumo industrial: %.2f kWh\n", consumo_industrial);
    
    return 0;
}
