#include <stdio.h>

// Desafio Super Trunfo - NOVATO

int main() {
    // Variáveis para armazenar os dados de cada cidade
    char estado[25]; // Código Estado
    char codigo[5];  // Código da cidade (ex: A01, A02, ..., H04)
    char nomecidade[25]; // Nome da Cidade
    int populacao;    // População da cidade
    float area;       // Área da cidade (em km²)
    float pib;        // PIB da cidade (em milhões)
    int pontos_turisticos;  // Número de pontos turísticos

    // Insere dados carta 1
    printf("Carta1:\n");
    printf ("Digite o código do Estado: ");
    scanf("%s", estado);
    printf("Digite o código da cidade (ex: A01): ");
    scanf("%s", codigo);  // Lê o código da cidade
    printf ("Digite o nome da cidade (não use espaço)a: ");
    scanf("%s", nomecidade);
    printf("Digite a população: ");
    scanf("%d", &populacao);
    printf("Digite a área da cidade (em km²): ");
    scanf("%f", &area);
    printf("Digite o PIB da cidade (em milhões): ");
    scanf("%f", &pib);
    printf("Digite o número de pontos turísticos: ");
    scanf("%d", &pontos_turisticos);

    // Exibe na tela os dados da carta 1
    printf("\nCarta1:");
    printf("\nEstado: %s", estado);
    printf("\nCódigo da Cidade: %s", codigo);
    printf("\nNome da Cidade: %s", nomecidade);
    printf("\nPopulação: %d", populacao);
    printf("\nÁrea: %.2f km²", area);
    printf("\nPIB: R$ %.2f milhões", pib);
    printf("\nPontos turísticos: %d\n\n", pontos_turisticos);

    
    // Insere dados carta 2
    printf("Carta2:\n");
    printf ("Digite o código do Estado: ");
    scanf("%s", estado);
    printf("Digite o código da cidade (ex: B01): ");
    scanf("%s", codigo);  // Lê o código da cidade
    printf ("Digite o nome da cidade (não use espaço): ");
    scanf("%s", nomecidade);
    printf("Digite a população: ");
    scanf("%d", &populacao);
    printf("Digite a área da cidade (em km²): ");
    scanf("%f", &area);
    printf("Digite o PIB da cidade (em milhões): ");
    scanf("%f", &pib);
    printf("Digite o número de pontos turísticos: ");
    scanf("%d", &pontos_turisticos);

    // Exibe na tela dados carta 2
    printf("\nCarta2:");
    printf("\nEstado: %s", estado);
    printf("\nCódigo da Cidade: %s", codigo);
    printf("\nNome da Cidade: %s", nomecidade);
    printf("\nPopulação: %d", populacao);
    printf("\nÁrea: %.2f km²", area);
    printf("\nPIB: R$ %.2f milhões", pib);
    printf("\nPontos turísticos: %d\n\n", pontos_turisticos);

   

    return 0;

}

