#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main() {
  // Área para definição das variáveis para armazenar as propriedades das cidades
  // declarando variáveis da carta 1

        char estado1;
        char codigo1[4];
        char cidade1[50];
        int populacao1;
        float area1;
        float pib1;
        int pontosTuristicos1;

  // declarando variavéis da carta 2

        char estado2;
        char codigo2[4];
        char cidade2[50];
        int populacao2;
        float area2;
        float pib2;
        int pontosTuristicos2;

  // Área para entrada de dados
  // cadastrando a carta 1

        printf("Cadastro da Carta 1: \n");
        printf("Digite o estado(A-H): ");
        scanf(" %c", &estado1);

        printf("Digite o codigo da carta(ex: A01): ");
        scanf(" %s", &codigo1);

        printf("Digite o nome da cidade: ");
        scanf(" %[^\n]", &cidade1);

        printf("Digite a população: ");
        scanf(" %d", &populacao1);

        printf("Digite a área em km²: ");
        scanf(" %f", &area1);

        printf("Digite o PIB: ");
        scanf(" %f", &pib1);

        printf("Digite o número de pontos turisticos: ");
        scanf(" %d", &pontosTuristicos1);

        printf("\n");

        // cadastrando a carta 2

        printf("Cadastro da Carta 2: \n");

        

        printf("Digite o estado(A-H): ");
        scanf(" %c", &estado2);

        printf("Digite o codigo da carta(ex: B03): ");
        scanf(" %s", &codigo2);

        printf("Digite o nome da cidade: ");
        scanf(" %[^\n]", &cidade2);

        printf("Digite a população: ");
        scanf(" %d", &populacao2);

        printf("Digite a área em km²: ");
        scanf(" %f", &area2);

        printf("Digite o PIB: ");
        scanf(" %f", &pib2);

        printf("Digite o número de pontos turisticos: ");
        scanf(" %d", &pontosTuristicos2);

        printf("\n");
  // Área para exibição dos dados da cidade

return 0;
} 
