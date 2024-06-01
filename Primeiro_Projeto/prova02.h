int prova1 (){
    float H,h,S,s;
    printf("Informe sua altura e da sua sombra");
        scanf("%f %f", &h, &s);
    printf("Informe a altura da sombra do predio");
        scanf("%f", &S);
    H = (h*S) / s;
    printf("A altura do predio equivale a %f\n", H);

    if (H>=2.30){
        printf("Altura valida");
    }else {
        printf("Altura invalida");
    }
}
