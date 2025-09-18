#include <stdio.h>   // Biblioteca padrão para entrada e saída

int main () {

    // carta 01
    int pop1, npt1; //npt = numero de pontos turisticos - pop = população
    float pib1, area1; // area em km²
    char estado1, cod1[10], nome1[20]; // cod = código da carta
    
    // carta 02
    int pop2, npt2;
    float pib2, area2;
    char estado2, cod2[11], nome2[21];
    

    // início do cadastro da primeira carta
    printf("Desafio Super Trunfo.\n");
    printf("Vamos registrar os dados da primeira carta.\n");
    
    printf("Qual o Estado da carta (A-H)?\n");
    scanf(" %c", &estado1);

    printf("Qual o código da carta?\n");
    scanf("%s", cod1);

    printf("Qual o nome da cidade?\n");
    scanf(" %[^\n]", nome1); // permite nomes com espaços

    printf("Qual a população da cidade?\n");
    scanf("%d", &pop1);

    printf("Qual a área da cidade em km²?\n");
    scanf("%f", &area1);

    printf("Qual o PIB da cidade?\n");
    scanf("%f", &pib1);

    printf("Quantos pontos turísticos a cidade possui?\n");
    scanf("%d", &npt1);

    printf("\nCadastro concluído da cidade: %s.\n", nome1);

    float densidade1 = (float) pop1 / area1; // densidade populacional
    float pibper1 = (float) pib1 / pop1; // pib per capita

    printf("\n");

    // cadastro da segunda carta
    printf("Vamos registrar agora a segunda carta.\n\n");

    printf("Qual o Estado da carta (A-H)?\n");
    scanf(" %c", &estado2);

    printf("Qual o código da carta?\n");
    scanf("%s", cod2);

    printf("Qual o nome da cidade?\n");
    scanf(" %[^\n]", nome2);

    printf("Qual a população da cidade?\n");
    scanf("%d", &pop2);

    printf("Qual a área da cidade em km²?\n");
    scanf("%f", &area2);

    printf("Qual o PIB da cidade?\n");
    scanf("%f", &pib2);

    printf("Quantos pontos turísticos a cidade possui?\n");
    scanf("%d", &npt2);

    printf("\nCadastro concluído da cidade: %s.\n", nome2);

    float densidade2 = (float) pop2 / area2; // densidade populacional
    float pibper2 = (float) pib2 / pop2; // pib per capita

    printf("\n");

    // exibição das cartas cadastradas
    printf("Resumo das cartas cadastradas:\n\n");

    printf("Carta Nº 1\n");
    printf("Estado: %c\n", estado1);
    printf("Código da Carta: %s\n", cod1);
    printf("Nome da Cidade: %s\n", nome1);
    printf("População: %d\n", pop1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: %.2f\n", pib1);
    printf("Número de Pontos Turísticos: %d\n", npt1);
    printf("Densidade Populacional: %.2f\n", densidade1);
    printf("PIB per capita: %.2f\n", pibper1);

    printf("\n");

    printf("Carta Nº 2\n");
    printf("Estado: %c\n", estado2);
    printf("Código da Carta: %s\n", cod2);
    printf("Nome da Cidade: %s\n", nome2);
    printf("População: %d\n", pop2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f\n", pib2);
    printf("Número de Pontos Turísticos: %d\n", npt2);
    printf("Densidade Populacional: %.2f\n", densidade2);
    printf("PIB per capita: %.2f\n", pibper2);
    printf("\n");

    // comparações entre os atributos
    printf("Comparando os atributos entre as cartas:\n\n");

    // comparação do atributo: População
    printf("População:\n");
    printf("%s tem %d habitantes.\n", nome1, pop1);
    printf("%s tem %d habitantes.\n", nome2, pop2);

    if (pop1 > pop2) {
        printf("A carta %s vence com %d habitantes.\n", nome1, pop1);
    } else if (pop2 > pop1) {
        printf("A carta %s vence com %d habitantes.\n", nome2, pop2);
    } else {
        printf("As duas cartas empatam com %d habitantes.\n", pop1);
    }
    printf("\n");

    // comparação do atributo: Área
    printf("Área:\n");
    printf("%s tem %.2f km².\n", nome1, area1);
    printf("%s tem %.2f km².\n", nome2, area2);

    if (area1 > area2) {
        printf("A carta %s vence com %.2f km².\n", nome1, area1);
    } else if (area2 > area1) {
        printf("A carta %s vence com %.2f km².\n", nome2, area2);
    } else {
        printf("As duas cartas empatam com %.2f km².\n", area1);
    }
    printf("\n");

    // comparação do atributo: PIB
    printf("PIB:\n");
    printf("%s tem %.2f de PIB.\n", nome1, pib1);
    printf("%s tem %.2f de PIB.\n", nome2, pib2);

    if (pib1 > pib2) {
        printf("A carta %s vence com %.2f de PIB.\n", nome1, pib1);
    } else if (pib2 > pib1) {
        printf("A carta %s vence com %.2f de PIB.\n", nome2, pib2);
    } else {
        printf("As duas cartas empatam com %.2f de PIB.\n", pib1);
    }
    printf("\n");

    // comparação do atributo: Número de Pontos Turísticos
    printf("Número de Pontos Turísticos:\n");
    printf("%s tem %d pontos turísticos.\n", nome1, npt1);
    printf("%s tem %d pontos turísticos.\n", nome2, npt2);

    if (npt1 > npt2) {
        printf("A carta %s vence com %d pontos turísticos.\n", nome1, npt1);
    } else if (npt2 > npt1) {
        printf("A carta %s vence com %d pontos turísticos.\n", nome2, npt2);
    } else {
        printf("As duas cartas empatam com %d pontos turísticos.\n", npt1);
    }
    printf("\n");

    // comparação do atributo: Densidade Populacional
    // (aqui vence a menor densidade)
    printf("Densidade Populacional:\n");
    printf("%s tem %.2f de densidade populacional.\n", nome1, densidade1);
    printf("%s tem %.2f de densidade populacional.\n", nome2, densidade2);

    if (densidade1 < densidade2) {
        printf("A carta %s vence com %.2f de densidade populacional.\n", nome1, densidade1);
    } else if (densidade2 < densidade1) {
        printf("A carta %s vence com %.2f de densidade populacional.\n", nome2, densidade2);
    } else {
        printf("As duas cartas empatam com %.2f de densidade populacional.\n", densidade1);
    }
    printf("\n");

    // comparação do atributo: PIB per capita
    printf("PIB per capita:\n");
    printf("%s tem %.2f de PIB per capita.\n", nome1, pibper1);
    printf("%s tem %.2f de PIB per capita.\n", nome2, pibper2);

    if (pibper1 > pibper2) {
        printf("A carta %s vence com %.2f de PIB per capita.\n", nome1, pibper1);
    } else if (pibper2 > pibper1) {
        printf("A carta %s vence com %.2f de PIB per capita.\n", nome2, pibper2);
    } else {
        printf("As duas cartas empatam com %.2f de PIB per capita.\n", pibper1);
    }

    return 0;

}
