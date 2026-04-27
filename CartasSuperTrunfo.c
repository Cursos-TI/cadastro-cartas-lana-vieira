#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main() {
  // Área para definição das variáveis para armazenar as propriedades das cidades
  // Carta 1
char estado1;              // Uma letra de 'A' a 'H'
char codigo1[4];           // Ex: "A01"
char cidade1[50];          // Nome da cidade
int populacao1;            // Número de habitantes
float area1;               // Área em km²
float pib1;                // PIB em bilhões de reais
int pontosTuristicos1;     // Número de pontos turísticos

// Carta 2
char estado2;
char codigo2[4];
char cidade2[50];
int populacao2;
float area2;
float pib2;
int pontosTuristicos2;

  // Área para entrada de dados
  // Entrada de dados da Carta 1
printf("Cadastro da Carta 1:\n");

printf("Estado (A-H): ");
scanf(" %c", &estado1);

printf("Codigo da Carta (ex: A01): ");
scanf("%s", codigo1);

printf("Nome da Cidade: ");
scanf(" %[^\n]", cidade1);

printf("Populacao: ");
scanf("%d", &populacao1);

printf("Area (km²): ");
scanf("%f", &area1);

printf("PIB (em bilhões de reais): ");
scanf("%f", &pib1);

printf("Número de Pontos Turísticos: ");
scanf("%d", &pontosTuristicos1);

// Entrada de dados da Carta 2
printf("\nCadastro da Carta 2:\n");

printf("Estado (A-H): ");
scanf(" %c", &estado2);

printf("Codigo da Carta (ex: B02): ");
scanf("%s", codigo2);

printf("Nome da Cidade: ");
scanf(" %[^\n]", cidade2);

printf("Populacao: ");
scanf("%d", &populacao2);

printf("Area (km²): ");
scanf("%f", &area2);

printf("PIB (em bilhões de reais): ");
scanf("%f", &pib2);

printf("Número de Pontos Turísticos: ");
scanf("%d", &pontosTuristicos2);

  // Área para exibição dos dados da cidade
  // Exibição dos dados da Carta 1
printf("\n--- Carta 1 ---\n");
printf("Estado: %c\n", estado1);
printf("Codigo: %s\n", codigo1);
printf("Nome da Cidade: %s\n", cidade1);
printf("Populacao: %d\n", populacao1);
printf("Area: %.2f km²\n", area1);
printf("PIB: %.2f bilhões de reais\n", pib1);
printf("Número de Pontos Turísticos: %d\n", pontosTuristicos1);

// Exibição dos dados da Carta 2
printf("\n--- Carta 2 ---\n");
printf("Estado: %c\n", estado2);
printf("Codigo: %s\n", codigo2);
printf("Nome da Cidade: %s\n", cidade2);
printf("Populacao: %d\n", populacao2);
printf("Area: %.2f km²\n", area2);
printf("PIB: %.2f bilhões de reais\n", pib2);
printf("Número de Pontos Turísticos: %d\n", pontosTuristicos2);
return 0;

} 
