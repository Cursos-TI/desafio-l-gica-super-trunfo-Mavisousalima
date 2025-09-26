#include <stdio.h>

int main() {
    char pais1[50];
    unsigned long int populacao1;
    float area1;
    float pib1;
    int pontos_turisticos1;
    float densidade_populacional1;
    float pib_per_capita1;
    float super_poder1;

    char pais2[50];
    unsigned long int populacao2;
    float area2;
    float pib2;
    int pontos_turisticos2;
    float densidade_populacional2;
    float pib_per_capita2;
    float super_poder2;

    int opcao;

    printf("\n============= Desafio Super Trunfo ===============\n");

    // Leitura das informações da Carta 1
    printf("Cadastro da Carta 1:\n");
    printf("Digite o nome do País: ");
    scanf("%s", pais1);
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

    //Leitura das informações da Carta 2
    printf("\nCadastro da Carta 2:\n");
    printf("Digite o nome do País: ");
    scanf("%s", pais2);
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
    printf("\nPaís: %s", pais1);
    printf("\nPopulação: %d", populacao1);
    printf("\nÁrea: %.2f km²", area1);
    printf("\nPIB: %.2f", pib1);
    printf("\nNúmero de Pontos Turísticos: %d", pontos_turisticos1);
    printf("\nDensidade Populacional: %.2f hab/km²", densidade_populacional1);
    printf("\nPIB per Capita: %.2f\n", pib_per_capita1);

    // Saída das informações da Carta 2
    printf("\nCarta 2");
    printf("\nPaís: %s", pais2);
    printf("\nPopulação: %d", populacao2);
    printf("\nÁrea: %.2f km²", area2);
    printf("\nPIB: %.2f", pib2);
    printf("\nNúmero de Pontos Turísticos: %d", pontos_turisticos2);
    printf("\nDensidade Populacional: %.2f hab/km²", densidade_populacional2);
    printf("\nPIB per Capita: %.2f\n", pib_per_capita2);

    // COMPARAR ATRIBUTO POPULAÇÃO

    printf("\nComparação de cartas\n");
    printf("\n1 - População");
    printf("\n2 - Área");
    printf("\n3 - PIB");
    printf("\n4 - Número de pontos turísticos");
    printf("\n5 - Densidade Demográfica");
    printf("\n6 - Sair");
    
    printf("\nDigite o número correspondente ao atributo que deseja comparar: ");
    scanf("%d", &opcao);

    printf("\nPaíses: %s e %s", pais1, pais2);

    switch (opcao) {
        case 1:
            printf("\nAtributo escolhido: População");
            printf("\nCarta 1: %d", populacao1);
            printf("\nCarta 2: %d", populacao2);

            if (populacao1 > populacao2) {
                printf("\nCarta (1) venceu!");
            } else if (populacao2 > populacao1) {
                printf("\nCarta (2) venceu!");
            } else {
                printf("Empate!");
            }
            break;
        case 2:
            printf("\nAtributo escolhido: Área");
            printf("\nCarta 1: %.2f", area1);
            printf("\nCarta 2: %.2f", area2);

            if (area1 > area2) {
                printf("\nCarta (1) venceu!");
            } else if (area2 > area1) {
                printf("\nCarta (2) venceu!");
            } else {
                printf("Empate!");
            }
            break;
        case 3:
            printf("\nAtributo escolhido: PIB");
            printf("\nCarta 1: %.2f", pib1);
            printf("\nCarta 2: %.2f", pib2);

            if (pib1 > pib2) {
                printf("\nCarta (1) venceu!");
            } else if (pib2 > pib1) {
                printf("\nCarta (2) venceu!");
            } else {
                printf("Empate!");
            }
            break;
        case 4:
            printf("\nAtributo escolhido: Número de Pontos Turísticos");
            printf("\nCarta 1: %d", pontos_turisticos1);
            printf("\nCarta 2: %d", pontos_turisticos2);

            if (pontos_turisticos1 > pontos_turisticos2) {
                printf("\nCarta (1) venceu!");
            } else if (pontos_turisticos2 > pontos_turisticos1) {
                printf("\nCarta (2) venceu!");
            } else {
                printf("Empate!");
            }
            break;
        case 5:
            printf("\nAtributo escolhido: Densidade Demográfica");
            printf("\nCarta 1: %.2f", densidade_populacional1);
            printf("\nCarta 2: %.2f", densidade_populacional2);

            if (densidade_populacional1 > densidade_populacional2) {
                printf("\nCarta (1) venceu!");
            } else if (densidade_populacional2 > densidade_populacional1) {
                printf("\nCarta (2) venceu!");
            } else {
                printf("Empate!");
            }
            break;
        case 6:
            printf("\nSaindo.");
            break;
        default:
            printf("\nOpção inválida.");
    }

    return 0;
}