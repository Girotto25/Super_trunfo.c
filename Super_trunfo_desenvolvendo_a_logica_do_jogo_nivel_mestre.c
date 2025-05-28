#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include <string.h>

int main() {

//informações da carta 1
char pais1 [] = "Rússia";
unsigned long int populacao1 = 143800000;
float area1 = 17100000;
double pib1 = 2021000000;
int turisticos1 = 167;
float densidade1= 8.9;
float pib_per_capita1= 13.817;


//informação da Carta 2 
char pais2 [] = "China";
unsigned long int populacao2 = 1411000000;
float area2 = 9597000;
double pib2 = 17790000000;
int turisticos2 = 200;
float densidade2 = 150.42;
float pib_per_capita2 = 12.614;

//calculos 
densidade1 = (float)populacao1 / area1;
pib_per_capita1 = pib1 / populacao1;
densidade2 = (float)populacao2 / area2;
pib_per_capita2 = pib2 / populacao2;

int criterio1; 
int escolha1;
int escolha2;

do{

printf("\n*****Bem vindo ao Super trunfo*****\n");
printf("1 - Regras do jogo\n");
printf("2 - Cartas \n");
printf("3 - Jogar \n");
printf("0 - Sair \n");
printf("Escolha: ");
scanf("%d", &escolha1);

switch (escolha1){

    case 0:
    printf("Obrigado pela atenção até a próxima.");
    break;

    case 1:
    printf("\n****Regras do jogo :****\n");
    printf(" São duas cartas cada carta representa um pais com 6 atributos: \n");
    printf(" - População\n - Área\n - PIB\n - Pontos turisticos\n - Densidade populacional\n - PIB per capita\n");
    printf("\nO jogador pode escolher um , dois ou todos os atritbutos para comparar entre as cartas\n");
    printf("A carta que tiver maior pontuação em um ou na soma dos dois ou de todos os atributos vence \n");
    break;

    case 2:
    printf("\n***Carta 1 ***\n");
    printf("Pais: %s\n",pais1);
    printf("população: %ld\n ", populacao1);
    printf("Área: %f\n", area1);
    printf("PIB: %f\n", pib1);
    printf("Pontos turisticos: %d\n", turisticos1);
    printf("Densidade populacional: %f\n",densidade1);
    printf("PIB per capita: %f\n", pib_per_capita1);
    printf("\n****Carta 2****\n");
    printf("Pais: %s\n",pais2);
    printf("população: %ld\n ", populacao2);
    printf("Área: %f\n", area2);
    printf("PIB: %f\n", pib2);
    printf("Pontos turisticos: %d\n", turisticos2);
    printf("Densidade populacional: %f\n",densidade2);
    printf("PIB per capita: %f\n", pib_per_capita2);
    break;  

    case 3: 
    printf("\nVocê quer comparar um, dois ou todos os criterios ? \n");
    printf("1 - Compara somente 1 criterio\n2 - Comparar 2 criterios\n3 - Comparar todos os criterios.\n");
    printf("Escolha:");
    scanf("%d", &criterio1);

   if (criterio1 == 3){
    printf("\nComparação de todos os critérios entre as duas cartas:\n");
    printf("População: %s\n", (populacao1 > populacao2) ?"Carta 1 (1)":"Carta 2 (0)");
    printf("Área: %s\n", (area1 > area2) ?"Carta 1 (1)":"Carta 2 (0)");
    printf("PIB: %s\n", (pib1 > pib2) ?"Carta 1 (1)":"Carta 2 (0)");
    printf("Pontos turísticos: %s\n", (turisticos1 > turisticos2) ?"Carta 1 (1)":"Carta 2 (0)");
    printf("Densidade populacional (quanto menor, melhor): %s\n", (densidade1 < densidade2) ?"Carta 1 (1)":"Carta 2 (0)");
    printf("PIB per capita: %s\n", (pib_per_capita1 > pib_per_capita2) ?"Carta 1 (1)":"Carta 2 (0)");
    
   }else if (criterio1 == 1 ){

    printf("\nQual dos Criterios que você deseja comaprar ?\n");
        printf("1 - População\n 2 - Área\n 3 - PIB\n 4 - Pontos turisticos\n 5 - Densidade populaciona\n 6 - PIB per capita\n");
        scanf("%d", &escolha2);

    switch (escolha2){
        case 1:
        printf("Carta 1 populção: %ld, Carta 2 população %ld", populacao1, populacao2);
        if ( populacao1 > populacao2){
            printf("\n***Carta 1 venceu***\n");
        }else{
            printf("\n***Carta 2 venceu***\n");
        }break;
        case 2:
        printf("Carta 1 área: %f, carta 2 área %f", area1, area2);
        if ( area1 > area2){
            printf("\n***Carta 1 venceu***\n");
        }else{
            printf("\n***Carta 2 venceu***\n");
        } break;
        case 3: 
        printf("Carta 1 PIB: %f, carta 2 PIB: %f", pib1, pib2);
          if ( pib1 > pib2){
            printf("\n***Carta 1 venceu***\n");
        }else{
            printf("\n***Carta 2 venceu***\n");
        } break;
        case 4:
        printf("Carta 1 pontos turisticos: %d, carta 2 pontos turisticos: %d\n", turisticos1, turisticos2);
          if ( turisticos1 > turisticos2){
            printf("\n***Carta 1 venceu***\n");
        }else{
            printf("\n***Carta 2 venceu***\n");
        } break;
        case 5: 
        printf("Carta 1 densidade populacional: %f, carta 2 densidade populacional: %f \n", densidade1, densidade2);
        if(densidade1 < densidade2){
            printf("\n***Carta 1 venceu***\n");
        }else{
            printf("\n***Carta 2 venceu***\n");
        }break;
        case 6:
        printf("Carta 1 PIB per capita %f, carta 2 PIb per capita %f\n", pib_per_capita1,pib_per_capita2);
        if ( pib_per_capita1 > pib_per_capita2){
            printf("\n***Carta 1 venceu***\n");
        }else{
            printf("\n***Carta 2 venceu***\n");
        }
        break;

        default:
        printf("Opção invalida!!\n");
        break;
    }
    
    }else if (criterio1 == 2 ){
        int grandeza1, grandeza2, pontos1 = 0, pontos2 = 0;

        printf("\n****Escolha o primeiro criterio que você deseja compara***\n");
        printf("1 - Populçao\n2 - Área\n3 - PIB\n4 - Pontos Turisticos\n5 - Densidade populacional\n6 - PÌB per capita\n");
        printf("Digite o número que representa o primeiro criterio: \n");
        scanf("%d", &grandeza1);
        printf("Agora o número que representa o segundo \n");
        scanf("%d", &grandeza2);

        //comparar o primeiro criterio 
        switch (grandeza1){
            case 1:
            if (populacao1 > populacao2) pontos1 ++;
            else if (populacao2 > populacao1) pontos2 ++;
            break;
            case 2:
            if (area1 > area2) pontos1 ++;
            else if (area2 > area1 ) pontos2 ++;
            break;
            case 3:
            if(pib1 > pib2 ) pontos1 ++;
            else if(pib2 > pib1) pontos2 ++;
            break;
            case 4:
            if(turisticos1 > turisticos2) pontos1 ++;
            else if(turisticos2 > turisticos1) pontos2 ++;
            break;
            case 5:
            if(densidade1 < densidade2) pontos1 ++;
            else if (densidade2 < densidade1) pontos2 ++;
            break;
            case 6:
            if(pib_per_capita1 > pib_per_capita2) pontos1 ++;
            else if (pib_per_capita2 > pib_per_capita1) pontos2 ++;
            default: printf("\n***Opção invalida***\n"); break;
        } // comparação do segundo criterio
          switch (grandeza2){
                case 1:
            if (populacao1 > populacao2) pontos1 ++;
            else if (populacao2 > populacao1) pontos2 ++;
            break;
            case 2:
            if (area1 > area2) pontos1 ++;
            else if (area2 > area1 ) pontos2 ++;
            break;
            case 3:
            if(pib1 > pib2 ) pontos1 ++;
            else if(pib2 > pib1) pontos2 ++;
            break;
            case 4:
            if(turisticos1 > turisticos2) pontos1 ++;
            else if(turisticos2 > turisticos1) pontos2 ++;
            break;
            case 5:
            if(densidade1 < densidade2) pontos1 ++;
            else if (densidade2 < densidade1) pontos2 ++;
            break;
            case 6:
            if(pib_per_capita1 > pib_per_capita2) pontos1 ++;
            else if (pib_per_capita2 > pib_per_capita1) pontos2 ++;
            default: printf("\n***Opção invalida***\n"); break;
        }
        // Resultado final 
        if(pontos1 > pontos2){
            printf("\n*** Carta 1 venceu com %d a %d !!! ***\n", pontos1,  pontos2);
        }else if(pontos2 > pontos1){
            printf("\n***Carta 2 venceu com %d a %d !!!!***\n", pontos2, pontos1);
        }else {
            printf("\n***Empate com %d pontos cada !***\n", pontos1);
            
        }
    }
    
    }
}while (escolha1 !=0);
}
