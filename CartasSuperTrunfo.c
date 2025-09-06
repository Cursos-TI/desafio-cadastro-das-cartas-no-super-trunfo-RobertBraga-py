#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.

int main() {
    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.

    //carta 1
    char estado1;
    char codigo1[3];
    char cidade1[20];
    unsigned long int populacao1;
    int turisticos1;
    float area1;
    float pib1;
    float densidade1;
    float PPC1;
    float superpoder1;
    //carta 2
    char estado2;
    char codigo2[3];
    char cidade2[20];
    unsigned long int populacao2;
    int turisticos2;
    float area2;
    float pib2;
    float densidade2;
    float PPC2;
    float superpoder2;

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
    scanf("%ld", &populacao1);

    printf("Digite a área da cidade em km²: ");
    scanf("%f", &area1);

    printf("Digite o PIB da primeira cidade: ");
    scanf("%f", &pib1);

    printf("Digite a quantidade de pontos turísticos da primeira cidade: ");
    scanf("%d", &turisticos1);

    densidade1 = populacao1 / area1;
    PPC1 = pib1 / populacao1;

    printf("Digite o código do estado da segunda carta: ");
    scanf("%c", &estado2);

    printf("Digite o código da segunda cidade: ");
    scanf("%s", codigo2);

    printf("Digite o nome da segunda cidade: ");
    scanf("%s", cidade2);

    printf("Digite a população da segunda cidade: ");
    scanf("%ld", &populacao2);

    printf("Digite a aréa da segunda cidade em km²: ");
    scanf("%f", &area2);

    printf("Digite o PIB da segunda cidade: ");
    scanf("%f", &pib2);

    printf("Digite a quantidade de pontos turísticos da segunda cidade: ");
    scanf("%d", &turisticos2);

    densidade2 = populacao2 / area2;
    PPC2 = pib2 / populacao2;

    superpoder1 = populacao1 + area1 + pib1 + turisticos1 + PPC1 - densidade1;
    superpoder2 = populacao2 + area2 + pib2 + turisticos2 + PPC2 - densidade2;
      
    // Exibição dos Dados das Cartas.
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.  
        
    printf("O código do primeiro estado é %c.\n", estado1);
    printf("O código da cidade é %s.\n", codigo1);
    printf("A cidade é %s.\n", cidade1);
    printf("A cidade possui %d habitantes.\n", populacao1);
    printf("A area da cidade é de %.2f km².\n", area1);
    printf("O PIB da cidade é R$%.2f.\n", pib1);
    printf("A cidade possui %d pontos turísticos.\n", turisticos1);
    printf("A densidade populacional dessa cidade é %.f\n", densidade1);
    printf("O PIB per capita dessa cidade é R$%.2f\n\n", PPC1);
    
    printf("O código do segundo estado é %c.\n", estado2);
    printf("O código da cidade é %s.\n", codigo2);
    printf("A cidade é %s.\n", cidade2);
    printf("A cidade possui %d habitantes.\n", populacao2);
    printf("A area da cidade é de %.2f km².\n", area2);
    printf("O PIB da cidade é R$%.2f.\n", pib2);
    printf("A cidade possui %d pontos turísticos.\n", turisticos2);
    printf("A densidade populacional dessa cidade é %.f\n", densidade2);
    printf("O PIB per capita dessa cidade é R$%.2f\n", PPC2);

    printf("População: Carta 1 venceu. %d\n", populacao1 > populacao2);
    printf("Area: Carta 1 venceu. %d\n", area1 > area2);
    printf("PIB: Carta 1 venceu. %d\n", pib1 > pib2);
    printf("Pontos Turísticos: Carta 1 venceu. %d\n", turisticos1 > turisticos2);
    printf("Densidade populacional: Carta 1 venceu.%d\n", densidade1 < densidade2);
    printf("PIB per capita: Carta 1 venceu. %d\n", PPC1 > PPC2);
    printf("Siper Poder: Carta 1 venceu. %d\n", superpoder1 > superpoder2);

    return 0;
}
