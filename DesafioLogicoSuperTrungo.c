#include <stdio.h>

int main() {
    
    int pontosturisticosA01, pontosturisticosA02;
    int multiplicadorinverso = 1;
    unsigned int populacaoA01, populacaoA02;
    float areaA01, areaA02, pibA01, pibA02;
    char cidadeA01[50], cidadeA02[50];
    char estadoA01[50], estadoA02[50];
    char codigoA01[50], codigoA02[50];

    printf("Cadastro de cidade \n");
    printf("Insira o nome da cidade: \n");
    fgets(cidadeA01, 50, stdin);
    printf("insira o estado da cidade: \n");
    fgets(estadoA01, 50, stdin);
    printf("Insira a área da cidade em km2 (apenas numeros): \n");
    scanf("%f", &areaA01);
    printf("Insira quantidade de pontos turisticos: \n");
    scanf("%i", &pontosturisticosA01);
    printf("insira a populacao da cidade (apenas numeros): \n");
    scanf("%u", &populacaoA01);
    printf("Insira o pib da cidade em R$ (apenas o numero completo): \n");
    scanf("%f", &pibA01);
    printf("Insira o codigo da carta: \n");
    scanf("%s", codigoA01);
    printf("\n");

    printf("Insira o nome da proxima cidade: \n");
    while (fgetc(stdin) != '\n');
    fgets(cidadeA02, 50, stdin);
    printf("insira o estado da cidade: \n");
    fgets(estadoA02, 50, stdin);
    printf("Insira a área da cidade em km2 (apenas numeros): \n");
    scanf("%f", &areaA02);
    printf("Insira quantidade de pontos turisticos: \n");
    scanf("%i", &pontosturisticosA02);
    printf("insira a populacao da cidade (apenas numeros): \n");
    scanf("%u", &populacaoA02);
    printf("Insira o pib da cidade em R$ (apenas o numero completo): \n");
    scanf("%f", &pibA02);
    printf("Insira o codigo da carta: \n");
    scanf("%s", codigoA02);
    printf("\n");

    float pibpercapitaA01 = (float) pibA01 / populacaoA01;
    float pibpercapitaA02 = (float) pibA02 / populacaoA02;
    float densidadepopulacaoA01 = (float) populacaoA01 / areaA01;
    float densidadepopulacaoA02 = (float) populacaoA02 / areaA02;
    float inversodensidadeA01 = (float) multiplicadorinverso / densidadepopulacaoA01;
    float inversodensidadeA02 = (float) multiplicadorinverso / densidadepopulacaoA02;
    float superpoderA01 = (float) pontosturisticosA01 + populacaoA01 + areaA01 + pibA01 + pibpercapitaA01 + densidadepopulacaoA01 + inversodensidadeA01;
    float superpoderA02 = (float) pontosturisticosA02 + populacaoA02 + areaA02 + pibA02 + pibpercapitaA02 + densidadepopulacaoA02 + inversodensidadeA02;

    int atributocomparacao;

    printf("Comparacao das Cartas \n");
    
    printf("Digite um numero para selecionar o atributo e pressione enter para comparacao\n");
    printf("1 - SuperPoder\n");
    printf("2 - Area km2\n");
    printf("3 - Pontos Turisticos\n");
    printf("4 - Populacao\n");
    printf("5 - Densidade Populacional\n");
    printf("6 - PIB R$\n");
    printf("7 - PIB PerCapita R$/hab\n");
    scanf("%i", &atributocomparacao);
    
    switch (atributocomparacao) {
        case 1:
            printf("Comparacao de SuperPoder \n");
            printf("Carta A01 - %s : %f \n", cidadeA01, superpoderA01);
            printf("Carta A02 - %s : %f \n", cidadeA02, superpoderA02);

            if (superpoderA01 > superpoderA02) {
                printf("Carta A01 venceu (1)");
            }
            else {
                printf("Carta A02 venceu (0)");
            }

        break;
        
        case 2:
            printf("Comparacao de Area km2");
            printf("Carta A01 - %s : %f \n", cidadeA01, areaA01);
            printf("Carta A02 - %s : %f \n", cidadeA02, areaA02);

            if (areaA01 > areaA02) {
                printf("Carta A01 venceu (1)");
            }
            else {
                printf("Carta A02 venceu (0)");
            }
        break;

        case 3:
            printf("Comparacao de Pontos Turisticos");
            printf("Carta A01 - %s : %i \n", cidadeA01, pontosturisticosA01);
            printf("Carta A02 - %s : %i \n", cidadeA02, pontosturisticosA02);

            if (pontosturisticosA01 > pontosturisticosA02) {
                printf("Carta A01 venceu (1)");
            }
            else {
                printf("Carta A02 venceu (0)");
            }
        break;
            
    default:
        break;
    }
      
    printf("fim \n");
    
    return 0;
}