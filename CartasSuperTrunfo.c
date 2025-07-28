#include <stdio.h>

int main(){

    /*
    Desenvolver o jogo Super_Trunfo que permita ao usúario inserir os dados 
    de duas cartas Super_trunfo. para cada carta, o usúario deverá fornecer
    as seguintes informações: Estado, Código da carta, Nome da Cidade, População
    Área (em Km²), PIB e Número de pontos turísticos.
    */

    //Dados da carta 1
    char estado1 [10];
    char codigo1 [30];
    char cidade1 [50];
    int populacao1;
    float area1;
    float pib1;
    int turistico1;
    float densidade1;
    float pib_percapita1;
  
    printf("Digite os dados da 1º carta: \n");

    //Estado: Uma letra de 'A' a 'H' (representando um dos oito estados. tipo char)
    printf("Digite a sigla do seu estado: ");
    scanf("%s", &estado1);

    /* Código da carta: A letra do estado seguida de um núemro de 01 a 04 
    (ex. A01, B03). tipo char [] (uma array de caracteres string) */
    printf("Digite seu códgo: ");
    scanf("%s", &codigo1);

    //Nome da cidade: O nome da cidade tipo: char [] (string)
    printf("Digite o nome da sua cidade: ");
    scanf("%s", &cidade1);

    //População: O número de habitantes  Tipo: int
    printf("Digite o tatal de habitantes: ");
    scanf("%d", &populacao1);

    //Área (em Km²): A área da cidade em quilomêtros quadrados. tipo: float
    printf("Qual a area da sua cidade: ");
    scanf("%f", &area1);

    //PIB: O produto interno bruto da cidade. tipo: float
    printf("Qual o PIB da sua cidade: ");
    scanf("%f", &pib1);

    //Pontos Turisticos: A quantidade de pontos turisticos na cidade. tipo: int
    printf("Digite a quantidade de pontos turisticos da sua cidade: ");
    scanf("%d", &turistico1);

    //Formula para calcular a densidade populacional.
    densidade1 = populacao1 / area1;

    //Formula para calcular a PIB por percapita.
    pib_percapita1 = pib1 / populacao1;

    //Pulando uma linha para melhorar a visualização
    printf("\n");

    printf("CARTA 1:\n");
    printf("Estado: %s\n", estado1);
    printf("Código: %s\n", codigo1);
    printf("Nome da Cidade: %s\n", cidade1);
    printf("População: %d\n", populacao1);
    printf("Área: %.2f Km²\n", area1);
    printf("PIB: %.2f bilhões de reais\n", pib1);
    printf("Pontos Turísticos: %d\n", turistico1);
    printf("Densidade Populacional: %.2f\n", densidade1);
    printf("PIB per Capita: %.2f", pib_percapita1);

    //Pulando uma linha para melhorar a visualização
    printf("\n");

    //Dados da carta 2
    char estado2 [10];
    char codigo2 [30];
    char cidade2 [50];
    int populacao2;
    float area2;
    float pib2;
    int turistico2;
    float densidade2;
    float pib_percapita2;

    printf("\n");

    printf("Digite os dados da 2ª carta: \n");

    //Estado: Uma letra de 'A' a 'H' (representando um dos oito estados. tipo char)
    printf("Digite a sigla do seu estado: ");
    scanf("%s", &estado2);

    /* Código da carta: A letra do estado seguida de um núemro de 01 a 04 
    (ex. A01, B03). tipo char [] (uma array de caracteres string) */
    printf("Digite seu códgo: ");
    scanf("%s", &codigo2);

    //Nome da cidade: O nome da cidade tipo: char [] (string)
    printf("Digite o nome da sua cidade: ");
    scanf("%s", &cidade2);

    //População: O número de habitantes  Tipo: int
    printf("Digite o tatal de habitantes: ");
    scanf("%d", &populacao2);

    //Área (em Km²): A área da cidade em quilomêtros quadrados. tipo: float
    printf("Qual a area da sua cidade: ");
    scanf("%f", &area2);

    //PIB: O produto interno bruto da cidade. tipo: float
    printf("Qual o PIB da sua cidade: ");
    scanf("%f", &pib2);

    //Pontos Turisticos: A quantidade de pontos turisticos na cidade. tipo: int
    printf("Digite a quantidade de pontos turisticos da sua cidade: ");
    scanf("%d", &turistico2);

        //Formula para calcular a densidade populacional.
    densidade2 = populacao2 / area2;

    //Formula para calcular a PIB por percapita.
    pib_percapita2 = pib2 / populacao2;

    printf("\n");

    printf("CARTA 2:\n");
    printf("Estado: %s\n", estado2);
    printf("Código: %s\n", codigo2);
    printf("Nome da Cidade: %s\n", cidade2);
    printf("População: %d\n", populacao2);
    printf("Área: %.2f Km²\n", area2);
    printf("PIB: %.2f bilhões de reais\n", pib2);
    printf("Pontos Turísticos: %d", turistico2);
    printf("Densidade Populacional: %.2f\n", densidade2);
    printf("PIB per Capita: %.2f", pib_percapita2);
}