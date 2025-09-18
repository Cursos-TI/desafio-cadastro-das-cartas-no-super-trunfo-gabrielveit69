#include <stdio.h>

int main() {
    // Cidades pré-cadastradas
    char nome1[] = "Sao Paulo";
    char nome2[] = "Rio de Janeiro";

    float area1 = 1521.11, area2 = 1182.3;            // km²
    int pop1 = 12300000, pop2 = 6748000;              // habitantes
    float pib1 = 699280000000, pib2 = 362000000000;   // R$
    int npt1 = 200, npt2 = 150;                       // pontos turísticos
    float dens1 = pop1 / area1, dens2 = pop2 / area2; // hab/km²

    int atributo1, atributo2;   // para comparação
    int pontos1 = 0, pontos2 = 0;  // pontuação para resultado


    printf("Vamos começar nosso jogo de Super Trunfo!\nVeja agora os atributos da sua carta.\n");
    printf("Sua carta é São Paulo.\n Area: %.2f km²\n População: %d habitantes\n PIB: R$ %.2f\n Pontos Turísticos: %d\n Densidade Demográfica: %.2f hab/km²\n",
           area1, pop1, pib1, npt1, dens1);
    printf("Escolha o primeiro atributo para comparar:\n");
    printf("1 - Área\n2 - População\n3 - PIB\n4 - Pontos Turísticos\n5 - Densidade Demográfica(o menor vence)\n");
    scanf("%d", &atributo1);

    /* Essa estrutura verifica se o atributo escolhido primeiro (atributo1) não é igual a 1.
     Caso não seja, exibe a opção "1 - Área" para o segundo atributo,
     garantindo que o jogador não escolha o mesmo atributo duas vezes. */
    printf("Escolha o segundo atributo (diferente do primeiro):\n");
    if (atributo1 != 1) printf("1 - Área\n");
    if (atributo1 != 2) printf("2 - População\n");
    if (atributo1 != 3) printf("3 - PIB\n");
    if (atributo1 != 4) printf("4 - Pontos Turísticos\n");
    if (atributo1 != 5) printf("5 - Densidade Demográfica(o menor vence)\n");
    scanf("%d", &atributo2);

    // Valores para o primeiro atributo
    float val1_attr1 = 0, val2_attr1 = 0;  // primeiro valor do atributo um e segundo valor do atributo um
    int menorVence1 = 0; // utilizado para calcular corretamente a densidade

    switch (atributo1) {
        case 1: val1_attr1 = area1; val2_attr1 = area2; break;
        case 2: val1_attr1 = pop1; val2_attr1 = pop2; break;
        case 3: val1_attr1 = pib1; val2_attr1 = pib2; break;
        case 4: val1_attr1 = npt1; val2_attr1 = npt2; break;
        case 5: val1_attr1 = dens1; val2_attr1 = dens2; menorVence1 = 1; break; // utilizado para calcular corretamente a densidade
        default: printf("Atributo inválido!\n"); return 1;
    }

    // Valores para o segundo atributo
    float val1_attr2 = 0, val2_attr2 = 0;  // Primeiro valor do atributo dois e segundo valor do atributo dois
    int menorVence2 = 0; // utilizado para calcular corretamente a densidade

    switch (atributo2) {
        case 1: val1_attr2 = area1; val2_attr2 = area2; break;
        case 2: val1_attr2 = pop1; val2_attr2 = pop2; break;
        case 3: val1_attr2 = pib1; val2_attr2 = pib2; break;
        case 4: val1_attr2 = npt1; val2_attr2 = npt2; break;
        case 5: val1_attr2 = dens1; val2_attr2 = dens2; menorVence2 = 1; break; // utilizado para calcular corretamente a densidade
        default: printf("Atributo inválido!\n"); return 1;
    }

    // Comparação do primeiro atributo
    int resultado1;
    if (menorVence1) { // utilizado para calcular corretamente a densidade
        if (val1_attr1 < val2_attr1) resultado1 = 1;
        else if (val2_attr1 < val1_attr1) resultado1 = 2;
        else resultado1 = 0;
    } else {
        if (val1_attr1 > val2_attr1) resultado1 = 1;
        else if (val2_attr1 > val1_attr1) resultado1 = 2;
        else resultado1 = 0;
    }

    // Comparação do segundo atributo
    int resultado2;
    if (menorVence2) { // utilizado para calcular corretamente a densidade
        if (val1_attr2 < val2_attr2) resultado2 = 1;
        else if (val2_attr2 < val1_attr2) resultado2 = 2;
        else resultado2 = 0;
    } else {
        if (val1_attr2 > val2_attr2) resultado2 = 1;
        else if (val2_attr2 > val1_attr2) resultado2 = 2;
        else resultado2 = 0;
    }

    // Contabiliza pontos (usar as variáveis já declaradas no início)
    if (resultado1 == 1) pontos1++; else if (resultado1 == 2) pontos2++;
    if (resultado2 == 1) pontos1++; else if (resultado2 == 2) pontos2++;

    // Mostrar os valores comparados
    printf("\n=== Comparações ===\n");

    // Para o primeiro atributo
    char *nomeAtr1;
    switch (atributo1) {
        case 1: nomeAtr1 = "Área (km²)"; break;
        case 2: nomeAtr1 = "População"; break;
        case 3: nomeAtr1 = "PIB (R$)"; break;
        case 4: nomeAtr1 = "Pontos Turísticos"; break;
        case 5: nomeAtr1 = "Densidade (hab/km²)"; break;
        default: nomeAtr1 = "Atributo inválido"; break;
    }
    printf("%s: %s = %.2f | %s = %.2f\n", nomeAtr1, nome1, val1_attr1, nome2, val2_attr1);

    // Para o segundo atributo
    char *nomeAtr2;
    switch (atributo2) {
        case 1: nomeAtr2 = "Área (km²)"; break;
        case 2: nomeAtr2 = "População"; break;
        case 3: nomeAtr2 = "PIB (R$)"; break;
        case 4: nomeAtr2 = "Pontos Turísticos"; break;
        case 5: nomeAtr2 = "Densidade (hab/km²)"; break;
        default: nomeAtr2 = "Atributo inválido"; break;
    }
    printf("%s: %s = %.2f | %s = %.2f\n", nomeAtr2, nome1, val1_attr2, nome2, val2_attr2);

    // Resultado final
    printf("\nAgora vamos para nossos resultados:\n");
    printf("%s venceu %d comparação(ões)\n", nome1, pontos1);
    printf("%s venceu %d comparação(ões)\n", nome2, pontos2);

    if (pontos1 > pontos2) printf("Vitória de %s!\n", nome1);
    else if (pontos2 > pontos1) printf("Vitória de %s!\n", nome2);
    else printf("Empate!\n");

    return 0;
}
