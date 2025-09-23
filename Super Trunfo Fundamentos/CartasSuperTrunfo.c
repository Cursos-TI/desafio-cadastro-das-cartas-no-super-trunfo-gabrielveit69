#include <stdio.h>

int main () {

    // carta 01
    unsigned long int pop1; // população
    int npt1; // número de pontos turísticos
    float pib1, area1; // PIB e área em km²
    float pibpeb1; // PIB per capita = pib/população
    float denspop1; // densidade populacional = população/área
    char estado1, cod1[10], nome1[20]; // dados da carta: estado, código e nome da cidade
    float superpoder1; // soma de todos os atributos
    
    // carta 02
    unsigned long int pop2; // população
    int npt2; // número de pontos turísticos
    float pib2, area2; // PIB e área em km²
    float pibpeb2; // PIB per capita
    float denspop2; // densidade populacional
    char estado2, cod2[10], nome2[20]; // dados da carta: estado, código e nome da cidade
    float superpoder2; // soma de todos os atributos

    // início do cadastro da primeira carta
    printf("Desafio Super Trunfo.");
    printf("Agora vamos lançar os dados da primeira carta.\n");
    
    printf("Qual o Estado da carta(A-H)?\n");
    scanf(" %c", &estado1);

    printf("Qual o código da carta?\n");
    scanf("%s", cod1);

    printf("Qual o nome da cidade?\n");
    scanf(" %[^\n]", nome1); // leitura de string com espaços

    printf("Qual a população da cidade?\n");
    scanf("%lu", &pop1);

    printf("Qual a área da cidade?\n");
    scanf("%f", &area1);

    printf("Qual o PIB da cidade?\n");
    scanf("%f", &pib1);

    printf("Quantos pontos turísticos a cidade possui?\n");
    scanf("%d", &npt1);

    printf("\n");

    printf("Obrigado por cadastrar a carta %s.\n", nome1);

    // cálculos dos atributos derivados
    pibpeb1 = pib1 / pop1;
    denspop1 = pop1 / area1;
    superpoder1 = pop1 + area1 + pib1 + npt1 + pibpeb1 + denspop1;

    // início do cadastro da segunda carta
    printf("\nAgora vamos começar a cadastrar a segunda carta.\n\n");

    printf("Qual o Estado da carta(A-H)?\n");
    scanf(" %c", &estado2);

    printf("Qual o código da carta?\n");
    scanf("%s", cod2);

    printf("Qual o nome da cidade?\n");
    scanf(" %[^\n]", nome2);

    printf("Qual a população da cidade?\n");
    scanf("%lu", &pop2);

    printf("Qual a área da cidade?\n");
    scanf("%f", &area2);

    printf("Qual o PIB da cidade?\n");
    scanf("%f", &pib2);

    printf("Quantos pontos turísticos a cidade possui?\n");
    scanf("%d", &npt2);

    printf("\n");

    printf("Obrigado por cadastrar a carta %s.\n", nome2);

    // cálculos dos atributos derivados
    pibpeb2 = pib2 / pop2;
    denspop2 = pop2 / area2;
    superpoder2 = pop2 + area2 + pib2 + npt2 + pibpeb2 + denspop2;

    // exibição das cartas cadastradas
    printf("\nAgora vamos visualizar as cartas cadastradas.\n\n");

    // exibição da carta 1
    printf("Carta Nº 1\n");
    printf("Estado: %c\n", estado1);
    printf("Código da Carta: %s\n", cod1);
    printf("Nome da Cidade: %s\n", nome1);
    printf("População: %lu\n", pop1);
    printf("Area: %.2f km²\n", area1);
    printf("PIB: %.2f\n", pib1);
    printf("Numero de Pontos Turísticos: %d\n", npt1);
    printf("PIB per Capita: %.2f\n", pibpeb1);
    printf("Densidade Populacional: %.2f\n", denspop1);
    printf("Superpoder: %.2f\n", superpoder1);
   
    printf("\n");

    // exibição da carta 2
    printf("Carta Nº 2\n");
    printf("Estado: %c\n", estado2);
    printf("Código da Carta: %s\n", cod2);
    printf("Nome da Cidade: %s\n", nome2);
    printf("População: %lu\n", pop2);
    printf("Area: %.2f km²\n", area2);
    printf("PIB: %.2f\n", pib2);
    printf("Numero de Pontos Turísticos: %d\n", npt2);
    printf("PIB per Capita: %.2f\n", pibpeb2);
    printf("Densidade Populacional: %.2f\n", denspop2);
    printf("Superpoder: %.2f\n", superpoder2);

    // comparações entre atributos
    printf("\nAgora vamos comparar o atributo: População.\n");
    if (pop1 > pop2) {
        printf("A carta %s é a vencedora com %lu habitantes.\n", nome1, pop1);
    } else if (pop2 > pop1) {
        printf("A carta %s é a vencedora com %lu habitantes.\n", nome2, pop2);
    } else {
        printf("As duas cartas empataram com %lu habitantes.\n", pop1);
    }

    printf("Agora vamos comparar o atributo: Área.\n");
    if (area1 > area2) {
        printf("A carta %s é a vencedora com %.2f km².\n", nome1, area1);
    } else if (area2 > area1) {
        printf("A carta %s é a vencedora com %.2f km².\n", nome2, area2);
    } else {
        printf("As duas cartas empataram com %.2f km².\n", area1);
    }

    printf("Agora vamos comparar o atributo: PIB.\n");
    if (pib1 > pib2) {
        printf("A carta %s é a vencedora com %.2f de PIB.\n", nome1, pib1);
    } else if (pib2 > pib1) {
        printf("A carta %s é a vencedora com %.2f de PIB.\n", nome2, pib2);
    } else {
        printf("As duas cartas empataram com %.2f de PIB.\n", pib1);
    }     

    printf("Agora vamos comparar o atributo: Número de Pontos Turísticos.\n");
    if (npt1 > npt2) {
        printf("A carta %s é a vencedora com %d pontos turísticos.\n", nome1, npt1);
    } else if (npt2 > npt1) {
        printf("A carta %s é a vencedora com %d pontos turísticos.\n", nome2, npt2);
    } else {
        printf("As duas cartas empataram com %d pontos turísticos.\n", npt1);
    }

    printf("Agora vamos comparar o atributo: PIB per Capita.\n");
    if (pibpeb1 > pibpeb2) {
        printf("A carta %s é a vencedora com %.2f de PIB per Capita.\n", nome1, pibpeb1);
    } else if (pibpeb2 > pibpeb1) {
        printf("A carta %s é a vencedora com %.2f de PIB per Capita.\n", nome2, pibpeb2);
    } else {
        printf("As duas cartas empataram com %.2f de PIB per Capita.\n", pibpeb1);
    }

    printf("Agora vamos comparar o atributo: Densidade Populacional.\n");
    if (denspop1 < denspop2) {
        printf("A carta %s é a vencedora com %.2f de Densidade Populacional.\n", nome1, denspop1);
    } else if (denspop2 < denspop1) {
        printf("A carta %s é a vencedora com %.2f de Densidade Populacional.\n", nome2, denspop2);
    } else {
        printf("As duas cartas empataram com %.2f de Densidade Populacional.\n", denspop1);
    }

    printf("Agora vamos comparar o atributo: Superpoder.\n");
    if (superpoder1 > superpoder2) {
        printf("A carta %s é a vencedora com %.2f de Superpoder.\n", nome1, superpoder1);
    } else if (superpoder2 > superpoder1) {
        printf("A carta %s é a vencedora com %.2f de Superpoder.\n", nome2, superpoder2);
    } else {
        printf("As duas cartas empataram com %.2f de Superpoder.\n", superpoder1);
    }

    return 0;
}
