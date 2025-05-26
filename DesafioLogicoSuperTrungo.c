#include <stdio.h>

int main() {
    
    int pontosturisticosA01 = 10, pontosturisticosA02 = 10;
    int multiplicadorinverso = 1;
    double populacaoA01 = 1139000, populacaoA02 = 1292000;
    float areaA01 = 318, areaA02 = 759.7, pibA01 = 77400000000, pibA02 = 72900000000;
    char cidadeA01[] = "Guarulhos", cidadeA02[] = "Campinas";
    char estadoA01[50] = "Sao Paulo", estadoA02[50] = "Sao Paulo";
    char codigoA01[50] = "A01", codigoA02[50] = "A02";


    float pibpercapitaA01 = (float) pibA01 / populacaoA01;
    float pibpercapitaA02 = (float) pibA02 / populacaoA02;
    float densidadepopulacaoA01 = (float) populacaoA01 / areaA01;
    float densidadepopulacaoA02 = (float) populacaoA02 / areaA02;
    float inversodensidadeA01 = (float) multiplicadorinverso / densidadepopulacaoA01;
    float inversodensidadeA02 = (float) multiplicadorinverso / densidadepopulacaoA02;
    float superpoderA01 = (float) pontosturisticosA01 + populacaoA01 + areaA01 + pibA01 + pibpercapitaA01 + densidadepopulacaoA01 + inversodensidadeA01;
    float superpoderA02 = (float) pontosturisticosA02 + populacaoA02 + areaA02 + pibA02 + pibpercapitaA02 + densidadepopulacaoA02 + inversodensidadeA02;

    int atributocomparacao01;
    int atributocomparacao02;

    printf("Comparacao das Cartas: \n");
    printf("Atributos de Comparacao: \n");
    printf("1 - SuperPoder\n");
    printf("2 - Area km2\n");
    printf("3 - Pontos Turisticos\n");
    printf("4 - Populacao\n");
    printf("5 - Densidade Populacional\n");
    printf("6 - PIB R$\n");
    printf("7 - PIB PerCapita R$/hab\n");
    printf("Escolha o primeiro atributo: ");
    scanf("%i", &atributocomparacao01);
    printf("Escolha o segundo atributo: ");
    scanf("%i", &atributocomparacao02);
    printf("\n");

    switch (atributocomparacao01) {
        case 1:

            printf("Comparacao de Super Poder \n");
            printf("Carta A01 %s : %2.f \n", cidadeA01, superpoderA01);
            printf("Carta A01 %s : %2.f \n", cidadeA02, superpoderA02);

        break;
        
        case 2:

            printf("Comparacao de Area km2 \n");
            printf("Area km2 %s : %2.f \n", cidadeA01, areaA01);
            printf("Area km2 %s : %2.f \n", cidadeA02, areaA02);

        break;

        case 3:

            printf("Comparacao de Pontos Turisticos \n");
            printf("Pontos Turisticos %s : %i \n", cidadeA01, pontosturisticosA01);
            printf("Pontos Turisticos %s : %i \n", cidadeA02, pontosturisticosA02);

        break;
        
        case 4:

            printf("Comparacao de Populacao \n");
            printf("Populacao %s : %2.f \n", cidadeA01, populacaoA01);
            printf("Populacao %s : %2.f \n", cidadeA02, populacaoA02);

        break;

        case 5:

            printf("Comparacao de Densidade Populacional \n");
            printf("Densidade Populacional %s : %2.f \n", cidadeA01, densidadepopulacaoA01);
            printf("Densidade Populacional %s : %2.f \n", cidadeA02, densidadepopulacaoA02);

        break;

        case 6:
        
            printf("Comparacao de PIB R$ \n");
            printf("PIB R$ %s : %2.f \n", cidadeA01, pibA01);
            printf("PIB R$ %s : %2.f \n", cidadeA02, pibA02);

        break;
        
        case 7:

            printf("Comparacao de PIB PerCapita R$/hab \n");
            printf("PIB PerCapita R$/hab %s : %2.f \n", cidadeA01, pibpercapitaA01);
            printf("PIB PerCapita R$/hab %s : %2.f \n", cidadeA02, pibpercapitaA02);

        break;
            
    default:

        printf("Opcao Invalida \n");

        break;
    }
    switch (atributocomparacao02) {
        case 1:

            printf("Comparacao de Super Poder \n");
            printf("Carta A01 %s : %2.f \n", cidadeA01, superpoderA01);
            printf("Carta A01 %s : %2.f \n", cidadeA02, superpoderA02);

        break;
        
        case 2:

            printf("Comparacao de Area km2 \n");
            printf("Area km2 %s : %2.f \n", cidadeA01, areaA01);
            printf("Area km2 %s : %2.f \n", cidadeA02, areaA02);

        break;

        case 3:

            printf("Comparacao de Pontos Turisticos \n");
            printf("Pontos Turisticos %s : %i \n", cidadeA01, pontosturisticosA01);
            printf("Pontos Turisticos %s : %i \n", cidadeA02, pontosturisticosA02);

        break;
        
        case 4:

            printf("Comparacao de Populacao \n");
            printf("Populacao %s : %2.f \n", cidadeA01, populacaoA01);
            printf("Populacao %s : %2.f \n", cidadeA02, populacaoA02);

        break;

        case 5:

            printf("Comparacao de Densidade Populacional \n");
            printf("Densidade Populacional %s : %2.f \n", cidadeA01, densidadepopulacaoA01);
            printf("Densidade Populacional %s : %2.f \n", cidadeA02, densidadepopulacaoA02);

        break;

        case 6:
        
            printf("Comparacao de PIB R$ \n");
            printf("PIB R$ %s : %2.f \n", cidadeA01, pibA01);
            printf("PIB R$ %s : %2.f \n", cidadeA02, pibA02);

        break;
        
        case 7:

            printf("Comparacao de PIB PerCapita R$/hab \n");
            printf("PIB PerCapita R$/hab %s : %2.f \n", cidadeA01, pibpercapitaA01);
            printf("PIB PerCapita R$/hab %s : %2.f \n", cidadeA02, pibpercapitaA02);

        break;
            
    default:

        printf("Opcao Invalida \n");

        break;
    }
    
    int somaatributosA01 = atributoparasoma1A01 + atributoparasoma2A01;
    int somaatributosA02 = atributoparasoma1A02 + atributoparasoma2A02;
    int somaatributovencedor = somaatributosA01 + somaatributosA02;
    int vencedor;

    vencedor = (somaatributosA01 > somaatributosA02) ? cidadeA01 : cidadeA02;

    printf("%s Venceu : %i \n", vencedor, somaatributovencedor);
    
    return 0;
}
      
    printf("fim \n");
    
    return 0;
}
