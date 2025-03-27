#include <stdio.h>
#include <string.h>

int main() {
    // Definição das variáveis
    char estado1, estado2;
    char codigo1[5], codigo2[5];
    char nomeCidade1[50], nomeCidade2[50];
    int populacao1, populacao2;
    float area1, area2;
    float pib1, pib2;
    int pontosTuristicos1, pontosTuristicos2;

    // Leitura da primeira carta
    printf("Informe o estado da primeira carta: ");
    scanf(" %c", &estado1); // Espaço antes do %c para evitar erro

    printf("Informe o código da primeira carta: ");
    scanf("%s", codigo1);

    getchar(); // Evita a leitura do \n que fica no codigo
    printf("Informe o nome da cidade da primeira carta: ");
    fgets(nomeCidade1, 50, stdin);
    nomeCidade1[strcspn(nomeCidade1, "\n")] = 0; // Remove o \n

    printf("Informe a população da primeira carta: ");
    scanf("%d", &populacao1);

    printf("Informe a área da primeira carta (em km²): ");
    scanf("%f", &area1);

    printf("Informe o PIB da primeira carta: ");
    scanf("%f", &pib1);

    printf("Informe os pontos turísticos da primeira carta: ");
    scanf("%d", &pontosTuristicos1);

    // Leitura da segunda carta
    printf("\nInforme o estado da segunda carta: ");
    scanf(" %c", &estado2); // Espaço antes do %c

    printf("Informe o código da segunda carta: ");
    scanf("%s", codigo2);

    getchar(); // Evita a leitura do \n que fica no codigo
    printf("Informe o nome da cidade da segunda carta: ");
    fgets(nomeCidade2, 50, stdin);
    nomeCidade2[strcspn(nomeCidade2, "\n")] = 0; // Remove o \n

    printf("Informe a população da segunda carta: ");
    scanf("%d", &populacao2);

    printf("Informe a área da segunda carta (em km²): ");
    scanf("%f", &area2);

    printf("Informe o PIB da segunda carta: ");
    scanf("%f", &pib2);

    printf("Informe os pontos turísticos da segunda carta: ");
    scanf("%d", &pontosTuristicos2);

    // Exibição dos dados
    printf("\nCarta 1:\n");
    printf("Estado: %c\n", estado1);
    printf("Código: %s\n", codigo1);
    printf("Cidade: %s\n", nomeCidade1);
    printf("População: %d\n", populacao1);
    printf("Área (km²): %.2f\n", area1);
    printf("PIB: %.2f\n", pib1);
    printf("Pontos turísticos: %d\n", pontosTuristicos1);

    printf("\nCarta 2:\n");
    printf("Estado: %c\n", estado2);
    printf("Código: %s\n", codigo2);
    printf("Cidade: %s\n", nomeCidade2);
    printf("População: %d\n", populacao2);
    printf("Área (km²): %.2f\n", area2);
    printf("PIB: %.2f\n", pib2);
    printf("Pontos turísticos: %d\n", pontosTuristicos2);

    return 0;
}
