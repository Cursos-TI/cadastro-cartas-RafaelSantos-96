#include <stdio.h>

// Declaração da struct (mantém igual)
struct Carta {
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
};

// Declaração das funções antes do main
void cadastrarCarta(struct Carta *carta, int numero);
void exibirCarta(struct Carta carta, int numero);

// Função principal
int main() {
    struct Carta carta1, carta2;

    cadastrarCarta(&carta1, 1);
    cadastrarCarta(&carta2, 2);

    exibirCarta(carta1, 1);
    exibirCarta(carta2, 2);

    compararCartas(carta1, carta2);

    return 0;
}

// Implementação das funções (fora do main)
void cadastrarCarta(struct Carta *carta, int numero) {
    printf("Digite o estado da carta %d: ", numero);
    scanf(" %c", &carta->estado);

    printf("Digite o código da carta %d: ", numero);
    scanf("%s", carta->codigo_carta);

    printf("Digite o nome da cidade da carta %d: ", numero);
    scanf(" %[^\n]", carta->nome_cidade);
 
    printf("Digite a população: ");
    scanf("%lu", &carta->populacao);

    printf("Digite a área em km²: ");
    scanf("%f", &carta->area_km);

    printf("Digite o PIB: ");
    scanf("%f", &carta->pib);

    printf("Digite os pontos turísticos: ");
    scanf("%d", &carta->pontos_turisticos);

    // Cálculos
    if (carta->area_km > 0)
        carta->densidade_populacional = carta->populacao / carta->area_km;
    else
        carta->densidade_populacional = 0;

    if (carta->populacao > 0)
        carta->pib_per_capita = carta->pib / carta->populacao;
    else
        carta->pib_per_capita = 0;


        // Cálculo do Super Poder
float inverso_densidade = 0;
if (carta->densidade_populacional > 0)
    inverso_densidade = 1 / carta->densidade_populacional;

carta->super_poder = (float)carta->populacao +
                     carta->area_km +
                     carta->pib +
                     carta->pontos_turisticos +
                     carta->pib_per_capita +
                     inverso_densidade;

}

void exibirCarta(struct Carta carta, int numero) {
    printf("\n--- Dados da carta %d ---\n", numero);
    printf("Estado: %c\n", carta.estado);
    printf("Codigo: %s\n", carta.codigo_carta);
    printf("Nome da cidade: %s\n", carta.nome_cidade);
    printf("Populacao: %lu\n", carta.populacao);
    printf("Area: %.2f km²\n", carta.area_km);
    printf("PIB: %.2f\n", carta.pib);
    printf("Pontos turísticos: %d\n", carta.pontos_turisticos);
    printf("Densidade populacional: %.2f\n", carta.densidade_populacional);
    printf("PIB per capita: %.2f\n", carta.pib_per_capita);
}

void compararCartas(struct Carta c1, struct Carta c2) {
    int opcao;
    printf("\nEscolha o atributo para comparar:\n");
    printf("1 - População\n");
    printf("2 - Área\n");
    printf("3 - PIB\n");
    printf("4 - Pontos turísticos\n");
    printf("5 - Densidade populacional\n");
    printf("6 - PIB per capita\n");
    printf("7 - Super Poder\n");
    printf("Opção: ");
    scanf("%d", &opcao);

    switch (opcao) {
        case 1:
            printf("População: Carta %d venceu\n", (c1.populacao > c2.populacao) ? 1 : 2);
            break;
        case 2:
            printf("Área: Carta %d venceu\n", (c1.area_km > c2.area_km) ? 1 : 2);
            break;
        case 3:
            printf("PIB: Carta %d venceu\n", (c1.pib > c2.pib) ? 1 : 2);
            break;
        case 4:
            printf("Pontos turísticos: Carta %d venceu\n", (c1.pontos_turisticos > c2.pontos_turisticos) ? 1 : 2);
            break;
        case 5:
            printf("Densidade populacional: Carta %d venceu\n", (c1.densidade_populacional < c2.densidade_populacional) ? 1 : 2);
            break;
        case 6:
            printf("PIB per capita: Carta %d venceu\n", (c1.pib_per_capita > c2.pib_per_capita) ? 1 : 2);
            break;
        case 7:
            printf("Super Poder: Carta %d venceu\n", (c1.super_poder > c2.super_poder) ? 1 : 2);
            break;
        default:
            printf("Opção inválida!\n");
    }
}

