#include <stdio.h>

// Definição da estrutura para armazenar os dados de uma carta
struct Carta {
    char estado[50];
    char Codigo[5];
    char Cidade[50];
    int Populacao;
    float Area;
    float PIB;
    int pontos_turisticos;
    float densidade_populacional;
    float pib_per_capita;
};

int main() {
    struct Carta cartas[2];

    // Entrada de dados
    for (int i = 0; i < 2; i++) {
        printf("\n--- Carta %d ---\n", i + 1);

        printf("Nome do Estado: ");
        scanf(" %[^\n]", cartas[i].estado);  

        printf("Código: ");
        scanf("%s", cartas[i].Codigo);

        printf("Cidade: ");
        scanf(" %[^\n]", cartas[i].Cidade);  

        printf("População: ");
        scanf("%d", &cartas[i].Populacao);

        printf("Área (km²): ");
        scanf("%f", &cartas[i].Area);

        printf("PIB (bilhões): ");
        scanf("%f", &cartas[i].PIB);

        printf("Pontos Turísticos: ");
        scanf("%d", &cartas[i].pontos_turisticos);

        // Cálculos
        cartas[i].densidade_populacional = cartas[i].Populacao / cartas[i].Area;
        cartas[i].pib_per_capita = cartas[i].PIB / cartas[i].Populacao;
    }

    // Exibição dos resultados
    printf("\n===== INFORMAÇÕES DAS CARTAS =====\n");
    for (int i = 0; i < 2; i++) {
        printf("\n--- Carta %d ---\n", i + 1);
        printf("Nome do Estado: %s\n", cartas[i].estado);
        printf("Código: %s\n", cartas[i].Codigo);
        printf("Cidade: %s\n", cartas[i].Cidade);
        printf("População: %d\n", cartas[i].Populacao);
        printf("Área: %.2f km²\n", cartas[i].Area);
        printf("PIB: %.2f bilhões\n", cartas[i].PIB);
        printf("Pontos Turísticos: %d\n", cartas[i].pontos_turisticos);
        printf("Densidade Populacional: %.2f hab/km²\n", cartas[i].densidade_populacional);
        printf("PIB per Capita: %.6f bilhões/hab\n", cartas[i].pib_per_capita);
    }

    return 0;
}