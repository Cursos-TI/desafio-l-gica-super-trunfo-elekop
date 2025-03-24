#include <stdio.h>

int main() {
    // Definição de variáveis da carta1
    char estado_1;
    char codigo_1[4];
    char cidade_1[100];
    float area_1;
    float pib_1;
    float densidade_populacional_1;
    float pib_per_capita_1;
    int populacao_1;
    int pontos_turisticos_1;

      // Definição de variáveis da carta2

      char estado_2;
      char codigo_2[4];
      char cidade_2[100];
      float area_2;
      float pib_2;
      float densidade_populacional_2;
      float pib_per_capita_2;
      int populacao_2;
      int pontos_turisticos_2;

    // Entrada da carta 1
    printf("Digite os dados da carta 1:\n");
    printf("Estado : (letra de A a H) "); 
    scanf(" %c", &estado_1);
    printf("Código da carta: "); 
    scanf(" %s", codigo_1);
    printf("Nome da cidade: "); 
    scanf(" %s", cidade_1);
    printf("Área (em km²): "); 
    scanf(" %f", &area_1);
    printf("PIB em milhões de reais: "); 
    scanf(" %f", &pib_1);
    printf("Quantidade de pontos turísticos: "); 
    scanf(" %d", &pontos_turisticos_1);
    printf("População: "); 
    scanf(" %d", &populacao_1);

    // Entrada da carta 2
    printf("\nDigite os dados da carta 2:\n");
    printf("Estado (letra de A a H): "); 
    scanf(" %c", &estado_2);
    printf("Código da carta: "); 
    scanf(" %s", codigo_2);
    printf("Nome da cidade: "); 
    scanf(" %s", cidade_2);
    printf("Área (em km²): "); 
    scanf(" %f", &area_2);
    printf("PIB em milhões de reais: "); 
    scanf(" %f", &pib_2);
    printf("Quantidade de pontos turísticos: "); 
    scanf(" %d", &pontos_turisticos_2);
    printf("População: "); 
    scanf(" %d", &populacao_2);

    // Cálculos das cartas
    densidade_populacional_1 = populacao_1 / area_1;
    pib_per_capita_1 = pib_1 / populacao_1;
    densidade_populacional_2 = populacao_2 / area_2;
    pib_per_capita_2 = pib_2 / populacao_2;

    // Exibe cálculos
    printf("\nDensidade Populacional (Carta 1): %.2f hab/km²\n", densidade_populacional_1);
    printf("PIB per Capita (Carta 1): R$ %.2f\n", pib_per_capita_1);
    printf("Densidade Populacional (Carta 2): %.2f hab/km²\n", densidade_populacional_2);
    printf("PIB per Capita (Carta 2): R$ %.2f\n", pib_per_capita_2);

    // Comparação - Escolha de atributo :densidade populacional
    const char *atributo = "Densidade Populacional"; 
    float valor_1 = densidade_populacional_1;
    float valor_2 = densidade_populacional_2;
    int vencedor = (valor_1 < valor_2) ? 1 : (valor_1 > valor_2) ? 2 : 0;

    // Exibe resultado
    printf("\nComparação de cartas (Atributo: %s):\n", atributo);
    printf("Carta 1 - %s (%c): %.2f\n", cidade_1, estado_1, valor_1);
    printf("Carta 2 - %s (%c): %.2f\n", cidade_2, estado_2, valor_2);

    if (vencedor == 1) {
        printf("Resultado: Carta 1 (%s) venceu!\n", cidade_1);
    } else if (vencedor == 2) {
        printf("Resultado: Carta 2 (%s) venceu!\n", cidade_2);
    } else {
        printf("Resultado: Empate!\n");
    }

    return 0;
}