#include <stdio.h>

int main() {
    // Carta 1
    char estado1[30];
    char codigo1[10];
    char cidade1[50];
    unsigned long int populacao1;
    float area1;
    float pib1;
    int pontosTuristicos1;
    float densidade1, pibPerCapita1, superPoder1;

    // Carta 2
    char estado2[30];
    char codigo2[10];
    char cidade2[50];
    unsigned long int populacao2;
    float area2;
    float pib2;
    int pontosTuristicos2;
    float densidade2, pibPerCapita2, superPoder2;

    // Entrada - Carta 1
    printf("Estado 1: ");
    scanf(" %[^\n]", estado1);
    printf("Código 1: ");
    scanf("%s", codigo1);
    printf("Cidade 1: ");
    scanf(" %[^\n]", cidade1);
    printf("População 1: ");
    scanf("%lu", &populacao1);
    printf("Área 1 (em km²): ");
    scanf("%f", &area1);
    printf("PIB 1 (em bilhões de reais): ");
    scanf("%f", &pib1);
    printf("Pontos turísticos 1: ");
    scanf("%d", &pontosTuristicos1);

    // Entrada - Carta 2
    printf("Estado 2: ");
    scanf(" %[^\n]", estado2);
    printf("Código 2: ");
    scanf("%s", codigo2);
    printf("Cidade 2: ");
    scanf(" %[^\n]", cidade2);
    printf("População 2: ");
    scanf("%lu", &populacao2);
    printf("Área 2 (em km²): ");
    scanf("%f", &area2);
    printf("PIB 2 (em bilhões de reais): ");
    scanf("%f", &pib2);
    printf("Pontos turísticos 2: ");
    scanf("%d", &pontosTuristicos2);

    // Cálculos
    densidade1 = (float)populacao1 / area1;
    densidade2 = (float)populacao2 / area2;

    pibPerCapita1 = (pib1 * 1000000000.0) / populacao1;
    pibPerCapita2 = (pib2 * 1000000000.0) / populacao2;

    superPoder1 = (float)populacao1 + area1 + pib1 + pontosTuristicos1 + pibPerCapita1 + (1.0 / densidade1);
    superPoder2 = (float)populacao2 + area2 + pib2 + pontosTuristicos2 + pibPerCapita2 + (1.0 / densidade2);

    // Exibição das cartas
    printf("\nCarta 1\n");
    printf("Estado: %s\n", estado1);
    printf("Código: %s\n", codigo1);
    printf("Cidade: %s\n", cidade1);
    printf("População: %lu\n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: %.2f bilhões de reais\n", pib1);
    printf("Pontos turísticos: %d\n", pontosTuristicos1);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade1);
    printf("PIB per Capita: %.2f reais\n", pibPerCapita1);
    printf("Super Poder: %.2f\n", superPoder1);

    printf("\nCarta 2\n");
    printf("Estado: %s\n", estado2);
    printf("Código: %s\n", codigo2);
    printf("Cidade: %s\n", cidade2);
    printf("População: %lu\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f bilhões de reais\n", pib2);
    printf("Pontos turísticos: %d\n", pontosTuristicos2);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade2);
    printf("PIB per Capita: %.2f reais\n", pibPerCapita2);
    printf("Super Poder: %.2f\n", superPoder2);

    // Comparações
    printf("\nComparação de Cartas:\n");

    printf("\nComparação de Cartas:\n");
    printf("População: %d\n", (populacao1 > populacao2));
    printf("Área: %d\n", (area1 > area2));
    printf("PIB: %d\n", (pib1 > pib2));
    printf("Pontos Turísticos: %d\n", (pontosTuristicos1 > pontosTuristicos2));
    printf("Densidade Populacional: %d\n", (densidade1 < densidade2)); // menor vence
    printf("PIB per Capita: %d\n", (pibPerCapita1 > pibPerCapita2));
    printf("Super Poder: %d\n", (superPoder1 > superPoder2));

    return 0;
}
