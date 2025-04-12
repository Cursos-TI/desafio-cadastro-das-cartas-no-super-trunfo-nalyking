#include <stdio.h>

int main() {
    // Variáveis da Cidade 1
    char estado1[3]; // Código do estado (ex: "SP", "RJ")
    char codigo_carta1[3]; // Código da carta (ex: "A1", "B2")
    char nome_cidade1[50]; // Nome da cidade (sem espaços)
    float populacao1;
    float area1;
    float PIB1;
    int pontos_turisticos1;

    // Variáveis da Cidade 2
    char estado2[3];
    char codigo_carta2[3];
    char nome_cidade2[50];
    float populacao2;
    float area2;
    float PIB2;
    int pontos_turisticos2;

    // Entrada de dados - Cidade 1
    printf("Codigo do Estado (ex: SP, RJ): \n");
    scanf("%2s", estado1); // Lê apenas 2 caracteres (evita overflow)

    printf("Codigo da Carta (ex: A1, B2): \n");
    scanf("%2s", codigo_carta1);

    printf("Nome da Cidade (SEM ESPACOS): \n");
    scanf("%49s", nome_cidade1); // Limita a 49 caracteres + '\0'

    printf("Populacao: \n");
    scanf("%f", &populacao1);

    printf("Area (km²): \n");
    scanf("%f", &area1);

    printf("PIB (em milhoes): \n");
    scanf("%f", &PIB1);

    printf("Numero de Pontos Turisticos: \n");
    scanf("%d", &pontos_turisticos1);

    // Cálculos para Cidade 1
    float densidade1 = populacao1 / area1;
    float pib_per_capita1 = (PIB1 * 1e6) / populacao1; // Convertendo PIB para unidade monetária

    // Entrada de dados - Cidade 2
    printf("\nCodigo do Estado (ex: SP, RJ): \n");
    scanf("%2s", estado2);

    printf("Codigo da Carta (ex: A1, B2): \n");
    scanf("%2s", codigo_carta2);

    printf("Nome da Cidade (SEM ESPACOS): \n");
    scanf("%49s", nome_cidade2);

    printf("Populacao: \n");
    scanf("%f", &populacao2);

    printf("Area (km²): \n");
    scanf("%f", &area2);

    printf("PIB (em milhoes): \n");
    scanf("%f", &PIB2);

    printf("Numero de Pontos Turisticos: \n");
    scanf("%d", &pontos_turisticos2);

    // Cálculos para Cidade 2
    float densidade2 = populacao2 / area2;
    float pib_per_capita2 = (PIB2 * 1e6) / populacao2;

    // Exibição dos resultados - Cidade 1
    printf("\n--- Cidade 1 ---\n");
    printf("Estado: %s\n", estado1);
    printf("Codigo da Carta: %s\n", codigo_carta1);
    printf("Cidade: %s\n", nome_cidade1);
    printf("Populacao: %.0f habitantes\n", populacao1);
    printf("Area: %.2f km²\n", area1);
    printf("PIB: R$ %.2f milhoes\n", PIB1);
    printf("Pontos Turisticos: %d\n", pontos_turisticos1);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade1);
    printf("PIB per capita: R$ %.2f\n", pib_per_capita1);

    // Exibição dos resultados - Cidade 2
    printf("\n--- Cidade 2 ---\n");
    printf("Estado: %s\n", estado2);
    printf("Codigo da Carta: %s\n", codigo_carta2);
    printf("Cidade: %s\n", nome_cidade2);
    printf("Populacao: %.0f habitantes\n", populacao2);
    printf("Area: %.2f km²\n", area2);
    printf("PIB: R$ %.2f milhoes\n", PIB2);
    printf("Pontos Turisticos: %d\n", pontos_turisticos2);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade2);
    printf("PIB per capita: R$ %.2f\n", pib_per_capita2);

    return 0;
}
