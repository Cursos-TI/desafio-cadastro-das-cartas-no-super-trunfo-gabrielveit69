#include <stdio.h>

// Definição de procedimento para mover a torre
void moverTorre(int movimentos) {
    for (int i = 1; i <= movimentos; i++) {
        printf("Movimento %d: Torre se moveu uma casa para a direita.\n", i);
    }
}

// Definição de procedimento para mover a rainha
void moverRainha(int movimentos) {
    for (int i = 1; i <= movimentos; i++) {
        printf("Movimento %d: Rainha se moveu uma casa para a esquerda.\n", i);
    }
}

// Função recursiva para movimento do bispo
void moverBispoRecursivo(int movimentoAtual, int totalMovimentos) {
    if (movimentoAtual > totalMovimentos) {
        return; // Caso base da recursão
    }
    
    // Loop aninhado para simular movimento diagonal
    for (int vertical = 1; vertical <= movimentoAtual; vertical++) {
        for (int horizontal = 1; horizontal <= movimentoAtual; horizontal++) {
            // Só mostra quando vertical e horizontal forem iguais (movimento diagonal puro)
            if (vertical == horizontal && vertical == movimentoAtual) {
                printf("Movimento %d: Bispo se moveu %d casa(s) para cima e %d casa(s) para a direita.\n", 
                       movimentoAtual, movimentoAtual, movimentoAtual);
            }
        }
    }
    
    // Chamada recursiva
    moverBispoRecursivo(movimentoAtual + 1, totalMovimentos);
}

// Função wrapper para iniciar a recursão do bispo
void moverBispo(int movimentos) {
    moverBispoRecursivo(1, movimentos);
}

int main() {
    printf("Vamos simular movimentos num tabuleiro de xadrez!\n\n");
    printf("A primeira será a torre, ela irá se movimentar cinco casas para a direita.\n");

    // Chamada da função para mover a torre
    moverTorre(5);

    printf("\n");

    printf("Agora iremos movimentar nossa Rainha oito casas para a esquerda.\n");
    
    // Chamada da função para mover a rainha
    moverRainha(8);

    printf("\n");

    printf("Agora iremos movimentar nosso Bispo 5 casas na diagonal (cima-direita).\n");

    // Chamada da função recursiva para mover o bispo
    moverBispo(5);

    printf("\n");
    
    printf("Agora vamos movimentar nosso cavalo em L (2 cima + 1 direita):\n");

    // Movimento único do cavalo com loops aninhados
    int passo = 1;
    
    // Loop externo para movimento vertical (2 casas para cima)
    for (int vertical = 1; vertical <= 2; vertical++) {
        printf("Movimento %d: Cavalo se moveu uma casa para cima.\n", passo);
        passo++;
        
        // Loop interno para movimento horizontal (1 casa para direita)
        for (int horizontal = 1; horizontal <= 1; horizontal++) {
            // Usando break para garantir que só execute uma vez
            if (vertical == 2) {
                printf("Movimento %d: Cavalo se moveu uma casa para a direita.\n", passo);
                passo++;
                break;
            }
        }
    }
    
    return 0;
}