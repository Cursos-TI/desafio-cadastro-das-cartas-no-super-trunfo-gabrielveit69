#include <stdio.h>

int main() {
    int tabuleiro[10][10];
    
    // 1. Inicializa tabuleiro com água (0)
    for(int i = 0; i < 10; i++) {
        for(int j = 0; j < 10; j++) {
            tabuleiro[i][j] = 0;
        }
    }
    
    // 2. Vetores para os navios
    int navio_horizontal[3] = {3, 3, 3};
    int navio_vertical[3] = {3, 3, 3};
    
    // 3. Posiciona navio horizontal (linha 1, colunas 1 a 3)
    for(int j = 0; j < 3; j++) {
        tabuleiro[1][1 + j] = navio_horizontal[j];
    }
    
    // 4. Posiciona navio vertical (linha 6 a 8, coluna 8)
    for(int i = 0; i < 3; i++) {
        tabuleiro[6 + i][8] = navio_vertical[i];
    }
    
    // 5. Exibe o tabuleiro
    printf("Tabuleiro de Batalha Naval:\n");
    for(int i = 0; i < 10; i++) {
        for(int j = 0; j < 10; j++) {
            printf("%d ", tabuleiro[i][j]);
        }
        printf("\n");
    }
    
    return 0;
}