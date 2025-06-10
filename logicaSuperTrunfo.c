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


    // --- Declaração e inicialização das variáveis para a Carta 1 (Dados pré-definidos) ---
    // Para simplificar e focar no menu e comparação, vamos usar dados fixos para as cartas.
    // Em um cenário real, você reutilizaria a parte de entrada de dados do desafio anterior.
    char estado1 = 'S';
    char codigoCarta1[4] = "P01";
    char nomeCidade1[50] = "Sao Paulo";
    int populacao1 = 12325000;
    float area1 = 1521.11;
    float pib1 = 699.28; // em bilhões de reais
    int pontosTuristicos1 = 50;
    float densidadePopulacional1;
    float pibPerCapita1;

    // --- Declaração e inicialização das variáveis para a Carta 2 (Dados pré-definidos) ---
    char estado2 = 'R';
    char codigoCarta2[4] = "J02";
    char nomeCidade2[50] = "Rio de Janeiro";
    int populacao2 = 6748000;
    float area2 = 1200.25;
    float pib2 = 300.50; // em bilhões de reais
    int pontosTuristicos2 = 30;
    float densidadePopulacional2;
    float pibPerCapita2;

    // --- Cálculos de Densidade Populacional e PIB per Capita para Carta 1 ---
    if (area1 > 0) {
        densidadePopulacional1 = (float)populacao1 / area1;
    } else {
        densidadePopulacional1 = 0.0;
    }
    if (populacao1 > 0) {
        pibPerCapita1 = pib1 / populacao1;
    } else {
        pibPerCapita1 = 0.0;
    }

    // --- Cálculos de Densidade Populacional e PIB per Capita para Carta 2 ---
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

    // --- Exibição das Informações das Cartas ---
    printf("--- Cartas Disponiveis ---\n");
    printf("\nCarta 1: %s\n", nomeCidade1);
    printf("  Estado: %c\n", estado1);
    printf("  Codigo: %s\n", codigoCarta1);
    printf("  Populacao: %d\n", populacao1);
    printf("  Area: %.2f km²\n", area1);
    printf("  PIB: %.2f bilhoes de reais\n", pib1);
    printf("  Pontos Turisticos: %d\n", pontosTuristicos1);
    printf("  Densidade Populacional: %.2f hab/km²\n", densidadePopulacional1);
    printf("  PIB per Capita: %.2f bilhoes de reais/hab\n", pibPerCapita1);

    printf("\nCarta 2: %s\n", nomeCidade2);
    printf("  Estado: %c\n", estado2);
    printf("  Codigo: %s\n", codigoCarta2);
    printf("  Populacao: %d\n", populacao2);
    printf("  Area: %.2f km²\n", area2);
    printf("  PIB: %.2f bilhoes de reais\n", pib2);
    printf("  Pontos Turisticos: %d\n", pontosTuristicos2);
    printf("  Densidade Populacional: %.2f hab/km²\n", densidadePopulacional2);
    printf("  PIB per Capita: %.2f bilhoes de reais/hab\n", pibPerCapita2);

    // --- Menu Interativo ---
    int escolhaAtributo;
    printf("\n--- Escolha o atributo para comparacao ---\n");
    printf("1. Populacao\n");
    printf("2. Area\n");
    printf("3. PIB\n");
    printf("4. Numero de Pontos Turisticos\n");
    printf("5. Densidade Populacional\n");
    printf("6. PIB per Capita\n");
    printf("Digite o numero da sua escolha: ");
    scanf("%d", &escolhaAtributo);

    // --- Variáveis para armazenar os valores do atributo escolhido ---
    float valorAtributo1 = 0.0;
    float valorAtributo2 = 0.0;
    char nomeAtributo[40]; // Para armazenar o nome do atributo para exibição
    char vencedor[50];     // Para armazenar o nome da cidade vencedora
    int empate = 0;        // Flag para indicar empate

    // --- Lógica de Comparação usando switch e if-else aninhados ---
    switch (escolhaAtributo) {
        case 1: // Populacao
            strcpy(nomeAtributo, "Populacao");
            valorAtributo1 = (float)populacao1;
            valorAtributo2 = (float)populacao2;
            if (populacao1 > populacao2) {
                strcpy(vencedor, nomeCidade1);
            } else if (populacao2 > populacao1) {
                strcpy(vencedor, nomeCidade2);
            } else {
                empate = 1;
            }
            break;

        case 2: // Area
            strcpy(nomeAtributo, "Area");
            valorAtributo1 = area1;
            valorAtributo2 = area2;
            if (area1 > area2) {
                strcpy(vencedor, nomeCidade1);
            } else if (area2 > area1) {
                strcpy(vencedor, nomeCidade2);
            } else {
                empate = 1;
            }
            break;

        case 3: // PIB
            strcpy(nomeAtributo, "PIB");
            valorAtributo1 = pib1;
            valorAtributo2 = pib2;
            if (pib1 > pib2) {
                strcpy(vencedor, nomeCidade1);
            } else if (pib2 > pib1) {
                strcpy(vencedor, nomeCidade2);
            } else {
                empate = 1;
            }
            break;

        case 4: // Numero de Pontos Turisticos
            strcpy(nomeAtributo, "Numero de Pontos Turisticos");
            valorAtributo1 = (float)pontosTuristicos1;
            valorAtributo2 = (float)pontosTuristicos2;
            if (pontosTuristicos1 > pontosTuristicos2) {
                strcpy(vencedor, nomeCidade1);
            } else if (pontosTuristicos2 > pontosTuristicos1) {
                strcpy(vencedor, nomeCidade2);
            } else {
                empate = 1;
            }
            break;

        case 5: // Densidade Populacional (menor valor vence)
            strcpy(nomeAtributo, "Densidade Populacional");
            valorAtributo1 = densidadePopulacional1;
            valorAtributo2 = densidadePopulacional2;
            // Regra especial: menor valor vence
            if (densidadePopulacional1 < densidadePopulacional2) {
                strcpy(vencedor, nomeCidade1);
            } else if (densidadePopulacional2 < densidadePopulacional1) {
                strcpy(vencedor, nomeCidade2);
            } else {
                empate = 1;
            }
            break;

        case 6: // PIB per Capita
            strcpy(nomeAtributo, "PIB per Capita");
            valorAtributo1 = pibPerCapita1;
            valorAtributo2 = pibPerCapita2;
            if (pibPerCapita1 > pibPerCapita2) {
                strcpy(vencedor, nomeCidade1);
            } else if (pibPerCapita2 > pibPerCapita1) {
                strcpy(vencedor, nomeCidade2);
            } else {
                empate = 1;
            }
            break;

        default:
            printf("\nOpcao invalida! Por favor, escolha um numero de 1 a 6.\n");
            return 1; // Sai do programa com erro
    }

    // --- Exibição do Resultado da Comparação ---
    printf("\n--- Resultado da Comparacao ---\n");
    printf("Atributo de Comparacao: %s\n", nomeAtributo);
    printf("Carta 1 - %s: %.2f\n", nomeCidade1, valorAtributo1);
    printf("Carta 2 - %s: %.2f\n", nomeCidade2, valorAtributo2);

    if (empate) {
        printf("Resultado: Empate!\n");
    } else {
        printf("Resultado: %s (%s) venceu!\n", vencedor, (strcmp(vencedor, nomeCidade1) == 0) ? "Carta 1" : "Carta 2");
    }

    // Função para exibir o menu de atributos e retornar a escolha do usuário
