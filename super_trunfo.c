#include <stdio.h>

// Programa para cadastrar e exibir informações de duas cartas do Super Trunfo
int main() {
    // Declaração de variáveis para armazenar os dados das cartas
    char estado1, estado2; 
    char codigo1[5], codigo2[5]; // A01, B03 (+1 para o caractere nulo)
    char nome1[50], nome2[50]; 
    int populacao1, populacao2; 
    float area1, area2; 
    float pib1, pib2; 
    int pontosTuristicos1, pontosTuristicos2; 

    // Cadastro da primeira carta
    printf("Cadastro da Carta 1:\n");
    printf("Digite o estado (A-H): ");
    scanf(" %c", &estado1);
    printf("Digite o código da carta (ex: A01): ");
    scanf(" %s", codigo1);
    getchar(); // Limpa o buffer antes da próxima entrada
    printf("Digite o nome da cidade: ");
    scanf(" %s[^\n]", nome1);
    printf("Digite a população: ");
    scanf(" %d", &populacao1);
    printf("Digite a área (km²): ");
    scanf(" %f", &area1);
    printf("Digite o PIB (em bilhões de reais): ");
    scanf(" %f", &pib1);
    printf("Digite o número de pontos turísticos: ");
    scanf(" %d", &pontosTuristicos1);

    // Cadastro da segunda carta
    printf("\nCadastro da Carta 2:\n");
    printf("Digite o estado (A-H): ");
    scanf(" %c", &estado2);
    printf("Digite o código da carta (ex: B02): ");
    scanf(" %s", codigo2);
    getchar(); 
    printf("Digite o nome da cidade: ");
    scanf(" %s[^\n]", nome2);
    printf("Digite a população: ");
    scanf(" %d", &populacao2);
    printf("Digite a área (km²): ");
    scanf(" %f", &area2);
    printf("Digite o PIB (em bilhões de reais): ");
    scanf(" %f", &pib2);
    printf("Digite o número de pontos turísticos: ");
    scanf(" %d", &pontosTuristicos2);

    // Exibição dos dados da primeira carta
    printf("\nCarta 1:\n");
    printf("Estado: %c\n", estado1);
    printf("Código: %s\n", codigo1);
    printf("Nome da Cidade: %s\n", nome1);
    printf("População: %d\n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: R$ %.2f bilhões\n", pib1);
    printf("Número de Pontos Turísticos: %d\n", pontosTuristicos1);

    // Exibição dos dados da segunda carta
    printf("\nCarta 2:\n");
    printf("Estado: %c\n", estado2);
    printf("Código: %s\n", codigo2);
    printf("Nome da Cidade: %s\n", nome2);
    printf("População: %d\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: R$ %.2f bilhões\n", pib2);
    printf("Número de Pontos Turísticos: %d\n", pontosTuristicos2);

    return 0;
}
