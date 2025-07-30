#include <stdio.h>

int main() {
    // Carta 1
    char estado1[3];
    char codigo1[10];
    char cidade1[50];
    int populacao1;
    float area1;
    float pib1;
    int pontosTuristicos1;

    // Carta 2
    char estado2[3];
    char codigo2[10];
    char cidade2[50];
    int populacao2;
    float area2;
    float pib2;
    int pontosTuristicos2;

    // Entrada de dados - Carta 1
    printf("Estado 1: ");
    scanf("%s", estado1);
    printf("Código 1: ");
    scanf("%s", codigo1);
    printf("Cidade 1: ");
    scanf(" %[^\n]", cidade1);
    printf("População 1: ");
    scanf("%d", &populacao1);
    printf("Área 1: ");
    scanf("%f", &area1);
    printf("PIB 1: ");
    scanf("%f", &pib1);
    printf("Pontos turísticos 1: ");
    scanf("%d", &pontosTuristicos1);

    // Entrada de dados - Carta 2
    printf("Estado 2: ");
    scanf("%s", estado2);
    printf("Código 2: ");
    scanf("%s", codigo2);
    printf("Cidade 2: ");
    scanf(" %[^\n]", cidade2);
    printf("População 2: ");
    scanf("%d", &populacao2);
    printf("Área 2: ");
    scanf("%f", &area2);
    printf("PIB 2: ");
    scanf("%f", &pib2);
    printf("Pontos turísticos 2: ");
    scanf("%d", &pontosTuristicos2);

    // Exibição da carta 1
    printf("Carta 1\n");
    printf("Estado: %s\n", estado1);
    printf("Código: %s\n", codigo1);
    printf("Cidade: %s\n", cidade1);
    printf("População: %d\n", populacao1);
    printf("Área: %.2f\n", area1);
    printf("PIB: %.2f\n", pib1);
    printf("Pontos turísticos: %d\n", pontosTuristicos1);

    // Exibição da carta 2
    printf("Carta 2\n");
    printf("Estado: %s\n", estado2);
    printf("Código: %s\n", codigo2);
    printf("Cidade: %s\n", cidade2);
    printf("População: %d\n", populacao2);
    printf("Área: %.2f\n", area2);
    printf("PIB: %.2f\n", pib2);
    printf("Pontos turísticos: %d\n", pontosTuristicos2);

    return 0;
}
