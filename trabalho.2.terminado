#include <stdio.h>
#include <stdlib.h>

int main() {
    // Definição de variáveis da carta 1
    char estado_1;
    char codigo_1[4];
    char cidade_1[100];
    float area_1;
    float  pib_1;
    float densidade_populacional_1;
    float pib_per_capita_1;
    int populacao_1;
    int pontos_turisticos_1;

    // Definição de variáveis da carta 2
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
    printf("Estado: "); scanf(" %c", &estado_1);
    printf("Código: "); scanf(" %s", codigo_1);
    printf("Cidade: "); scanf(" %s", cidade_1);
    printf("Área (km²): "); scanf(" %f", &area_1);
    printf("PIB (milhões R$): "); scanf(" %f", &pib_1);
    printf("Pontos Turísticos: "); scanf(" %d", &pontos_turisticos_1);
    printf("População: "); scanf(" %d", &populacao_1);

    // Entrada da carta 2
    printf("\nDigite os dados da carta 2:\n");
    printf("Estado: "); scanf(" %c", &estado_2);
    printf("Código: "); scanf(" %s", codigo_2);
    printf("Cidade: "); scanf(" %s", cidade_2);
    printf("Área (km²): "); scanf(" %f", &area_2);
    printf("PIB (milhões R$): "); scanf(" %f", &pib_2);
    printf("Pontos Turísticos: "); scanf(" %d", &pontos_turisticos_2);
    printf("População: "); scanf(" %d", &populacao_2);

    // Cálculos
    densidade_populacional_1 = populacao_1 / area_1;
    pib_per_capita_1 = pib_1 / populacao_1;
    densidade_populacional_2 = populacao_2 / area_2;
    pib_per_capita_2 = pib_2 / populacao_2;

    // Escolha de atributos
    int opcao1;
    int opcao2;
    float valor1_1;
    float valor1_2;
    float valor2_1;
    float valor2_2;
    
    printf("\nEscolha dois atributos para comparar:\n");
    printf("1 - População\n2 - Área\n3 - PIB\n4 - Pontos Turísticos\n5 - Densidade populacional\n");
    do {
        printf("Primeiro atributo: ");
        scanf("%d", &opcao1);
        printf("Segundo atributo (diferente do primeiro): ");
        scanf("%d", &opcao2);
    } while (opcao1 == opcao2);
    
    float atributos_1[] = {populacao_1, area_1, pib_1, pontos_turisticos_1, densidade_populacional_1};
    float atributos_2[] = {populacao_2, area_2, pib_2, pontos_turisticos_2, densidade_populacional_2};
    
    valor1_1 = atributos_1[opcao1 - 1];
    valor1_2 = atributos_1[opcao2 - 1];
    valor2_1 = atributos_2[opcao1 - 1];
    valor2_2 = atributos_2[opcao2 - 1];
    
    // Comparação
    int vencedor1 = (opcao1 == 5) ? (valor1_1 < valor2_1 ? 1 : (valor1_1 > valor2_1 ? 2 : 0)) : (valor1_1 > valor2_1 ? 1 : (valor1_1 < valor2_1 ? 2 : 0));
    int vencedor2 = (opcao2 == 5) ? (valor1_2 < valor2_2 ? 1 : (valor1_2 > valor2_2 ? 2 : 0)) : (valor1_2 > valor2_2 ? 1 : (valor1_2 < valor2_2 ? 2 : 0));
    
    // Soma dos atributos
    float soma1 = valor1_1 + valor1_2;
    float soma2 = valor2_1 + valor2_2;
    int vencedorFinal = (soma1 > soma2) ? 1 : (soma1 < soma2) ? 2 : 0;
    
    // Exibição do resultado
    printf("\nResultados:\n");
    printf("%s (Carta 1): %.2f e %.2f\n", cidade_1, valor1_1, valor1_2);
    printf("%s (Carta 2): %.2f e %.2f\n", cidade_2, valor2_1, valor2_2);
    printf("Soma dos atributos: %.2f (Carta 1) vs %.2f (Carta 2)\n", soma1, soma2);
    
    if (vencedorFinal == 1) {
        printf("Vencedor: Carta 1 (%s)\n", cidade_1);
    } else if (vencedorFinal == 2) {
        printf("Vencedor: Carta 2 (%s)\n", cidade_2);
    } else {
        printf("Resultado: Empate!\n");
    }
    
    return 0;
}
