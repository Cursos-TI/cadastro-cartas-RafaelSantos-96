#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main() {
  // Área para definição das variáveis para armazenar as propriedades das cidades
char estado;
char codigo_carta[6];
char nome_cidade[50];
unsigned long int populacao;
float area_km;
float pib;
int pontos_turisticos;
float densidade_populacional;
float pib_per_capita;
float super_poder;


for (int i = 1; i <= 2; i++) {

printf("Cadastro da carta %d:\n", i);
if (i > 1) getchar();
printf("Digite o estado: \n");
fflush(stdout);
scanf(" %c", &estado); 

printf("Digita o codigo da carta: \n");
scanf("%s", codigo_carta);

printf("Digite o nome da cidade: \n");      
scanf(" %[^\n]", nome_cidade);

printf("Numero da habitantes: \n");
scanf("%u", &populacao);

printf("Digite a area em km²: \n");
scanf("%f", &area_km);

printf("Digite o PIB: \n");
scanf("%f", &pib);

printf("Digite o numero de pontos Turisticos: \n");
scanf("%d", &pontos_turisticos);

densidade_populacional = populacao / area_km;
pib_per_capita = pib / populacao;  

    if (area_km > 0) {
        densidade_populacional = populacao / area_km;
    } else {
        densidade_populacional = 0;
        printf("Área inválida para cálculo da densidade!\n");
    }

    if (populacao > 0) {
        pib_per_capita = pib / populacao;
    } else {
        pib_per_capita = 0;
        printf("População inválida para cálculo do PIB per capita!\n");
}  

  // Área para exibição dos dados da cidade
    printf("\nDados da carta %d:\n", i);
    
    printf("Estado: %c\n", estado);
    printf("Codigo: %s\n", codigo_carta);
    printf("Nome da cidade: %s\n", nome_cidade);
    printf("Populacao: %u\n", populacao);
    printf("Area em km²: %.2f\n", area_km);
    printf("PIB: %.2f\n", pib);
    printf("Numero de pontos turisticos: %d\n", pontos_turisticos);
    printf("Densidade populacional: %.2f\n", densidade_populacional);
    printf("PIB per capita: %.2f\n", pib_per_capita);

    

  } 

return 0;

}