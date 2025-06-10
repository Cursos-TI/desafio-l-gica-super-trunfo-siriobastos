#include <stdio.h> // Inclui a biblioteca padrão de entrada e saída
#include <string.h> // Inclui a biblioteca para manipulação de strings

int main() {
    // --- Declaração das variáveis para a Carta 1 ---
    char estado1;                  // Estado (A-H)
    char codigoCarta1[4];          // Código da Carta (Ex: A01) - 3 caracteres + 1 para o nulo
    char nomeCidade1[50];          // Nome da Cidade (tamanho máximo de 49 caracteres + 1 para o nulo)
    int populacao1;                // População
    float area1;                   // Área em km²
    float pib1;                    // PIB em bilhões de reais
    int pontosTuristicos1;         // Número de Pontos Turísticos
    float densidadePopulacional1;  // Densidade Populacional (População / Área)
    float pibPerCapita1;           // PIB per capita (PIB / População)

    // --- Declaração das variáveis para a Carta 2 ---
    char estado2;
    char codigoCarta2[4];
    char nomeCidade2[50];
    int populacao2;
    float area2;
    float pib2;
    int pontosTuristicos2;
    float densidadePopulacional2;
    float pibPerCapita2;

    // --- Coleta de dados para a Carta 1 ---
    printf("--- Insira os dados da Carta 1 ---\n");

    printf("Estado (A-H): ");
    scanf(" %c", &estado1); // O espaço antes de %c é para consumir qualquer caractere de nova linha pendente

    printf("Codigo da Carta (Ex: A01): ");
    scanf("%s", codigoCarta1);

    printf("Nome da Cidade: ");
    scanf(" %49[^\n]", nomeCidade1); // Lê até 49 caracteres ou até encontrar uma nova linha

    printf("Populacao: ");
    scanf("%d", &populacao1);

    printf("Area (em km²): ");
    scanf("%f", &area1);

    printf("PIB (em bilhoes de reais): ");
    scanf("%f", &pib1);

    printf("Numero de Pontos Turisticos: ");
    scanf("%d", &pontosTuristicos1);

    printf("\n"); // Adiciona uma linha em branco para melhor legibilidade

    // --- Coleta de dados para a Carta 2 ---
    printf("--- Insira os dados da Carta 2 ---\n");

    printf("Estado (A-H): ");
    scanf(" %c", &estado2);

    printf("Codigo da Carta (Ex: A01): ");
    scanf("%s", codigoCarta2);

    printf("Nome da Cidade: ");
    scanf(" %49[^\n]", nomeCidade2);

    printf("Populacao: ");
    scanf("%d", &populacao2);

    printf("Area (em km²): ");
    scanf("%f", &area2);

    printf("PIB (em bilhoes de reais): ");
    scanf("%f", &pib2);

    printf("Numero de Pontos Turisticos: ");
    scanf("%d", &pontosTuristicos2);

    // --- Cálculos para a Carta 1 ---
    // Verifica se a área é maior que zero para evitar divisão por zero
    if (area1 > 0) {
        densidadePopulacional1 = (float)populacao1 / area1;
    } else {
        densidadePopulacional1 = 0.0; // Define como zero se a área for inválida
    }
    // Verifica se a população é maior que zero para evitar divisão por zero
    if (populacao1 > 0) {
        pibPerCapita1 = pib1 / populacao1;
    } else {
        pibPerCapita1 = 0.0; // Define como zero se a população for inválida
    }

    // --- Cálculos para a Carta 2 ---
    if (area2 > 0) {
        densidadePopulacional2 = (float)populacao2 / area2;
    } else {
        densidadePopulacional2 = 0.0;
    }
    if (populacao2 > 0) {
        pibPerCapita2 = pib2 / populacao2;
    } else {
        pibPerCapita2 = 0.0;
    }

    // --- Exibição dos dados da Carta 1 ---
    printf("\n--- Informacoes da Carta 1 ---\n");
    printf("Estado: %c\n", estado1);
    printf("Codigo: %s\n", codigoCarta1);
    printf("Nome da Cidade: %s\n", nomeCidade1);
    printf("Populacao: %d\n", populacao1);
    printf("Area: %.2f km²\n", area1);
    printf("PIB: %.2f bilhoes de reais\n", pib1);
    printf("Numero de Pontos Turisticos: %d\n", pontosTuristicos1);
    printf("Densidade Populacional: %.2f hab/km²\n", densidadePopulacional1);
    printf("PIB per Capita: %.2f bilhoes de reais/hab\n", pibPerCapita1);

    // --- Exibição dos dados da Carta 2 ---
    printf("\n--- Informacoes da Carta 2 ---\n");
    printf("Estado: %c\n", estado2);
    printf("Codigo: %s\n", codigoCarta2);
    printf("Nome da Cidade: %s\n", nomeCidade2);
    printf("Populacao: %d\n", populacao2);
    printf("Area: %.2f km²\n", area2);
    printf("PIB: %.2f bilhoes de reais\n", pib2);
    printf("Numero de Pontos Turisticos: %d\n", pontosTuristicos2);
    printf("Densidade Populacional: %.2f hab/km²\n", densidadePopulacional2);
    printf("PIB per Capita: %.2f bilhoes de reais/hab\n", pibPerCapita2);

    // --- Lógica de comparação ---
    // Escolha o atributo para comparação aqui.
    // Atributos disponíveis: populacao, area, pib, densidadePopulacional, pibPerCapita
    char atributoComparacao[30] = "Populacao"; // Mude esta string para o atributo desejado

    printf("\n--- Comparacao de cartas (Atributo: %s) ---\n", atributoComparacao);

    if (strcmp(atributoComparacao, "Populacao") == 0) {
        printf("Carta 1 - %s (%c%c): %d\n", nomeCidade1, estado1, codigoCarta1[0], populacao1);
        printf("Carta 2 - %s (%c%c): %d\n", nomeCidade2, estado2, codigoCarta2[0], populacao2);
        if (populacao1 > populacao2) {
            printf("Resultado: Carta 1 (%s) venceu!\n", nomeCidade1);
        } else if (populacao2 > populacao1) {
            printf("Resultado: Carta 2 (%s) venceu!\n", nomeCidade2);
        } else {
            printf("Resultado: Empate!\n");
        }
    } else if (strcmp(atributoComparacao, "Area") == 0) {
        printf("Carta 1 - %s (%c%c): %.2f km²\n", nomeCidade1, estado1, codigoCarta1[0], area1);
        printf("Carta 2 - %s (%c%c): %.2f km²\n", nomeCidade2, estado2, codigoCarta2[0], area2);
        if (area1 > area2) {
            printf("Resultado: Carta 1 (%s) venceu!\n", nomeCidade1);
        } else if (area2 > area1) {
            printf("Resultado: Carta 2 (%s) venceu!\n", nomeCidade2);
        } else {
            printf("Resultado: Empate!\n");
        }
    } else if (strcmp(atributoComparacao, "PIB") == 0) {
        printf("Carta 1 - %s (%c%c): %.2f bilhoes de reais\n", nomeCidade1, estado1, codigoCarta1[0], pib1);
        printf("Carta 2 - %s (%c%c): %.2f bilhoes de reais\n", nomeCidade2, estado2, codigoCarta2[0], pib2);
        if (pib1 > pib2) {
            printf("Resultado: Carta 1 (%s) venceu!\n", nomeCidade1);
        } else if (pib2 > pib1) {
            printf("Resultado: Carta 2 (%s) venceu!\n", nomeCidade2);
        } else {
            printf("Resultado: Empate!\n");
        }
    } else if (strcmp(atributoComparacao, "Densidade Populacional") == 0) {
        printf("Carta 1 - %s (%c%c): %.2f hab/km²\n", nomeCidade1, estado1, codigoCarta1[0], densidadePopulacional1);
        printf("Carta 2 - %s (%c%c): %.2f hab/km²\n", nomeCidade2, estado2, codigoCarta2[0], densidadePopulacional2);
        // Para densidade populacional, a carta com o MENOR valor vence
        if (densidadePopulacional1 < densidadePopulacional2) {
            printf("Resultado: Carta 1 (%s) venceu!\n", nomeCidade1);
        } else if (densidadePopulacional2 < densidadePopulacional1) {
            printf("Resultado: Carta 2 (%s) venceu!\n", nomeCidade2);
        } else {
            printf("Resultado: Empate!\n");
        }
    } else if (strcmp(atributoComparacao, "PIB per Capita") == 0) {
        printf("Carta 1 - %s (%c%c): %.2f bilhoes de reais/hab\n", nomeCidade1, estado1, codigoCarta1[0], pibPerCapita1);
        printf("Carta 2 - %s (%c%c): %.2f bilhoes de reais/hab\n", nomeCidade2, estado2, codigoCarta2[0], pibPerCapita2);
        if (pibPerCapita1 > pibPerCapita2) {
            printf("Resultado: Carta 1 (%s) venceu!\n", nomeCidade1);
        } else if (pibPerCapita2 > pibPerCapita1) {
            printf("Resultado: Carta 2 (%s) venceu!\n", nomeCidade2);
        } else {
            printf("Resultado: Empate!\n");
        }
    } else {
        printf("Atributo de comparacao invalido.\n");
    }

    return 0; // Indica que o programa foi executado com sucesso
}