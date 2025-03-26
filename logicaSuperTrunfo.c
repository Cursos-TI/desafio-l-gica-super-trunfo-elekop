#include <stdio.h>
#include <stdlib.h>

int main() {
    // Definição de variáveis das cartas
    char estado_1, estado_2;
    char codigo_1[4], codigo_2[4];
    char cidade_1[100], cidade_2[100];
    float area_1, pib_1, densidade_populacional_1, pib_per_capita_1;
    float area_2, pib_2, densidade_populacional_2, pib_per_capita_2;
    int populacao_1, pontos_turisticos_1;
    int populacao_2, pontos_turisticos_2;
    int opcao, vencedor;

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

    // Menu de escolha
    printf("\nEscolha um atributo para comparar:\n");
    printf("1 - População\n2 - Área\n3 - PIB\n4 - Pontos Turísticos\n5 - Densidade populacional\n");
    printf("Opção: ");
    scanf("%d", &opcao);

    float valor_1, valor_2;
    const char *atributo;

    switch (opcao) {
        case 1: 
            atributo = "População";
            valor_1 = populacao_1;
            valor_2 = populacao_2;
            break;
        case 2:
            atributo = "Área";
            valor_1 = area_1;
            valor_2 = area_2;
            break;
        case 3:
            atributo = "PIB";
            valor_1 = pib_1;
            valor_2 = pib_2;
            break;
        case 4:
            atributo = "Pontos Turísticos";
            valor_1 = pontos_turisticos_1;
            valor_2 = pontos_turisticos_2;
            break;
        case 5:                                                   
            atributo = "Densidade populacional";
            valor_1 = densidade_populacional_1;
            valor_2 = densidade_populacional_2;
            vencedor = (valor_1 < valor_2) ? 1 : (valor_1 > valor_2) ? 2 : 0;
            break;
        default:
            printf("Opção inválida!\n");
            return 1;
    }

    // Comparação (regra geral)
    if (opcao != 5) {
        vencedor = (valor_1 > valor_2) ? 1 : (valor_1 < valor_2) ? 2 : 0;
    }

    // Exibição do resultado
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
 