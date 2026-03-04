#include <stdio.h>

// Definição da estrutura para a carta do Super Trunfo
struct Carta {
    char estado[50];
    char codigo[5];
    char cidade_principal[50];
    int populacao; // Alterado para int conforme sua definição
    float area;
    float pib; // em bilhões
    int pontos_turisticos;
};

int main() {
    // Cadastro da Carta 1: Bahia
    struct Carta carta1 = {
        "Bahia",
        "A01",
        "Salvador",
        14141626,  
        564733.17, 
        350.00,    
        45         
    };

    // Cadastro da Carta 2: Paraná
    struct Carta carta2 = {
        "Paraná",
        "B02",
        "Curitiba",
        11597484,  
        199307.92, 
        550.00,    
        32         
    };

    // --- CÁLCULOS CARTA 1 ---
    // Usamos (float) antes da variável para garantir precisão na divisão de inteiros
    float densidade1 = (float)carta1.populacao / carta1.area;
    float pib_per_capita1 = (carta1.pib * 1000000000) / carta1.populacao;

    // Exibição dos Dados - Carta 1
    printf("-_- DESAFIO SUPER TRUNFO -_-\n\n");
    printf("CARTA 1:\n");
    printf("Estado: %s\n", carta1.estado);
    printf("Código: %s\n", carta1.codigo);
    printf("Cidade Principal: %s\n", carta1.cidade_principal);
    printf("População: %d\n", carta1.populacao); // Corrigido de %lu para %d
    printf("Área: %.2f km²\n", carta1.area);
    printf("PIB: R$ %.2f bilhões\n", carta1.pib);
    printf("Pontos Turísticos: %d\n", carta1.pontos_turisticos);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade1);
    printf("PIB per Capita: R$ %.2f\n", pib_per_capita1);

    printf("\n---------------------------\n\n");

    // --- CÁLCULOS CARTA 2 ---
    float densidade2 = (float)carta2.populacao / carta2.area;
    float pib_per_capita2 = (carta2.pib * 1000000000) / carta2.populacao;

    // Exibição dos Dados - Carta 2
    printf("CARTA 2:\n");
    printf("Estado: %s\n", carta2.estado);
    printf("Código: %s\n", carta2.codigo);
    printf("Cidade Principal: %s\n", carta2.cidade_principal);
    printf("População: %d\n", carta2.populacao); // Corrigido de %lu para %d
    printf("Área: %.2f km²\n", carta2.area);
    printf("PIB: R$ %.2f bilhões\n", carta2.pib);
    printf("Pontos Turísticos: %d\n", carta2.pontos_turisticos);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade2);
    printf("PIB per Capita: R$ %.2f\n", pib_per_capita2);

    return 0;
}