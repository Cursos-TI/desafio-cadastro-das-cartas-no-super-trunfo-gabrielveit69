#include <stdio.h>

#define TAM 10
#define NAVIO 3
#define AGUA 0
#define TAM_NAVIO 3

int main() {
    int tabuleiro[TAM][TAM];
    
    // 1. Inicializa tabuleiro com água (0)
    for(int i = 0; i < TAM; i++) {
        for(int j = 0; j < TAM; j++) {
            tabuleiro[i][j] = AGUA;
        }
    }
    
    // 2. Vetores para os navios
    int navio_horizontal[TAM_NAVIO] = {NAVIO, NAVIO, NAVIO};
    int navio_vertical[TAM_NAVIO]   = {NAVIO, NAVIO, NAVIO};
    int navio_diagonal[TAM_NAVIO]   = {NAVIO, NAVIO, NAVIO};
    int navio_diagonal2[TAM_NAVIO]  = {NAVIO, NAVIO, NAVIO};
    
    // 3. Posiciona navio horizontal
    for(int j = 0; j < TAM_NAVIO; j++) {
        tabuleiro[1][1 + j] = navio_horizontal[j];
    }
    
    // 4. Posiciona navio vertical 
    for(int i = 0; i < TAM_NAVIO; i++) {
        tabuleiro[6 + i][8] = navio_vertical[i];
    }

    // 5. Posiciona navio diagonal
    for(int i = 0; i < TAM_NAVIO; i++) {
        tabuleiro[4 + i][4 + i] = navio_diagonal[i];
    }

    // 6. Posiciona navio diagonal2
    for(int i = 0; i < TAM_NAVIO; i++) {
        tabuleiro[9 - i][0 + i] = navio_diagonal2[i];
    }
    
    // 7. Exibe o tabuleiro
    printf("Tabuleiro de Batalha Naval:\n");
    for(int i = 0; i < TAM; i++) {
        for(int j = 0; j < TAM; j++) {
            printf("%d ", tabuleiro[i][j]);
        }
        printf("\n");
    }
    
    return 0;
}
