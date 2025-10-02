#include <stdio.h>

int main() {
    // Variáveis da Carta 1
    char estado1;
    char codigo1[4]; 
    char nomeCidade1[50];
    int populacao1;
    float area1;
    float pib1;
    int pontosTuristicos1;

    // Variáveis da Carta 2
    char estado2;
    char codigo2[4];
    char nomeCidade2[50];
    int populacao2;
    float area2;
    float pib2;
    int pontosTuristicos2;

    // Entrada de dados da Carta 1
    printf("Cadastro da Carta 1:\n");
    printf("amazonas");
    scanf(" %c", &estado1);

    printf("A02");
    scanf("%s", codigo1);

    printf("Mata");
    scanf(" %[^\n]", nomeCidade1); 

    printf("1.000.000.000");
    scanf("%d", &populacao1);

    printf("298.546");
    scanf("%f", &area1);

    printf("2.000.000.000.000");
    scanf("%f", &pib1);

    printf("50");
    scanf("%d", &pontosTuristicos1);


    // Entrada de dados da Carta 2
    printf("\nCadastro da Carta 2:\n");
    printf("Alagoas");
    scanf(" %c", &estado2);

    printf("B03");
    scanf("%s", codigo2);

    printf("alagoinha");
    scanf(" %[^\n]", nomeCidade2);

    printf("1.500.000.000");
    scanf("%d", &populacao2);

    printf("577.541");
    scanf("%f", &area2);

    printf("4.000.000.000.000");
    scanf("%f", &pib2);

    printf("51");
    scanf("%d", &pontosTuristicos2);


    // Saída dos dados da Carta 1
    printf("\n===== Carta 1 =====\n");
    printf("Estado: %c\n", estado1);
    printf("Código: %s\n", codigo1);
    printf("Nome da Cidade: %s\n", nomeCidade1);
    printf("População: %d\n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: %.2f bilhões de reais\n", pib1);
    printf("Número de Pontos Turísticos: %d\n", pontosTuristicos1);

    // Saída dos dados da Carta 2
    printf("\n===== Carta 2 =====\n");
    printf("Estado: %c\n", estado2);
    printf("Código: %s\n", codigo2);
    printf("Nome da Cidade: %s\n", nomeCidade2);
    printf("População: %d\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f bilhões de reais\n", pib2);
    printf("Número de Pontos Turísticos: %d\n", pontosTuristicos2);

    return 0;
}
