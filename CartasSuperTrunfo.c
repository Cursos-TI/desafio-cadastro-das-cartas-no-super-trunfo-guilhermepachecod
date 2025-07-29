#include <stdio.h>

int main() {
    // Variáveis da carta 1
    char codigo1[4];
    char nome1[50];
    int populacao1;
    float area1;
    float pib1;
    int pontosTuristicos1;

    // Variáveis da carta 2
    char codigo2[4];
    char nome2[50];
    int populacao2;
    float area2;
    float pib2;
    int pontosTuristicos2;

    // Leitura dos dados da carta 1
    printf("Código 1: ");
    scanf("%s", codigo1);
    printf("Nome 1: ");
    scanf(" %[^\n]", nome1);
    printf("População 1: ");
    scanf("%d", &populacao1);
    printf("Área 1: ");
    scanf("%f", &area1);
    printf("PIB 1: ");
    scanf("%f", &pib1);
    printf("Pontos turísticos 1: ");
    scanf("%d", &pontosTuristicos1);

    // Leitura dos dados da carta 2
    printf("Código 2: ");
    scanf("%s", codigo2);
    printf("Nome 2: ");
    scanf(" %[^\n]", nome2);
    printf("População 2: ");
    scanf("%d", &populacao2);
    printf("Área 2: ");
    scanf("%f", &area2);
    printf("PIB 2: ");
    scanf("%f", &pib2);
    printf("Pontos turísticos 2: ");
    scanf("%d", &pontosTuristicos2);

    // Exibindo os dados da carta 1
    printf("Carta 1\n");
    printf("Código: %s\n", codigo1);
    printf("Nome: %s\n", nome1);
    printf("População: %d\n", populacao1);
    printf("Área: %.2f\n", area1);
    printf("PIB: %.2f\n", pib1);
    printf("Pontos turísticos: %d\n", pontosTuristicos1);

    // Exibindo os dados da carta 2
    printf("Carta 2\n");
    printf("Código: %s\n", codigo2);
    printf("Nome: %s\n", nome2);
    printf("População: %d\n", populacao2);
    printf("Área: %.2f\n", area2);
    printf("PIB: %.2f\n", pib2);
    printf("Pontos turísticos: %d\n", pontosTuristicos2);

    return 0;
}
