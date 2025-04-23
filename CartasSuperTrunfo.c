#include <stdio.h>

int main() {
    // Variáveis da Cidade 1
    char estado1[3], codigo_carta1[3], nome_cidade1[50];
    float populacao1, area1, PIB1, super_poder1;
    int pontos_turisticos1;

    // Variáveis da Cidade 2
    char estado2[3], codigo_carta2[3], nome_cidade2[50];
    float populacao2, area2, PIB2, super_poder2;
    int pontos_turisticos2;

    // Entrada de dados - Cidade 1
    printf("Dados da Cidade 1:\n");
    printf("Estado (ex: SP): "); scanf("%2s", estado1);
    printf("Codigo (ex: A1): "); scanf("%2s", codigo_carta1);
    printf("Nome (sem espacos): "); scanf("%49s", nome_cidade1);
    printf("Populacao: "); scanf("%f", &populacao1);
    printf("Area (km²): "); scanf("%f", &area1);
    printf("PIB (em milhoes): "); scanf("%f", &PIB1);
    printf("Pontos Turisticos: "); scanf("%d", &pontos_turisticos1);
    printf("Super Poder (0-100): "); scanf("%f", &super_poder1);

    // Entrada de dados - Cidade 2
    printf("\nDados da Cidade 2:\n");
    printf("Estado (ex: RJ): "); scanf("%2s", estado2);
    printf("Codigo (ex: B2): "); scanf("%2s", codigo_carta2);
    printf("Nome (sem espacos): "); scanf("%49s", nome_cidade2);
    printf("Populacao: "); scanf("%f", &populacao2);
    printf("Area (km²): "); scanf("%f", &area2);
    printf("PIB (em milhoes): "); scanf("%f", &PIB2);
    printf("Pontos Turisticos: "); scanf("%d", &pontos_turisticos2);
    printf("Super Poder (0-100): "); scanf("%f", &super_poder2);

    // Cálculos adicionais
    float densidade1 = populacao1 / area1;
    float densidade2 = populacao2 / area2;
    float pib_per_capita1 = (PIB1 * 1e6) / populacao1;
    float pib_per_capita2 = (PIB2 * 1e6) / populacao2;

    // Comparações (1 = Carta 1 vence, 0 = Carta 2 vence)
    int resultado_populacao = (populacao1 > populacao2);
    int resultado_pib = (PIB1 > PIB2);
    int resultado_pontos_turisticos = (pontos_turisticos1 > pontos_turisticos2);
    int resultado_densidade = (densidade1 < densidade2);  // Menor valor vence
    int resultado_pib_per_capita = (pib_per_capita1 > pib_per_capita2);
    int resultado_super_poder = (super_poder1 > super_poder2);

    // Exibição dos resultados
    printf("\n--- Resultados das Comparacoes ---\n");
    printf("Populacao: %d\n", resultado_populacao);
    printf("PIB: %d\n", resultado_pib);
    printf("Pontos Turisticos: %d\n", resultado_pontos_turisticos);
    printf("Densidade Populacional: %d (menor vence)\n", resultado_densidade);
    printf("PIB per capita: %d\n", resultado_pib_per_capita);
    printf("Super Poder: %d\n", resultado_super_poder);

    return 0;
}
