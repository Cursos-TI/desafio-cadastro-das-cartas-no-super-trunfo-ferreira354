#include <stdio.h>
#include <string.h>

int main() {
     /*
    Desenvolver o jogo Super_Trunfo que permita ao usúario inserir os dados 
    de duas cartas Super_trunfo. para cada carta, o usúario deverá fornecer
    as seguintes informações: Estado, Código da carta, Nome da Cidade, População,
    Área (em Km²), PIB e Número de pontos turísticos.
    */

    //Dados da carta 1
    char estado1;
    char codigo1 [30];
    char cidade1 [50];
    int populacao1;
    float area1;
    float pib1;
    int turistico1;
    float densidade1 = 0.0f;
    float pib_percapita1;

    //Carta 1
    printf("Digite os dados da 1ª carta:\n");
    printf("Estado (A-H): "); scanf(" %c", &estado1);
    printf("Código: "); scanf(" %s", codigo1);
    printf("Cidade: "); scanf(" %s", cidade1);
    printf("População: "); scanf("%d", &populacao1);
    printf("Área (km²): "); scanf("%f", &area1);
    printf("PIB (em bilhões): "); scanf("%f", &pib1);
    printf("Pontos Turísticos: "); scanf("%d", &turistico1);

    densidade1 = populacao1 / area1;
    pib_percapita1 = pib1 / populacao1;

    char estado2;
    char codigo2 [30];
    char cidade2 [50];
    int populacao2;
    float area2;
    float pib2;
    int turistico2;
    float densidade2 = 0.0f;
    float pib_percapita2;

    //Carta 2
    printf("\nDigite os dados da 2ª carta:\n");
    printf("Estado (A-H): "); scanf(" %c", &estado2);
    printf("Código: "); scanf(" %s", codigo2);
    printf("Cidade: "); scanf(" %s", cidade2);
    printf("População: "); scanf("%d", &populacao2);
    printf("Área (km²): "); scanf("%f", &area2);
    printf("PIB (em bilhões): "); scanf("%f", &pib2);
    printf("Pontos Turísticos: "); scanf("%d", &turistico2);


    densidade2 = populacao2 / area2;
    pib_percapita2 = pib2 / populacao2;

    // ===== Menu Interativo =====
    int opcao;
    printf("\nEscolha o atributo para comparar:\n");
    printf("1 - População\n");
    printf("2 - Área\n");
    printf("3 - PIB\n");
    printf("4 - Pontos Turísticos\n");
    printf("5 - Densidade Demográfica (menor vence)\n");
    printf("Opção: ");
    scanf("%d", &opcao);

    // ===== Comparação usando switch =====
    switch(opcao) {
        case 1: // População
            printf("\nComparando População:\n");
            printf("%s: %d\n", cidade1, populacao1);
            printf("%s: %d\n", cidade2, populacao2);
            if (populacao1 > populacao2) {
                printf("Vencedora: %s\n", cidade1);
            } else if (populacao2 > populacao1) {
                printf("Vencedora: %s\n", cidade2);
            } else {
                printf("Empate!\n");
            }
            break;

        case 2: // Área
            printf("\nComparando Área:\n");
            printf("%s: %.2f km²\n", cidade1, area1);
            printf("%s: %.2f km²\n", cidade2, area2);
            if (area1 > area2) {
                printf("Vencedora: %s\n", cidade1);
            } else if (area2 > area1) {
                printf("Vencedora: %s\n", cidade2);
            } else {
                printf("Empate!\n");
            }
            break;

        case 3: // PIB
            printf("\nComparando PIB:\n");
            printf("%s: %.2f bi\n", cidade1, pib1);
            printf("%s: %.2f bi\n", cidade2, pib2);
            if (pib1 > pib2) {
                printf("Vencedora: %s\n", cidade1);
            } else if (pib2 > pib1) {
                printf("Vencedora: %s\n", cidade2);
            } else {
                printf("Empate!\n");
            }
            break;

        case 4: // Pontos turísticos
            printf("\nComparando Pontos Turísticos:\n");
            printf("%s: %d\n", cidade1, turistico1);
            printf("%s: %d\n", cidade2, turistico2);
            if (turistico1 > turistico2) {
                printf("Vencedora: %s\n", cidade1);
            } else if (turistico2 > turistico1) {
                printf("Vencedora: %s\n", cidade2);
            } else {
                printf("Empate!\n");
            }
            break;

        case 5: // Densidade Demográfica (menor vence)
            printf("\nComparando Densidade Demográfica:\n");
            printf("%s: %.2f hab/km²\n", cidade1, densidade1);
            printf("%s: %.2f hab/km²\n", cidade2, densidade2);
            if (densidade1 < densidade2) {
                printf("Vencedora: %s (menor densidade)\n", cidade1);
            } else if (densidade2 < densidade1) {
                printf("Vencedora: %s (menor densidade)\n", cidade2);
            } else {
                printf("Empate!\n");
            }
            break;

        default:
            printf("\nOpção inválida!\n");
            break;
    }

    return 0;
}
