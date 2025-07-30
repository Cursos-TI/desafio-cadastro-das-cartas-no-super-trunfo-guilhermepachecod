#include <stdio.h>

int main() {
    // Carta 1
    char codigo1[4];
    char nome1[50];
    unsigned long int populacao1;
    float area1, pib1;
    int pontosTuristicos1;
    float densidade1, pibPerCapita1, superPoder1;

    // Carta 2
    char codigo2[4];
    char nome2[50];
    unsigned long int populacao2;
    float area2, pib2;
    int pontosTuristicos2;
    float densidade2, pibPerCapita2, superPoder2;

    // Entrada Carta 1
    printf("Código 1: ");
    scanf("%s", codigo1);
    printf("Nome 1: ");
    scanf(" %[^\n]", nome1);
    printf("População 1: ");
    scanf("%lu", &populacao1);
    printf("Área 1: ");
    scanf("%f", &area1);
    printf("PIB 1: ");
    scanf("%f", &pib1);
    printf("Pontos turísticos 1: ");
    scanf("%d", &pontosTuristicos1);

    // Entrada Carta 2
    printf("Código 2: ");
    scanf("%s", codigo2);
    printf("Nome 2: ");
    scanf(" %[^\n]", nome2);
    printf("População 2: ");
    scanf("%lu", &populacao2);
    printf("Área 2: ");
    scanf("%f", &area2);
    printf("PIB 2: ");
    scanf("%f", &pib2);
    printf("Pontos turísticos 2: ");
    scanf("%d", &pontosTuristicos2);

    // Cálculos carta 1
    densidade1 = populacao1 / area1;
    pibPerCapita1 = pib1 / populacao1;
    superPoder1 = populacao1 + area1 + pib1 + pontosTuristicos1 + pibPerCapita1 + densidade1;

    // Cálculos carta 2
    densidade2 = populacao2 / area2;
    pibPerCapita2 = pib2 / populacao2;
    superPoder2 = populacao2 + area2 + pib2 + pontosTuristicos2 + pibPerCapita2 + densidade2;

    // Exibir dados da carta 1
    printf("Carta 1\n");
    printf("Código: %s\n", codigo1);
    printf("Nome: %s\n", nome1);
    printf("População: %lu\n", populacao1);
    printf("Área: %.2f\n", area1);
    printf("PIB: %.2f\n", pib1);
    printf("Pontos turísticos: %d\n", pontosTuristicos1);
    printf("Densidade Populacional: %.2f\n", densidade1);
    printf("PIB per Capita: %.2f\n", pibPerCapita1);
    printf("Super Poder: %.2f\n", superPoder1);

    // Exibir dados da carta 2
    printf("Carta 2\n");
    printf("Código: %s\n", codigo2);
    printf("Nome: %s\n", nome2);
    printf("População: %lu\n", populacao2);
    printf("Área: %.2f\n", area2);
    printf("PIB: %.2f\n", pib2);
    printf("Pontos turísticos: %d\n", pontosTuristicos2);
    printf("Densidade Populacional: %.2f\n", densidade2);
    printf("PIB per Capita: %.2f\n", pibPerCapita2);
    printf("Super Poder: %.2f\n", superPoder2);

    // Comparações
    printf("\n\nComparação de Cartas:\n\n");

    if (populacao1 > populacao2)
        printf("População: Carta 1 venceu (1)\n");
    else
        printf("População: Carta 2 venceu (0)\n");

    if (area1 > area2)
        printf("Área: Carta 1 venceu (1)\n");
    else
        printf("Área: Carta 2 venceu (0)\n");

    if (pib1 > pib2)
        printf("PIB: Carta 1 venceu (1)\n");
    else
        printf("PIB: Carta 2 venceu (0)\n");

    if (pontosTuristicos1 > pontosTuristicos2)
        printf("Pontos Turísticos: Carta 1 venceu (1)\n");
    else
        printf("Pontos Turísticos: Carta 2 venceu (0)\n");

    if (densidade1 < densidade2)
        printf("Densidade Populacional: Carta 1 venceu (1)\n");
    else
        printf("Densidade Populacional: Carta 2 venceu (0)\n");

    if (pibPerCapita1 > pibPerCapita2)
        printf("PIB per Capita: Carta 1 venceu (1)\n");
    else
        printf("PIB per Capita: Carta 2 venceu (0)\n");

    if (superPoder1 > superPoder2)
        printf("Super Poder: Carta 1 venceu (1)\n");
    else
        printf("Super Poder: Carta 2 venceu (0)\n");

    return 0;
}
