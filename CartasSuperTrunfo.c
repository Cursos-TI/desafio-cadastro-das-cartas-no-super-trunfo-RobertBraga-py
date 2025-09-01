#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.

int main() {
    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.
    char estado1;
    char codigo1[3];
    char cidade1[20];
    int populacao1;
    float area1;
    float pib1;
    int turisticos1;

    char estado2;
    char codigo2[3];
    char cidade2[20];
    int populacao2;
    float area2;
    float pib2;
    int turisticos2;
    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.
    printf("Digite o código do estado da primeira carta: ");
    scanf("%c", &estado1);

    printf("Digite o código da primeira cidade: ");
    scanf("%s", codigo1);

    printf("Digite o nome da primeira cidade: ");
    scanf("%s", cidade1);

    printf("Digite populaçao da primeira cidade: ");
    scanf("%d", &populacao1);

    printf("Digite a área da cidade em km²: ");
    scanf("%f", &area1);

    printf("Digite o PIB da primeira cidade: ");
    scanf("%f", &pib1);

    printf("Digite a quantidade de pontos turísticos da primeira cidade: ");
    scanf("%d", &turisticos1);

    printf("Digite o código do estado da segunda carta: ");
    scanf("%c", &estado2);

    printf("Digite o código da segunda cidade: ");
    scanf("%s", codigo2);

    printf("Digite o nome da segunda cidade: ");
    scanf("%s", cidade2);

    printf("Digite a população da segunda cidade: ");
    scanf("%d", &populacao2);

    printf("Digite a aréa da segunda cidade em km²: ");
    scanf("%f", &area2);

    printf("Digite o PIB da segunda cidade: ");
    scanf("%f", &pib2);

    printf("Digite a quantidade de pontos turísticos da segunda cidade: ");
    scanf("%d", &turisticos2);

    
    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.  
        
    printf("O código do primeiro estado é %c.\n", estado1);
    printf("O código da cidade é %s.\n", codigo1);
    printf("A cidade é %s.\n", cidade1);
    printf("A cidade possui %d habitantes.\n", populacao1);
    printf("A area da cidade é de %.2f km².\n", area1);
    printf("O PIB da cidade é R$%.2f.\n", pib1);
    printf("A cidade possui %d pontos turísticos.\n\n", turisticos1);
    
    printf("O código do segundo estado é %c.\n", estado2);
    printf("O código da cidade é %s.\n", codigo2);
    printf("A cidade é %s.\n", cidade2);
    printf("A cidade possui %d habitantes.\n", populacao2);
    printf("A area da cidade é de %.2f km².\n", area2);
    printf("O PIB da cidade é R$%.2f.\n", pib2);
    printf("A cidade possui %d pontos turísticos.\n", turisticos2);

    return 0;
}
