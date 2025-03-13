#include <stdio.h>


struct Carta {
    char estado[50];
    char Codigo[5];
    char Cidade[10];
    int População;
    float Area;
    float PIB;
};

int main() {
    struct Carta cartas[2];

    
    for (int i = 0; i < 2; i++) {
        printf("\n--- Carta %d ---\n", i + 1);

        printf("Nome do Estado: \n");
        scanf(" %[^\n]s", cartas[i].estado);  

        printf("O Codigo: \n");
        scanf("%s", cartas[i].Codigo);

        printf("A cidade é: \n");
        scanf(" %[^\n]s", cartas[i].Cidade);  

        printf("A População é: \n");
        scanf("%d", &cartas[i].População);

        printf("Tamanho da Área: \n");
        scanf("%f", &cartas[i].Area);

        printf("O PIB? \n");
        scanf("%f", &cartas[i].PIB);
    }

    // Exibindo os dados das cartas
    printf("\n===== INFORMAÇÕES DAS CARTAS =====\n");
    for (int i = 0; i < 2; i++) {
        printf("\n--- Carta %d ---\n", i + 1);
        printf("Nome do Estado: %s\n", cartas[i].estado);
        printf("O Codigo: %s\n", cartas[i].Codigo);
        printf("A Cidade: %s\n", cartas[i].Cidade);
        printf("A População é: %d\n", cartas[i].População);
        printf("A Área é: %.2f km²\n", cartas[i].Area);
        printf("O PIB é: %.2f bilhões\n", cartas[i].PIB);
    }

    return 0;
}