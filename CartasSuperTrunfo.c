#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main() {
  // Área para definição das variáveis para armazenar as propriedades das cidades
char estado[10];
char codigo_carta[3];
char nome_cidade[10];
int populacao;
float area_km;
float pib;
int pontos_turisticos;
  // Área para entrada de dados
printf("Digite o Estado: \n");
scanf("%s", estado); 

printf("Digita o codigo da carta: \n");
scanf("%s", codigo_carta);

printf("Digite o nome da cidade: \n");      
scanf("%s", nome_cidade);

printf("Numero da habitantes: \n");
scanf("%d", &populacao);

printf("Digite a area em km²: \n");
scanf("%f", &area_km);

printf("Digite o PIB: \n");
scanf("%f", &pib);

printf("Digite o numero de pontos Turisticos: \n");
scanf("%d", &pontos_turisticos);

  // Área para exibição dos dados da cidade
printf("\nDados da Cidade:\n");
    printf("Estado: %s\n", estado);
    printf("Codigo: %s\n", codigo_carta);
    printf("Nome da cidade: %s\n", nome_cidade);
    printf("Populacao: %d\n", populacao);
    printf("Area em km²: %f\n", area_km);
    printf("PIB: %f\n", pib);
    printf("Numero de pontos turisticos: %d\n", pontos_turisticos);

return 0;
} 