int exibirMenuAtributos(int atributoJaEscolhido) {
    int escolha;
    printf("\n--- Escolha um atributo para comparacao ---\n");
    printf("1. Populacao\n");
    printf("2. Area\n");
    printf("3. PIB\n");
    printf("4. Numero de Pontos Turisticos\n");
    printf("5. Densidade Populacional (menor valor vence)\n");
    printf("6. PIB per Capita\n");

    // Lógica para desabilitar a opção já escolhida (dinâmica)
    if (atributoJaEscolhido != 0) {
        printf("Obs: A opcao %d ja foi selecionada e nao pode ser escolhida novamente.\n", atributoJaEscolhido);
    }

    printf("Digite o numero da sua escolha: ");
    scanf("%d", &escolha);

    // Validação de entrada e atributo já escolhido
    if (escolha < 1 || escolha > 6 || escolha == atributoJaEscolhido) {
        printf("Opcao invalida ou atributo ja selecionado. Por favor, tente novamente.\n");
        return -1; // Retorna -1 para indicar uma escolha inválida
    }
    return escolha;
}

int main() {
    // --- Declaração e inicialização das variáveis para a Carta 1 (Dados pré-definidos) ---
    char nomeCidade1[50] = "Sao Paulo";
    int populacao1 = 12325000;
    float area1 = 1521.11;
    float pib1 = 699.28; // em bilhões de reais
    int pontosTuristicos1 = 50;
    float densidadePopulacional1;
    float pibPerCapita1;

    // --- Declaração e inicialização das variáveis para a Carta 2 (Dados pré-definidos) ---
    char nomeCidade2[50] = "Rio de Janeiro";
    int populacao2 = 6748000;
    float area2 = 1200.25;
    float pib2 = 300.50; // em bilhões de reais
    int pontosTuristicos2 = 30;
    float densidadePopulacional2;
    float pibPerCapita2;

    // --- Cálculos de Densidade Populacional e PIB per Capita para Carta 1 ---
    densidadePopulacional1 = (area1 > 0) ? ((float)populacao1 / area1) : 0.0;
    pibPerCapita1 = (populacao1 > 0) ? (pib1 / populacao1) : 0.0;

    // --- Cálculos de Densidade Populacional e PIB per Capita para Carta 2 ---
    densidadePopulacional2 = (area2 > 0) ? ((float)populacao2 / area2) : 0.0;
    pibPerCapita2 = (populacao2 > 0) ? (pib2 / populacao2) : 0.0;

    // --- Exibição das Informações das Cartas ---
    printf("--- Cartas Disponiveis ---\n");
    printf("\nCarta 1: %s\n", nomeCidade1);
    printf("  Populacao: %d\n", populacao1);
    printf("  Area: %.2f km²\n", area1);
    printf("  PIB: %.2f bilhoes de reais\n", pib1);
    printf("  Pontos Turisticos: %d\n", pontosTuristicos1);
    printf("  Densidade Populacional: %.2f hab/km²\n", densidadePopulacional1);
    printf("  PIB per Capita: %.2f bilhoes de reais/hab\n", pibPerCapita1);

    printf("\nCarta 2: %s\n", nomeCidade2);
    printf("  Populacao: %d\n", populacao2);
    printf("  Area: %.2f km²\n", area2);
    printf("  PIB: %.2f bilhoes de reais\n", pib2);
    printf("  Pontos Turisticos: %d\n", pontosTuristicos2);
    printf("  Densidade Populacional: %.2f hab/km²\n", densidadePopulacional2);
    printf("  PIB per Capita: %.2f bilhoes de reais/hab\n", pibPerCapita2);

    // --- Escolha do Primeiro Atributo ---
    int escolhaAtributo1 = -1;
    while (escolhaAtributo1 == -1) { // Loop para garantir uma escolha válida
        escolhaAtributo1 = exibirMenuAtributos(0); // 0 indica que nenhum atributo foi escolhido ainda
    }

    // --- Escolha do Segundo Atributo ---
    int escolhaAtributo2 = -1;
    while (escolhaAtributo2 == -1) { // Loop para garantir uma escolha válida e diferente da primeira
        escolhaAtributo2 = exibirMenuAtributos(escolhaAtributo1); // Passa o primeiro atributo escolhido
    }

    // --- Variáveis para armazenar os nomes e valores dos atributos escolhidos ---
    char nomeAtributo1[40], nomeAtributo2[40];
    float valorAtributo1_C1, valorAtributo2_C1; // Valores do atributo 1 e 2 para a Carta 1
    float valorAtributo1_C2, valorAtributo2_C2; // Valores do atributo 1 e 2 para a Carta 2
    int regraInvertida1 = 0; // Flag para regra invertida do atributo 1 (densidade)
    int regraInvertida2 = 0; // Flag para regra invertida do atributo 2 (densidade)

    // --- Processa o Primeiro Atributo Escolhido ---
    switch (escolhaAtributo1) {
        case 1: strcpy(nomeAtributo1, "Populacao"); valorAtributo1_C1 = (float)populacao1; valorAtributo1_C2 = (float)populacao2; break;
        case 2: strcpy(nomeAtributo1, "Area"); valorAtributo1_C1 = area1; valorAtributo1_C2 = area2; break;
        case 3: strcpy(nomeAtributo1, "PIB"); valorAtributo1_C1 = pib1; valorAtributo1_C2 = pib2; break;
        case 4: strcpy(nomeAtributo1, "Numero de Pontos Turisticos"); valorAtributo1_C1 = (float)pontosTuristicos1; valorAtributo1_C2 = (float)pontosTuristicos2; break;
        case 5: strcpy(nomeAtributo1, "Densidade Populacional"); valorAtributo1_C1 = densidadePopulacional1; valorAtributo1_C2 = densidadePopulacional2; regraInvertida1 = 1; break;
        case 6: strcpy(nomeAtributo1, "PIB per Capita"); valorAtributo1_C1 = pibPerCapita1; valorAtributo1_C2 = pibPerCapita2; break;
        default: break; // Não deveria acontecer devido à validação
    }

    // --- Processa o Segundo Atributo Escolhido ---
    switch (escolhaAtributo2) {
        case 1: strcpy(nomeAtributo2, "Populacao"); valorAtributo2_C1 = (float)populacao1; valorAtributo2_C2 = (float)populacao2; break;
        case 2: strcpy(nomeAtributo2, "Area"); valorAtributo2_C1 = area1; valorAtributo2_C2 = area2; break;
        case 3: strcpy(nomeAtributo2, "PIB"); valorAtributo2_C1 = pib1; valorAtributo2_C2 = pib2; break;
        case 4: strcpy(nomeAtributo2, "Numero de Pontos Turisticos"); valorAtributo2_C1 = (float)pontosTuristicos1; valorAtributo2_C2 = (float)pontosTuristicos2; break;
        case 5: strcpy(nomeAtributo2, "Densidade Populacional"); valorAtributo2_C1 = densidadePopulacional1; valorAtributo2_C2 = densidadePopulacional2; regraInvertida2 = 1; break;
        case 6: strcpy(nomeAtributo2, "PIB per Capita"); valorAtributo2_C1 = pibPerCapita1; valorAtributo2_C2 = pibPerCapita2; break;
        default: break; // Não deveria acontecer devido à validação
    }

    // --- Cálculo dos Pontos para cada Atributo (0 ou 1) ---
    int pontosC1_attr1 = 0, pontosC2_attr1 = 0;
    int pontosC1_attr2 = 0, pontosC2_attr2 = 0;

    // Comparação do primeiro atributo
    if (regraInvertida1) { // Densidade Populacional (menor valor vence)
        if (valorAtributo1_C1 < valorAtributo1_C2) pontosC1_attr1 = 1;
        else if (valorAtributo1_C2 < valorAtributo1_C1) pontosC2_attr1 = 1;
    } else { // Outros atributos (maior valor vence)
        if (valorAtributo1_C1 > valorAtributo1_C2) pontosC1_attr1 = 1;
        else if (valorAtributo1_C2 > valorAtributo1_C1) pontosC2_attr1 = 1;
    }

    // Comparação do segundo atributo
    if (regraInvertida2) { // Densidade Populacional (menor valor vence)
        if (valorAtributo2_C1 < valorAtributo2_C2) pontosC1_attr2 = 1;
        else if (valorAtributo2_C2 < valorAtributo2_C1) pontosC2_attr2 = 1;
    } else { // Outros atributos (maior valor vence)
        if (valorAtributo2_C1 > valorAtributo2_C2) pontosC1_attr2 = 1;
        else if (valorAtributo2_C2 > valorAtributo2_C1) pontosC2_attr2 = 1;
    }

    // --- Soma total dos "pontos" para cada carta ---
    // Consideramos aqui que cada "vitória" em um atributo individual vale 1 ponto para a soma final.
    // Isso é uma interpretação da "soma dos atributos" para determinar o vencedor final,
    // já que somar diretamente valores como "População" e "PIB" não faria sentido numérico direto.
    // Se a intenção fosse somar os valores numéricos dos atributos, seria mais complexo devido às diferentes escalas.
    // Optamos por somar as "vitórias" em cada atributo.
    float somaAtributosC1 = pontosC1_attr1 + pontosC1_attr2;
    float somaAtributosC2 = pontosC2_attr1 + pontosC2_attr2;

    // --- Exibição do Resultado da Comparação ---
    printf("\n--- Resultado da Comparacao ---\n");
    printf("Atributos de Comparacao Escolhidos: %s e %s\n", nomeAtributo1, nomeAtributo2);

    printf("\n%s (%s):\n", nomeCidade1, "Carta 1");
    printf("  %s: %.2f\n", nomeAtributo1, valorAtributo1_C1);
    printf("  %s: %.2f\n", nomeAtributo2, valorAtributo2_C1);
    printf("  Soma de vitorias em atributos: %.0f\n", somaAtributosC1);

    printf("\n%s (%s):\n", nomeCidade2, "Carta 2");
    printf("  %s: %.2f\n", nomeAtributo1, valorAtributo1_C2);
    printf("  %s: %.2f\n", nomeAtributo2, valorAtributo2_C2);
    printf("  Soma de vitorias em atributos: %.0f\n", somaAtributosC2);

    // Determina o vencedor final usando operador ternário
    printf("\nResultado Final: ");
    (somaAtributosC1 > somaAtributosC2) ? printf("Carta 1 (%s) venceu a rodada!\n", nomeCidade1) :
    ((somaAtributosC2 > somaAtributosC1) ? printf("Carta 2 (%s) venceu a rodada!\n", nomeCidade2) :
     printf("Empate!\n"));

    return 0; // Indica que o programa foi executado com sucesso
    
}

 