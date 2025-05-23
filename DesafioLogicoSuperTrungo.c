#include <stdio.h>

int main() {
    
    int pontosturisticosA01 = 10, pontosturisticosA02 = 10;
    int multiplicadorinverso = 1;
    unsigned int populacaoA01 = 1139000, populacaoA02 = 1292000;
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

    int atributocomparacao;

    printf("Comparacao das Cartas: \n");
    printf("Atributos de Comparacao: \n");
    printf("1 - SuperPoder\n");
    printf("2 - Area km2\n");
    printf("3 - Pontos Turisticos\n");
    printf("4 - Populacao\n");
    printf("5 - Densidade Populacional\n");
    printf("6 - PIB R$\n");
    printf("7 - PIB PerCapita R$/hab\n");
    printf("Escolha um atributo: ");
    scanf("%i", &atributocomparacao);
    printf("\n");
    
    switch (atributocomparacao) {
        case 1:

            printf("Comparacao de SuperPoder \n");
            printf("SuperPoder %s : %2.f \n", cidadeA01, superpoderA01);
            printf("SuperPoder %s : %2.f \n", cidadeA02, superpoderA02);
            
            superpoderA01 > superpoderA02 ? 
            printf("%s Venceu \n", cidadeA01) : printf("%s Venceu \n", cidadeA02);  

        break;
        
        case 2:

            printf("Comparacao de Area km2 \n");
            printf("Area km2 %s : %2.f \n", cidadeA01, areaA01);
            printf("Area km2 %s : %2.f \n", cidadeA02, areaA02);

            areaA01 > areaA02 ? 
            printf("%s Venceu \n", cidadeA01) : printf("%s Venceu \n", cidadeA02);

        break;

        case 3:

            printf("Comparacao de Pontos Turisticos \n");
            printf("Pontos Turisticos %s : %i \n", cidadeA01, pontosturisticosA01);
            printf("Pontos Turisticos %s : %i \n", cidadeA02, pontosturisticosA02);

           pontosturisticosA01 > pontosturisticosA02 ? 
           printf("%s Venceu \n", cidadeA01) : printf("%s Venceu \n", cidadeA02);  

        
        break;
        
        case 4:

            printf("Comparacao de Populacao \n");
            printf("Populacao %s : %2.f \n", cidadeA01, populacaoA01);
            printf("Populacao %s : %2.f \n", cidadeA02, populacaoA02);
            
            populacaoA01 > populacaoA02 ? 
            printf("%s Venceu \n", cidadeA01) : printf("%s Venceu \n", cidadeA02);  

        break;

        case 5:

            printf("Comparacao de Densidade Populacional \n");
            printf("Densidade Populacional %s : %2.f \n", cidadeA01, densidadepopulacaoA01);
            printf("Densidade Populacional %s : %2.f \n", cidadeA02, densidadepopulacaoA02);
            
            densidadepopulacaoA01 > densidadepopulacaoA02 ? 
            printf("%s Venceu \n", cidadeA01) : printf("%s Venceu \n", cidadeA02);  

        break;

        case 6:
        
            printf("Comparacao de PIB R$ \n");
            printf("PIB R$ %s : %2.f \n", cidadeA01, pibA01);
            printf("PIB R$ %s : %2.f \n", cidadeA02, pibA02);
            
            pibA01 > pibA02 ? 
            printf("%s Venceu \n", cidadeA01) : printf("%s Venceu \n", cidadeA02);  

        break;
        
        case 7:

            printf("Comparacao de PIB PerCapita R$/hab \n");
            printf("PIB PerCapita R$/hab %s : %2.f \n", cidadeA01, pibpercapitaA01);
            printf("PIB PerCapita R$/hab %s : %2.f \n", cidadeA02, pibpercapitaA02);
            
            pibpercapitaA01 > pibpercapitaA02 ? 
            printf("%s Venceu \n", cidadeA01) : printf("%s Venceu \n", cidadeA02);  

        break;
            
    default:

        printf("Empate \n");

        break;
    }
    
    return 0;
}
      
    printf("fim \n");
    
    return 0;
}
