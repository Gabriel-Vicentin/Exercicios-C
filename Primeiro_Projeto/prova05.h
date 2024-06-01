int prova04() {
    char progress = 's';
    do{
        float res, total, average;
        char gas = '?';

        printf("Informe a distancia percorrida em quilometros:\n");
        scanf("%f", &total);
        printf("Informe a media do carro por litro:\n");
        scanf("%f", &average);
        printf("Informe o tipo de combustivel desejado:\n");
        printf("E - Etanol\n");
        printf("G - Gasolina\n");
        scanf("%s", &gas);

        res = total / average;

        switch(gas){
            case 'E': case 'e':
                printf("A viagem custara R$%f\n", res * 3.16);
                break;
            case 'G': case 'g':
                printf("A viagem custara R$%f\n", res * 5.28);
                break;
            default:
                printf("Opcao nao reconhecida\n");
                break;
        }

        printf("\nDeseja fazer outro planejamento?[S / N ]\n");
        scanf("%s", &progress);
        printf("\n");
    } while(progress == 's' || progress == 'S');
}
