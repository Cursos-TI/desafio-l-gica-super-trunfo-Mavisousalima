#include <stdio.h>

int main() {
    char estado1[2];
    char codigo1[4];
    char cidade1[50];
    unsigned long int populacao1;
    float area1;
    float pib1;
    int pontos_turisticos1;
    float densidade_populacional1;
    float pib_per_capita1;
    float super_poder1;

    char estado2[2];
    char codigo2[4];
    char cidade2[50];
    unsigned long int populacao2;
    float area2;
    float pib2;
    int pontos_turisticos2;
    float densidade_populacional2;
    float pib_per_capita2;
    float super_poder2;

    int resultado_comparacao_populacao;
    int resultado_comparacao_area;
    int resultado_comparacao_pib;
    int resultado_comparacao_pontos_turisticos;
    int resultado_comparacao_densidade_populacional;
    int resultado_comparacao_pib_per_capita;
    int resultado_comparacao_super_poder;

    printf("\n============= Desafio Super Trunfo ===============\n");

    // Leitura das informações da Carta 1
    printf("Digite o nome do primeiro Estado: ");
    scanf("%s", estado1);
    printf("Digite o codigo do primeiro Estado: ");
    scanf("%s", codigo1);
    printf("Digite o nome da cidade: ");
    scanf(" %[^\n]", cidade1);
    printf("Digite a população: ");
    scanf("%d", &populacao1);
    printf("Digite a area: ");
    scanf("%f", &area1);
    printf("Digite o PIB: ");
    scanf("%f", &pib1);
    printf("Digite a quantidade de pontos turisticos: ");
    scanf("%d", &pontos_turisticos1);

    densidade_populacional1 = populacao1 / area1;
    pib_per_capita1 = pib1 / populacao1;

    super_poder1 = populacao1 + area1 + pib1 + pontos_turisticos1 + pib_per_capita1 + (1/densidade_populacional1);

    // Leitura das informações da Carta 2
    printf("\nDigite o nome do segundo Estado: ");
    scanf("%s", estado2);
    printf("Digite o codigo do segundo Estado: ");
    scanf("%s", codigo2);
    printf("Digite o nome da cidade: ");
    scanf(" %[^\n]", cidade2);
    printf("Digite a população: ");
    scanf("%d", &populacao2);
    printf("Digite a area: ");
    scanf("%f", &area2);
    printf("Digite o PIB: ");
    scanf("%f", &pib2);
    printf("Digite a quantidade de pontos turisticos: ");
    scanf("%d", &pontos_turisticos2);

    densidade_populacional2 = populacao2 / area2;
    pib_per_capita2 = pib2 / populacao2;

    super_poder2 = populacao2 + area2 + pib2 + pontos_turisticos2 + pib_per_capita2 + (1/densidade_populacional1);

    printf("\n====== CARTAS =======\n");

    // Saída das informações da Carta 1
    printf("Carta 1");
    printf("\nEstado: %s", estado1);
    printf("\nCódigo: %s", codigo1);
    printf("\nNome da Cidade: %s", cidade1);
    printf("\nPopulação: %d", populacao1);
    printf("\nÁrea: %.2f km²", area1);
    printf("\nPIB: %.2f", pib1);
    printf("\nNúmero de Pontos Turísticos: %d", pontos_turisticos1);
    printf("\nDensidade Populacional: %.2f hab/km²", densidade_populacional1);
    printf("\nPIB per Capita: %.2f\n", pib_per_capita1);

    // Saída das informações da Carta 2
    printf("\nCarta 2");
    printf("\nEstado: %s", estado2);
    printf("\nCódigo: %s", codigo2);
    printf("\nNome da Cidade: %s", cidade2);
    printf("\nPopulação: %d", populacao2);
    printf("\nÁrea: %.2f km²", area2);
    printf("\nPIB: %.2f", pib2);
    printf("\nNúmero de Pontos Turísticos: %d", pontos_turisticos2);
    printf("\nDensidade Populacional: %.2f hab/km²", densidade_populacional2);
    printf("\nPIB per Capita: %.2f\n", pib_per_capita2);

    // COMPARAR ATRIBUTO POPULAÇÃO

    printf("\nComparação de cartas (Atributo: População)\n");
    printf("\nCarta 1 - %s: %d", cidade1, populacao1);
    printf("\nCarta 2 - %s: %d", cidade2, populacao2);
    
    if (populacao1 > populacao2) {
        printf("\nResultado: Carta 1 (%s) venceu!", cidade1);
    } else {
        printf("\nResultado: Carta 2 (%s) venceu!", cidade2);
    }

    return 0;
}