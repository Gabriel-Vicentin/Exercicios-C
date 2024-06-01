
int prova03() {
    float media = 0, men = 0, tempo;
    int i;
    for(i = 1; i <= 10; i++){
        printf("Informe o tempo do atleta %d\n", i);
        scanf("%f", &tempo);

        if(tempo > men) men = tempo;
        media += tempo;
    }
    media /= 10;

    printf("Media de tempo: %.2fs\n", media);
    printf("Maior Tempo: %.2fs", men);
}
