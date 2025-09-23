#include <stdio.h>

#define TAM 10
#define NAVIO 3
#define AGUA 0
#define HABILIDADE 5
#define TAM_HAB 5

int main() {
    int tabuleiro[TAM][TAM];
    
    // Inicializa tabuleiro com água (0)
    for(int i = 0; i < TAM; i++) {
        for(int j = 0; j < TAM; j++) {
            tabuleiro[i][j] = AGUA;
        }
    }
    
    // Posiciona navio horizontal na linha superior
    tabuleiro[0][3] = NAVIO;
    tabuleiro[0][4] = NAVIO; 
    tabuleiro[0][5] = NAVIO;
    
    // Posiciona navio vertical no canto inferior direito
    tabuleiro[7][8] = NAVIO;
    tabuleiro[8][8] = NAVIO;
    tabuleiro[9][8] = NAVIO;
    
    // Posiciona navio diagonal 1 na centro-esquerda
    tabuleiro[4][2] = NAVIO;
    tabuleiro[5][3] = NAVIO;
    tabuleiro[6][4] = NAVIO;
    
    // Posiciona navio diagonal 2 na centro-direita
    tabuleiro[5][7] = NAVIO;
    tabuleiro[6][6] = NAVIO;
    tabuleiro[7][5] = NAVIO;
    
    // Matrizes para as habilidades
    int cone[TAM_HAB][TAM_HAB] = {0};
    int cruz[TAM_HAB][TAM_HAB] = {0};
    int octaedro[TAM_HAB][TAM_HAB] = {0};
    
    // Criar matriz do Cone (formato triangular apontando para baixo)
    for(int i = 0; i < TAM_HAB; i++) {
        for(int j = 0; j < TAM_HAB; j++) {
            if(i == 0 && j == 2) {
                cone[i][j] = 1;
            }
            else if(i == 1 && j >= 1 && j <= 3) {
                cone[i][j] = 1;
            }
            else if(i == 2) {
                cone[i][j] = 1;
            }
        }
    }
    
    // Criar matriz da Cruz (cruz central)
    for(int i = 0; i < TAM_HAB; i++) {
        for(int j = 0; j < TAM_HAB; j++) {
            if(i == 2 || j == 2) {
                cruz[i][j] = 1;
            }
        }
    }
    
    // Criar matriz do Octaedro (formato de losango)
    for(int i = 0; i < TAM_HAB; i++) {
        for(int j = 0; j < TAM_HAB; j++) {
            if(i == 0 && j == 2) {
                octaedro[i][j] = 1;
            }
            else if(i == 1 && (j == 1 || j == 2 || j == 3)) {
                octaedro[i][j] = 1;
            }
            else if(i == 2 && (j == 0 || j == 1 || j == 2 || j == 3 || j == 4)) {
                octaedro[i][j] = 1;
            }
            else if(i == 3 && (j == 1 || j == 2 || j == 3)) {
                octaedro[i][j] = 1;
            }
            else if(i == 4 && j == 2) {
                octaedro[i][j] = 1;
            }
        }
    }
    
    // Pontos de origem para as habilidades
    int cone_linha = 1, cone_coluna = 0;
    int cruz_linha = 0, cruz_coluna = 5;
    int octaedro_linha = 5, octaedro_coluna = 0;
    
    // Aplicar habilidade Cone no tabuleiro
    for(int i = 0; i < TAM_HAB; i++) {
        for(int j = 0; j < TAM_HAB; j++) {
            int linha_tab = cone_linha + i;
            int coluna_tab = cone_coluna + j;
            
            if(linha_tab < TAM && coluna_tab < TAM) {
                if(cone[i][j] == 1 && tabuleiro[linha_tab][coluna_tab] == AGUA) {
                    tabuleiro[linha_tab][coluna_tab] = HABILIDADE;
                }
            }
        }
    }
    
    // Aplicar habilidade Cruz no tabuleiro
    for(int i = 0; i < TAM_HAB; i++) {
        for(int j = 0; j < TAM_HAB; j++) {
            int linha_tab = cruz_linha + i;
            int coluna_tab = cruz_coluna + j;
            
            if(linha_tab < TAM && coluna_tab < TAM) {
                if(cruz[i][j] == 1 && tabuleiro[linha_tab][coluna_tab] == AGUA) {
                    tabuleiro[linha_tab][coluna_tab] = HABILIDADE;
                }
            }
        }
    }
    
    // Aplicar habilidade Octaedro no tabuleiro
    for(int i = 0; i < TAM_HAB; i++) {
        for(int j = 0; j < TAM_HAB; j++) {
            int linha_tab = octaedro_linha + i;
            int coluna_tab = octaedro_coluna + j;
            
            if(linha_tab < TAM && coluna_tab < TAM) {
                if(octaedro[i][j] == 1 && tabuleiro[linha_tab][coluna_tab] == AGUA) {
                    tabuleiro[linha_tab][coluna_tab] = HABILIDADE;
                }
            }
        }
    }
    
    // Exibe o tabuleiro
    printf("Tabuleiro de Batalha Naval com Habilidades:\n");
    printf("Legenda: 0=Agua, 3=Navio, 5=Habilidade\n\n");
    
    for(int i = 0; i < TAM; i++) {
        for(int j = 0; j < TAM; j++) {
            printf("%d ", tabuleiro[i][j]);
        }
        printf("\n");
    }
    
    // Exibe as matrizes das habilidades separadamente
    printf("\n=== MATRIZES DAS HABILIDADES (5x5) ===\n");
    
    printf("\nCone:\n");
    for(int i = 0; i < TAM_HAB; i++) {
        for(int j = 0; j < TAM_HAB; j++) {
            printf("%d ", cone[i][j]);
        }
        printf("\n");
    }
    
    printf("\nCruz:\n");
    for(int i = 0; i < TAM_HAB; i++) {
        for(int j = 0; j < TAM_HAB; j++) {
            printf("%d ", cruz[i][j]);
        }
        printf("\n");
    }
    
    printf("\nOctaedro:\n");
    for(int i = 0; i < TAM_HAB; i++) {
        for(int j = 0; j < TAM_HAB; j++) {
            printf("%d ", octaedro[i][j]);
        }
        printf("\n");
    }
    
    return 0;
}