#include <stdio.h>

int main(){
    int escolha_menu;
    int escolha_atributo;
// Carta 01
    char nome_pais1[50];
    unsigned long int populacao1;
    float area1, pib1, densidade_populacional1, pib_per_capita1, super_poder1;
    int pontos_turisticos1, cod_carta1;

// Carta 02
    char nome_pais2[50];
    unsigned long int populacao2;
    float area2, pib2, densidade_populacional2, pib_per_capita2, super_poder2;
    int pontos_turisticos2, cod_carta2;
    
//Introdução
    printf("Bem vindo ao Super Trunfo!\n");
    printf("1 - Iniciar.\n");
    printf("2 - Como Jogar.\n");
    printf("3 - Sair.\n");
    scanf("%d", &escolha_menu);
    switch (escolha_menu)
    {
    case 1:
        printf("Vamos começas inserindo os atributos da Primeira Carta!\n");

//------------------Primeira Carta------------------
//País 
        printf("Insira a nome do Primeiro País.\n");
        scanf("%s", nome_pais1);
    
        
//Área 
        printf("Insira a área do País.\n");
        scanf("%f", &area1);
        
//PIB 
        printf("Insira o PIB.\n");
        scanf("%f", &pib1);
        
//Número de pontos turísticos 
        printf("Quantidade de Pontos turísticos.\n");
        scanf("%d", &pontos_turisticos1);
        
//Numero de HABITANTES
        printf("Numero de Habitantes.\n");
        scanf("%lu", &populacao1);
    
        densidade_populacional1 = area1 / populacao1;
        pib_per_capita1 = pib1 / populacao1;
        super_poder1 = pontos_turisticos1 + area1 + populacao1 + pib_per_capita1;

//Exibir os dados da Carta
        printf("---------Status Primeira Carta---------\n");
        printf("Nome do País: %s\n", nome_pais1);
        printf("Área: %0.2fkm²\n", area1);
        printf("Quantidade de Habitantes: %lu\n", populacao1);
        printf("Densidade Populacional: %0.2f pessoas/km²\n", densidade_populacional1);
        printf("PIB: %0.2f bilhões de reais\n", pib1);
        printf("PIB per capita: %0.2f reais\n",  pib_per_capita1);
        printf("SUPERRR POWERRRR!!!!!: %.2f\n", super_poder1);
        printf("-----------------------------------\n");

//------------------Segunda Carga------------------
        printf("\nAgora vamos para a Segunda Carta!\n");
        printf("Insira as Informações da Segunda Carta!\n");
        
//País
        printf("Insira o nome do Segundo País.\n");
        scanf("%s", nome_pais2);
        
        
//Área 
        printf("Insira a área do País.\n");
        scanf("%f", &area2);
        
//PIB 
        printf("Insira o PIB.\n");
        scanf("%f", &pib2);
        
//Número de pontos turísticos 
        printf("Quantidade de Pontos turísticos.\n");
        scanf("%d", &pontos_turisticos2);
        
//Numero de HABITANTES
        printf("Numero de Habitantes.\n");
        scanf("%lu", &populacao2);
        
        densidade_populacional2 = area2 / populacao2;
        pib_per_capita2 = pib2 / populacao2;
        super_poder2 = pontos_turisticos2 + area2 + populacao2 + pib_per_capita2;
        

//Exibir os dados da Carta
        printf("---------Status Segunda Carta---------\n");
        printf("Nome do País: %s\n", nome_pais2);
        printf("Área: %0.2fkm²\n", area2);
        printf("Quantidade de Habitantes: %lu\n", populacao2);
        printf("Densidade Populacional: %0.2f pessoas/km²\n", densidade_populacional2);
        printf("PIB: %0.2f bilhões de reais\n", pib2);
        printf("PIB per capita: %0.2f reais\n",  pib_per_capita2);
        printf("SUPERRR POWERRRR!!!!!: %.2f\n", super_poder2);
        printf("-----------------------------------\n");

// Jogo
        printf("Escolha o Atributo para Duelar!\n");
        printf("1 - Área.\n");
        printf("2 - População.\n");
        printf("3 - Densidade Populacional.\n");
        printf("4 - PIB per Capita.\n");
        printf("5 - Super Poder.\n");
        scanf("%d", &escolha_atributo);

        switch (escolha_atributo)
        {
// Área
        case 1:
            if(area1 == area2){
                printf("Empate na Área!\n");
            } else if (area1 > area2){
                printf("O Ganhador com a Maior Área: %s com área de %0.2f\n", nome_pais1, area1);
            } else{
                printf("O Ganhador com a Maior Área: %s com área de %0.2f\n", nome_pais2, area2);
            }
            break;

// População
        case 2:
            if(populacao1 == populacao2){
                printf("Empate na População!\n");
            } else if(populacao1 > populacao2){
                printf("O Ganhador com a Maior População: %s  %lu habitantes\n", nome_pais1, populacao1);
            } else {
                printf("O Ganhador com a Maior População: %s  %lu habitantes\n", nome_pais2, populacao2);
            }
            break;

// Densidade Populacional
        case 3:
            if(densidade_populacional1 == densidade_populacional2){
                printf("Empate nesse Densidade Populacional!\n");
            } else if(densidade_populacional1 < densidade_populacional2){
                printf("O Ganhador com a Menor Densidade Populacional é: %s\n", nome_pais1);
            } else {
                printf("Com a Maior Densidade Populacional: %s\n", nome_pais2);
            }
            break;

//PIB per Capita
        case 4:
            if(pib_per_capita1 == pib_per_capita2){
                printf("Empate no PIB per Capita!\n");
            } else if(pib_per_capita1 > pib_per_capita2){
                printf("O Ganhador com a Maior PIB per Capita: %s\n", nome_pais1);
            } else {
                printf("O Ganhador com a Maior PIB per Capita: %s\n", nome_pais2);
            }
            break;

// Super Poder
        case 5:
            if(super_poder1 == super_poder2){
                printf("Empate no SUPER PODERRRR!!!!\n");
            } else if (super_poder1 > super_poder2){
                printf("SUPERRR POWERRRRR!!!!!: %s\n", nome_pais1);
            } else {
                printf("SUPERRR POWERRRRR!!!!!: %s\n", nome_pais2);
            }
            break;

//Saida
        default:
            break;
        }
        break;

        case 2:
            printf("\n\n\n\n");
            printf("Bem vindo ao Super Trunfo!!\n");
            printf("O jogo funciona da seguinte forma:\n");
            printf("Você ira inserir os dados conforme for solicitado na tela.\n");
            printf("Por exemplo: Nome da Cidade, Área, População, etc\n");
            printf("Depois disso, você ira selecionar qual atributo você quer usar pra duelar com a Carta 2\n");
            printf("o sistema exibirá qual carta venceu com base na regra: maior valor vence,\n");
            printf("exceto em densidade populacional, onde o menor valor é o vencedor.\n");
    default:
        printf("Você saiu do jogo!!");
        break;
    }
}
