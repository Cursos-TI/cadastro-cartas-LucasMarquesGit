#include <stdio.h>

int main() {
    // Carta 1
    char estado1 = 'A';
    char codigo1[] = "A02"; 
    char nomeCidade1[] = "Mata";
    int populacao1 = 1000000000;
    float area1 = 298.546;
    float pib1 = 2000000000000.0;
    int pontosTuristicos1 = 50;

    // Carta 2
    char estado2 = 'B';
    char codigo2[] = "B03";
    char nomeCidade2[] = "Alagoinha";
    int populacao2 = 1500000000;
    float area2 = 577.541;
    float pib2 = 4000000000000.0;
    int pontosTuristicos2 = 51;

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
