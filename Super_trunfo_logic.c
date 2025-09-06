#include <stdio.h>
// Desafio Super trunfo - Cidades do Brasil
int main(){
    // Variáveis da primeira carta
    char estado1;
    char codigodacidade1[10];
    char nomedacidade1[30]; 
    unsigned long int populacao1;
    float area1;
    float pib1;
    int numerodepontosturisticos1;
    float densidadepopulacional1;
    float pibpercapita1;
    float superpoder1;

    // Variavéis da segunda carta
    char estado2;
    char codigodacidade2[10];
    char nomedacidade2[30];
    unsigned long int populacao2;
    float area2;
    float pib2;
    int numerodepontosturisticos2;
    float densidadepopulacional2;
    float pibpercapita2;
    float superpoder2;

    // Variavel para escolha do jogador
    int escolha;

    //Cadastro da primeira carta:
    printf("\n");
    printf("*** Cadastro da primeira carta ***\n");
    printf("Digite o Estado: ");
    scanf("%c", &estado1);

    printf("Digite o código da cidade: ");
    scanf("%s", &codigodacidade1);

    printf("Digite o nome da cidade: ");
    scanf(" %[^\n]", nomedacidade1);

    printf("Digita a população: ");
    scanf("%lu", &populacao1);

    printf("Digita a área: ");
    scanf("%f", &area1);

    printf("Digite o pib: ");
    scanf("%f", &pib1);

    printf("Digito o número de pontos turísticos: ");
    scanf("%d", &numerodepontosturisticos1);

    //Calculo da densidade populacional e PIB per capita da primeira carta
    densidadepopulacional1 = (float)populacao1 / area1;
    pibpercapita1 = pib1 *1e9 / (float)populacao1;

    // Super poder da primeira carta
    superpoder1 = (float)populacao1 + area1 + pib1 + numerodepontosturisticos1 + pibpercapita1 + (1 / densidadepopulacional1);

    //Cadastro da segunda carta:
    printf("\n");
    printf("*** Cadastro da segunda carta ***\n");
    printf("Digite o Estado: ");
    scanf(" %c", &estado2);

    printf("Digite o código da cidade: ");
    scanf("%s", &codigodacidade2);

    printf("Digite o nome da cidade: ");
    scanf(" %[^\n]", nomedacidade2);

    printf("Digita a população: ");
    scanf("%lu", &populacao2);

    printf("Digita a área: ");
    scanf("%f", &area2);

    printf("Digite o pib: ");
    scanf("%f", &pib2);

    printf("Digito o número de pontos turísticos: ");
    scanf("%d", &numerodepontosturisticos2);

    //Calculo da densidade populacional e PIB per capita da segundo carta
    densidadepopulacional2 = (float)populacao2 / area2;
    pibpercapita2 = pib2 *1e9 / (float)populacao2;

    // Super poder da segunda carta
    superpoder2 = (float)populacao2 + area2 + pib2 + numerodepontosturisticos2 + pibpercapita2 + (1 / densidadepopulacional2);

    //Exibindo os dados da primeira carta:
    printf("\n     Carta 1     \n");
    printf("Estado: %c \n", estado1);
    printf("Código da cidade: %c %s \n",estado1, codigodacidade1);
    printf("Nome da cidade: %s \n", nomedacidade1);
    printf("População: %lu \n", populacao1);
    printf("Área: %.2f KM²\n", area1);
    printf("PIB: %.2f Bilhões de reais\n", pib1);
    printf("Número de pontos Turísticos: %d \n", numerodepontosturisticos1);
    printf("Densidade populacional: %.2f Hab/km²\n", densidadepopulacional1);
    printf("PIB per capita: %.2f reais\n",pibpercapita1);
    printf("Super poder: %.2f\n", superpoder1);
    printf("\n");

    //Exibindo os dados da segunda carta:
    printf("\n     Carta 2     \n");
    printf("Estado: %c \n", estado2);
    printf("Código da cidade: %c %s \n",estado2, codigodacidade2);
    printf("Nome da cidade: %s \n", nomedacidade2);
    printf("População: %lu \n", populacao2);
    printf("Área: %.2f KM²\n", area2);
    printf("PIB: %.2f Bilhões de reais\n", pib2);
    printf("Número de pontos Turísticos: %d \n", numerodepontosturisticos2);
    printf("Densidade populacional: %.2f Hab/km²\n", densidadepopulacional2);
    printf("PIB per capita: %.2f reais\n",pibpercapita2);
    printf("Super poder: %.2f\n", superpoder2);

    // Menu interativo para escolha do jogador
    printf("\nEscolha o atributo para a disputa:\n");
    printf("1 - População\n");
    printf("2 - Área\n");
    printf("3 - PIB\n");
    printf("4 - Número de pontos turísticos\n");
    printf("5 - Densidade populacional (menor vence)\n");
    printf("6 - PIB per capita\n");
    printf("7 - Super poder\n");
    printf("Digite sua escolha (1-7): ");
    scanf("%d", &escolha);

    // Estrutura switch para a escolha do jogador
    switch (escolha) {
    // Comparações entre as cartas
      case 1: // Comparação para população
        printf("\n     Resultado das comparações     \n");
        printf("--- Atributo população ---\n");
        printf("Carta 1 - %s: %lu \n", nomedacidade1, populacao1);
        printf("Carta 2 - %s: %lu \n", nomedacidade2, populacao2);
        if (populacao1 > populacao2){
          printf("A cidade da carta 1 venceu, tem a maior população.\n");
        } else if (populacao1 < populacao2){
          printf("A cidade da carta 2 venceu, tem a maior população.n");
        } else {
          printf("Empate! As duas cidades tem a mesma população.\n");
        }
        break;
      case 2: // Comparação para área
        printf("\n--- Atributo área ---\n");
        printf("Carta 1 - %s: %.2f KM²\n", nomedacidade1, area1);
        printf("Carta 2 - %s: %.2f KM²\n", nomedacidade2, area2);
        if (area1 > area2){
          printf("A cidade da carta 1 venceu, tem a maior área.\n");
        } else if (area1 < area2){
          printf("A cidade da carta 2 venceu, tem a maior área.\n");
        } else {
        printf("Empate! As duas cidades tem a mesma área.\n");
        }
        break;
      case 3: // Comparação para PIB
        printf("\n--- Atributo PIB ---\n");
        printf("Carta 1 - %s: %.2f Bilhões de reais\n", nomedacidade1, pib1);
        printf("Carta 2 - %s: %.2f Bilhões de reais\n", nomedacidade2, pib2);
        if (pib1 > pib2){
          printf("A cidade da carta 1 venceu, tem o maior PIB.\n");
        } else if (pib1 < pib2){
          printf("A cidade da carta 2 venceu, tem o maior PIB.\n");
        } else {
          printf("Empate! As duas cidades tem o mesmo PIB.\n");
        }
        break;
      case 4: // Comparação para número de pontos turísticos
        printf("\n--- Atributo número de pontos turísticos ---\n");
        printf("Carta 1 - %s: %d \n", nomedacidade1, numerodepontosturisticos1);
        printf("Carta 2 - %s: %d \n", nomedacidade2, numerodepontosturisticos2);
        if (numerodepontosturisticos1 > numerodepontosturisticos2){
          printf("A cidade da carta 1 venceu, tem o maior números de pontos turísticos.\n");
        } else if (numerodepontosturisticos1 < numerodepontosturisticos2){
          printf("A cidade da carta 2 venceu, tem o maior número de pontos turísticos.\n");
        } else {
          printf("Empate! As duas cidades tem o mesmo número de pontos turísticos.\n");
        }
        break;
      case 5: // Comparação para densidade populacional
        printf("\n--- Atributo densidade populacional ---\n");
        printf("Carta 1 - %s: %.2f Hab/km²\n", nomedacidade1, densidadepopulacional1);
        printf("Carta 2 - %s: %.2f Hab/km²\n", nomedacidade2, densidadepopulacional2);
        if (densidadepopulacional1 < densidadepopulacional2){
          printf("A cidade da carta 1 venceu, tem a menor densidade populacional.\n");
        } else if (densidadepopulacional1 > densidadepopulacional2){
          printf("A cidade da carta 2 venceu, tem a menor densidade populacional.\n");
        } else {
          printf("Empate! As duas cidades tem a mesma densidade populacional.\n");
        }
        break;
      case 6: // Comparação para PIB per capita
        printf("\n--- Atributo PIB per capita ---\n");
        printf("Carta 1 - %s: %.2f reais\n", nomedacidade1, pibpercapita1);
        printf("Carta 2 - %s: %.2f reais\n", nomedacidade2, pibpercapita2);
        if (pibpercapita1 > pibpercapita2){
          printf("A cidade da carta 1 venceu, tem o maior PIB per Capita.\n");
        } else if (pibpercapita1 < pibpercapita2){
          printf("A cidade da carta 2 venceu, tem o maior PIB per Capita.\n");
        } else {
          printf("Empate! As duas cidades tem o mesmo PIB per Capita.\n");
        }
        break;
      case 7: // Comparação do super poder
        printf("\n--- Atributo Super Poder ---\n");
        printf("Carta 1 - %s: %.2f\n", nomedacidade1, superpoder1);
        printf("Carta 2 - %s: %.2f\n", nomedacidade2, superpoder2);
        if (superpoder1 > superpoder2){
          printf("A cidade da carta 1 venceu, tem o maior Super Poder.\n");
        } else if (superpoder1 < superpoder2){
          printf("A cidade da carta 2 venceu, tem o maior Super Poder.\n");
        } else {
          printf("Empate! As duas cidades tem o mesmo Super Poder.\n");
        }
        break;
      default:
        printf("Opção inválida! Escolha um número entre 1 e 7.\n");
        break;
      }

    return 0;
}