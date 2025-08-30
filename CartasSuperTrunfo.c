#include <stdio.h>

int main() {
    // Declaração de variáveis corretas
    char carta1 = 'A';
    char carta2 = 'B';
    
    char nome_estado_A[50];
    char nome_estado_B[50];
    
    char codigo_carta_A[50];
    char codigo_carta_B[50];
    
    int populacao_A, populacao_B;
    int pontos_turisticos_A, pontos_turisticos_B;
    float area_A, area_B;
    float pib_A, pib_B;

    // Introdução de dados para a carta A
    printf("Digite o nome do estado da carta A: ");
    scanf("%49s", nome_estado_A);

    printf("Digite o codigo da carta do estado da carta A: ");
    scanf("%49s", codigo_carta_A);

    printf("Digite a populacao do estado da carta A: ");
    scanf("%d", &populacao_A);

    printf("Digite a area do estado da carta A: ");
    scanf("%f", &area_A);

    printf("Digite o PIB do estado da carta A: ");
    scanf("%f", &pib_A);

    printf("Digite o numero de pontos turistico do estado A: ");
    scanf("%d", &pontos_turisticos_A);

    // Introdução de dados para a carta B
    printf("\nDigite o nome do estado da carta B: ");
    scanf("%49s", nome_estado_B);

    printf("Digite o codigo da carta do estado da carta B: ");
    scanf("%49s", codigo_carta_B);

    printf("Digite a populacao do estado da carta B: ");
    scanf("%d", &populacao_B);

    printf("Digite a area do estado da carta B: ");
    scanf("%f", &area_B );

    printf("Digite o PIB do estado da carta B: ");
    scanf("%f", &pib_B);

    printf("Digite o numero de pontos turistico do estado B: ");
    scanf("%d", &pontos_turisticos_B);


     // Cálculos para a carta A
    float densidade_A = populacao_A / area_A;
    float pib_per_capita_A = pib_A / populacao_A; 

    // Cálculos para a carta B
    float densidade_B = populacao_B / area_B;
    float pib_per_capita_B = pib_B / populacao_B; 

    // Cálculo do Super Poder para cada carta
    float super_poder_A = populacao_A + area_A + pib_A + pontos_turisticos_A + pib_per_capita_A + (1/densidade_A);
    float super_poder_B = populacao_B + area_B + pib_B + pontos_turisticos_B + pib_per_capita_B + (1/densidade_B);


    // Exibição de dados da carta A
    printf("\n=== CARTA A ===\n");
    printf("Carta: %c\n", carta1);
    printf("Nome do estado: %s\n", nome_estado_A);
    printf("Codigo da carta do estado: %s\n", codigo_carta_A);
    printf("Populacao: %d\n", populacao_A);
    printf("Area: %.2f  km² \n", area_A);
    printf("PIB: %.2f  reais \n", pib_A);
    printf("Pontos Turisticos: %d\n", pontos_turisticos_A);
    printf("Densidade populacional: %.2f hab/km²\n", densidade_A);
    printf("PIB per capita: %.2f reais\n", pib_per_capita_A);
    printf("Super Poder: %.2f\n", super_poder_A);

    // Exibição de dados da carta B
    printf("\n=== CARTA B ===\n");
    printf("Carta: %c\n", carta2);
    printf("Nome do estado: %s\n", nome_estado_B);
    printf("Codigo da carta do estado: %s\n", codigo_carta_B);
    printf("Populacao: %d\n", populacao_B);
    printf("Area: %.2f  km² \n", area_B);
    printf("PIB: %.2f  reais \n", pib_B);
    printf("Pontos Turisticos: %d\n", pontos_turisticos_B);
    printf("Densidade populacional: %.2f hab/km²\n", densidade_B);
    printf("PIB per capita: %.2f reais\n", pib_per_capita_B);
    printf("Super Poder: %.2f\n", super_poder_B);

     // Comparação das cartas
    printf("\nComparação de Cartas:\n");
    
    // População
    printf("População: Carta %c venceu (%d)\n", 
           (populacao_A > populacao_B) ? '1' : '2', 
           (populacao_A > populacao_B) ? 1 : 0);
    
    // Área
    printf("Área: Carta %c venceu (%d)\n", 
           (area_A > area_B) ? '1' : '2', 
           (area_A > area_B) ? 1 : 0);
    
    // PIB
    printf("PIB: Carta %c venceu (%d)\n", 
           (pib_A > pib_B) ? '1' : '2', 
           (pib_A > pib_B) ? 1 : 0);
    
    // Pontos Turísticos
 printf("Pontos Turísticos: Carta %c venceu (%d)\n", 
           (pontos_turisticos_A > pontos_turisticos_B) ? '1' : '2', 
           (pontos_turisticos_A > pontos_turisticos_B) ? 1 : 0);
    
    // Densidade Populacional 
    printf("Densidade Populacional: Carta %c venceu (%d)\n", 
           (densidade_A < densidade_B) ? '1' : '2', 
           (densidade_A < densidade_B) ? 1 : 0);
    
    // PIB per Capita
    printf("PIB per Capita: Carta %c venceu (%d)\n", 
           (pib_per_capita_A > pib_per_capita_B) ? '1' : '2', 
           (pib_per_capita_A > pib_per_capita_B) ? 1 : 0);
    
    // Super Poder
    printf("Super Poder: Carta %c venceu (%d)\n", 
           (super_poder_A > super_poder_B) ? '1' : '2', 
           (super_poder_A > super_poder_B) ? 1 : 0);


    return 0;
}