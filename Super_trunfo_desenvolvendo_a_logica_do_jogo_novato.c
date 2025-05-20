#include <stdio.h>
#include <string.h> // para usar fgets e strcspn

int main() {
    // Variáveis da primeira carta
    char estado1[100], carta1[100], cidade1[100];
    unsigned long int populacao1;
    float area1;       
    double pib1;
    int pturisticos1;  

    // Variáveis da segunda carta
    char estado2[100], carta2[100], cidade2[100];
    unsigned long int populacao2;
    float area2;      
    double pib2;
    int pturisticos2;  

    //cadastro da primeira carta
    printf("Seja bem-vindo ao cadastro de cartas!\n\n");

    printf("Escolha uma letra de A a H para representar um estado:\n");
    scanf(" %s", estado1);

    printf("Agora digite o código da sua carta (ex: A01, B32, C344):\n");
    scanf(" %s", carta1);
    getchar();

    printf("Digite um nome para a cidade (real ou fictícia):\n");
    fgets(cidade1, sizeof(cidade1), stdin);
    cidade1[strcspn(cidade1,"\n")] = 0;

    printf("Digite a população da cidade:\n");
    scanf(" %lu", &populacao1);
    while(getchar()!= '\n');

    printf("Digite a área da cidade em km² (ex:650.916):\n");
    scanf(" %f", &area1);

    printf("Digite o PIB da cidade em bilhões de reais (ex:39.955):\n");
    scanf(" %lf", &pib1);
    pib1 *= 1000000000; // para converter em reais 

    printf("Digite quantos pontos turísticos a cidade tem:\n");
    scanf(" %d", &pturisticos1);

    // Proteção contra divisão por zero
    if (area1 == 0) {
        printf("Erro: a área da cidade não pode ser zero.\n");
        return 1;
    }
    //mostra a primeira carta 
    printf("\nA sua primeira carta ficou assim:\n");
    printf("Estado: %s\n", estado1);
    printf("Código da carta: %s\n", carta1);
    printf("Cidade: %s\n", cidade1);
    printf("População: %lu\n", populacao1);
    printf("Área: %.3f km²\n", area1);
    printf("PIB: R$ %.2f\n", pib1);
    printf("Pontos turísticos: %d\n", pturisticos1);
    
    //cadastro da segunda carta
    printf("\nAgora vamos cadastrar a segunda carta:\n");

    printf("Escolha uma letra de A a H para representar um estado:\n");
    scanf(" %s", estado2);

    printf("Digite o código da sua carta (ex: A01, B32, C344):\n");
    scanf(" %s", carta2);
    getchar();

    printf("Digite um nome para a cidade (real ou fictícia):\n");
    fgets(cidade2, sizeof(cidade2), stdin);
    cidade2[strcspn(cidade2, "\n")] = 0;

    printf("Digite a população da cidade:\n");
    scanf("%lu", &populacao2);
    while(getchar()!= '\n');

    printf("Digite a área da cidade em km² (ex:650.916):\n");
    scanf("%f", &area2);

    printf("Digite o PIB da cidade em bilhões de reais (ex:39.955):\n");
    scanf("%lf", &pib2);
    pib2 *= 1000000000;

    printf("Digite quantos pontos turísticos a cidade tem:\n");
    scanf("%d", &pturisticos2);

    if (area2 == 0) {
        printf("Erro: a área da cidade não pode ser zero.\n");
        return 1;
    }

    // Cálculos
    float densidadepopulacional1 = (float) populacao1 / area1;
    double pibpercapita1 = pib1 / populacao1;
    float inverso_populacao1 = 1 / densidadepopulacional1;

    float densidadepopulacional2 = (float) populacao2 / area2;
    double pibpercapita2 = pib2 / populacao2;
    float inverso_populacao2 = 1 / densidadepopulacional2;

    double poder1 = populacao1 + area1 + pib1 + pturisticos1 + inverso_populacao1 + pibpercapita1;
    double poder2 = populacao2 + area2 + pib2 + pturisticos2 + inverso_populacao2 + pibpercapita2;


    printf("\nAgora vamos ver como ficaram as duas cartas e vamos comparar as duas: \n");
    // Exibição das cartas
    printf("\nCarta 1:\n");
    printf("Estado: %s\n", estado1);
    printf("Código da carta: %s\n", carta1);
    printf("Cidade: %s\n", cidade1);
    printf("População: %lu\n", populacao1);
    printf("Área: %.3f km²\n", area1);
    printf("PIB: R$ %.2f\n", pib1);
    printf("Pontos turísticos: %d\n", pturisticos1);
    printf("Densidade populacional: %.3f hab/km²\n", densidadepopulacional1);
    printf("PIB per capita: %.2f reais\n", pibpercapita1);
    printf("Super poder: %.3f\n", poder1);

    printf("\nCarta 2:\n");
    printf("Estado: %s\n", estado2);
    printf("Código da carta: %s\n", carta2);
    printf("Cidade: %s\n", cidade2);
    printf("População: %lu\n", populacao2);
    printf("Área: R$ %.2f km²\n", area2);
    printf("PIB: %.3f\n", pib2);
    printf("Pontos turísticos: %d\n", pturisticos2);
    printf("Densidade populacional: %.3f hab/km²\n", densidadepopulacional2);
    printf("PIB per capita: %.2f reais\n", pibpercapita2);
    printf("Super poder: %.3f\n", poder2);

    //opção de comparar somente um requisito 
    int escolha,criterio;

    printf("\nQuer comparar todas as grandezas das cartas ou somente uma?\nDigite umas das opções\n1 - todas as grandezas\n2- somente uma grandeza!\n");
    scanf("%d", &escolha);

    if(escolha == 1){
    // Comparação
    printf("\nComparação dos todos critérios entre as duas cartas:\n");
    printf("População: %s\n", (populacao1 > populacao2) ? "Carta 1 (1)" : "Carta 2 (0)");
    printf("Área: %s\n", (area1 > area2) ? "Carta 1 (1)" : "Carta 2 (0)");
    printf("PIB: %s\n", (pib1 > pib2) ? "Carta 1 (1)" : "Carta 2 (0)");
    printf("Pontos turísticos: %s\n", (pturisticos1 > pturisticos2) ? "Carta 1 (1)" : "Carta 2 (0)");
    printf("Densidade populacional (quanto menor, melhor): %s\n", (densidadepopulacional1 < densidadepopulacional2) ? "Carta 1 (1)" : "Carta 2 (0)");
    printf("PIB per capita: %s\n", (pibpercapita1 > pibpercapita2) ? "Carta 1 (1)" : "Carta 2 (0)");
    printf("Super poder: %s\n", (poder1 > poder2) ? "Carta 1 (1)" : "Carta 2 (0)");
    }
    else {
        printf("\nQual das grandezas você deseja comparar?\n1-População\n2-Área\n3-PIB\n4-Pontos turisticos\n5-Densidade populacional\n6-PIB per capita\n7-Super poder, escolha e digite um dos números: \n");
        scanf("%d", &criterio);
    
        switch (criterio){
            case 1:
            if (populacao1 > populacao2) printf("Carta 1 venceu na população !!!\n");
            else if (populacao2 > populacao1) printf("Carta 2 venceu na população !!!\n");
            else  printf("Empate na população\n");
            break;  

              case 2:
            if (area1 > area2) printf("Carta 1 venceu na área !!!\n");
            else if (area2 > area1) printf("Carta 2 venceu na área !!!\n");
            else  printf("Empate na área\n");
            break;  

              case 3:
            if (pib1 > pib2) printf("Carta 1 venceu no PIB !!!\n");
            else if (pib2 > pib1) printf("Carta 2 venceu no PIB !!!\n");
            else  printf("Empate no PIB\n");
            break;  

              case 4: 
            if (pturisticos1 > pturisticos2) printf("Carta 1 venceu nos pontos turisticos !!!\n");
            else if (pturisticos2 > pturisticos1) printf("Carta 2 venceu nos pontos turisticos !!!\n");
            else  printf("Empate nos pontos turisticos\n");
            break;  

              case 5:
            if (densidadepopulacional1 < densidadepopulacional2) printf("Carta 1 venceu na densidade populacional !!!\n");
            else if (densidadepopulacional2 < densidadepopulacional1) printf("Carta 2 densidade populacional !!!\n");
            else  printf("Empate na densidade populacional \n");
            break;  

              case 6: 
            if (pibpercapita1 > pibpercapita2) printf("Carta 1 venceu no PIB per capita  !!!\n");
            else if (pibpercapita2 > pibpercapita1) printf("Carta 2 venceu PIB per capita !!!\n");
            else  printf("Empate no PIB per capita\n");
            break;  

              case 7: 
            if (poder1 > poder2) printf("Carta 1 venceu no Super poder  !!!\n");
            else if (poder2 > poder1) printf("Carta 2 venceu no Super poder  !!!\n");
            else  printf("Empate no Super poder \n");
            break;  

            default: 
            printf("Opção invalida ");
         }
        }
    return 0;
}
