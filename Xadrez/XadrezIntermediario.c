#include <stdio.h>

int main() {

        int rainha = 1, bispo = 1, cavalo = 1;  // Contadores para os movimentos das peças

        printf("Vamos simular movimentos num tabuleiro de xadrez!\n\n");
        printf("A primeira será a torre, ela irá se movimentar cinco casas para a direita.\n");

        // Loop for para 5 movimentos da torre
        for (int i = 1; i <= 5; i++) 
        {
            printf("Movimento %d: Torre se moveu uma casa para a direita.\n", i);
        }

        printf("\n");

        printf("Agora iremos movimentar nossa Rainha oito casas para a esquerda.\n");
        
        // Loop do-while para 8 movimentos da rainha
        do {
            printf("Movimento %d: Rainha se moveu uma casa para a esquerda.\n", rainha); 
            rainha++;
        } while (rainha <= 8);

        printf("\n");

        printf("Agora iremos movimentar nosso Bispo 5 casas para cima e para a direita.\n");

        // Loop while para 5 movimentos do bispo
        while (bispo <= 5) 
        {
            printf("Movimento %d: Bispo se moveu uma casa para cima e para a direita.\n", bispo);
            bispo++;
        }

         printf("\n");
        
        printf("Agora vamos movimentar nosso cavalo em L, ele irá se mover 2 casas para baixo e 1 para a esquerda.\n");

        // Loop while para 3 movimentos do cavalo
        while (cavalo--)
        {
            for (int i = 0; i < 2; i++) 
            {
                printf("Movimento %d: Cavalo se moveu uma casa para baixo.\n", 1 - cavalo + i);
            }
            printf("Movimento %d: Cavalo se moveu uma casa para a esquerda.\n", 3 - cavalo);
        }
         
        
    return 0;
}