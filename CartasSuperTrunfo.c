#include <stdio.h>

int main() {
    // Variáveis

    char estado;
    char card_code[3];
    char name_city[50];
    float population;
    float area;
    float PIB;
    int tourist_attractions;

    char estado2;
    char card_code2[3];
    char name_city2[50];
    float population2;
    float area2;
    float PIB2;
    int tourist_attractions2;

    // Carta 1

    printf("Codigo do Estado: \n");
    scanf("%s", &estado); // Input Codigo do Estado

    printf("Codigo da Carta: \n");
    scanf("%s", &card_code);  // Input Codigo da Carta

    printf("Nome da Cidade(SEM ESPACOS): \n");
    scanf("%s", &name_city);  // Input Nome da Cidade

    printf("Populacao: \n");
    scanf("%f", &population);    // Input População

    printf("Área: \n");
    scanf("%f", &area);    // Input Área

    printf("PIB: \n");
    scanf("%f", &PIB);  // Input PIB

    printf("Números de Pontos Turisticos: \n");
    scanf("%d", &tourist_attractions);    // Input Pontos Turísticos

    // Prints

    printf("Carta 1\n");
    printf("Estado: %s\n", &estado);
    printf("Carta: %s\n", &card_code);
    printf("Cidade: %s\n", &name_city);
    printf("Populacao: %d\n", &population);
    printf("Área: %d\n", &area);
    printf("PIB: %d\n", &PIB);
    printf("Pontos Turisticos: %d\n", &tourist_attractions);

    // Carta 2 

    printf("Codigo do Estado: \n");
    scanf("%s", &estado2); // Input Codigo do Estado

    printf("Codigo da Carta: \n");
    scanf("%s", &card_code2);  // Input Codigo da Carta

    printf("Nome da Cidade(SEM ESPACOS): \n");
    scanf("%s", &name_city2);  // Input Nome da Cidade

    printf("Populacao: \n");
    scanf("%f", &population2);    // Input População

    printf("Área: \n");
    scanf("%f", &area2);   // Input Área

    printf("PIB: \n");
    scanf("%f", &PIB2);  // Input PIB

    printf("Números de Pontos Turisticos: \n");
    scanf("%d", &tourist_attractions2);    // Input Pontos Turísticos

    // Prints
    
    printf("Carta 2\n");
    printf("Estado: %s\n", &estado2);
    printf("Carta: %s\n", &card_code2);
    printf("Cidade: %s\n", &name_city2);
    printf("Populacao: %d\n", &population2);
    printf("Área: %d m²\n", &area2);
    printf("PIB: %d\n", &PIB2);
    printf("Pontos Turisticos: %d\n", &tourist_attractions2);

    return 0;
}