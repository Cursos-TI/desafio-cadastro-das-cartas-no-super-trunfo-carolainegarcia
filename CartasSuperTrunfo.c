#include <stdio.h>

int main() {

    // Declaração de variáveis - Carta 1
    char estado1, cod_carta1[4], cidade1[50];
    int populacao1, pontos_tur1;
    float area1, pib1;

    // Entrada - Carta 1
    printf("Super Trunfo - Carta 1\n\n");

    printf("Digite o código da carta: \n");
    scanf("%s", cod_carta1);

    printf("Digite o nome do estado: \n");
    scanf(" %c", &estado1);

    printf("Digite o nome da cidade: \n");
    scanf("%s", cidade1);

    printf("Digite a população: \n");
    scanf("%d", &populacao1);

    printf("Digite a área (em km²): \n");
    scanf("%f", &area1);

    printf("Digite o PIB: \n");
    scanf("%f", &pib1);

    printf("Digite a quantidade de pontos turísticos: \n");
    scanf("%d", &pontos_tur1);

    // Saída - Carta 1
    printf("\nCarta cadastrada com sucesso! Confira os dados abaixo:\n\n");
    printf("Código da carta: %s\n", cod_carta1);
    printf("Estado: %c\n", estado1);
    printf("Cidade: %s\n", cidade1);
    printf("População: %d\n", populacao1);
    printf("Área (em km²): %f\n", area1);
    printf("PIB: %f\n", pib1);
    printf("Pontos turísticos: %d\n\n", pontos_tur1);



    // Declaração de variáveis - Carta 2
    char estado2, cod_carta2[4], cidade2[50];
    int populacao2, pontos_tur2;
    float area2, pib2;

    // Entrada - Carta 2
    printf("\nSuper Trunfo - Carta 2\n\n");

    printf("Digite o código da carta: \n");
    scanf("%s", cod_carta2);

    printf("Digite o nome do estado: \n");
    scanf(" %c", &estado2);

    printf("Digite o nome da cidade: \n");
    scanf("%s", cidade2);

    printf("Digite a população: \n");
    scanf("%d", &populacao2);

    printf("Digite a área (em km²): \n");
    scanf("%f", &area2);

    printf("Digite o PIB: \n");
    scanf("%f", &pib2);

    printf("Digite a quantidade de pontos turísticos: \n");
    scanf("%d", &pontos_tur2);

    printf("\n\nCarta cadastrada com sucesso! Confira os dados abaixo:\n\n");
    printf("Código da carta: %s\n", cod_carta2);
    printf("Estado: %c\n", estado2);
    printf("Cidade: %s\n", cidade2);
    printf("População: %d\n", populacao2);
    printf("Área (em km²): %f\n", area2);
    printf("PIB: %f\n", pib2);
    printf("Pontos turísticos: %d\n", pontos_tur2);

    return 0;
}