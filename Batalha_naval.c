#include <stdio.h>

int main() {
    int tabuleiro[10][10] = {0};
    char letras[] = {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J'};

    // Posicionar navio horizontal
    tabuleiro[2][4] = tabuleiro[2][5] = tabuleiro[2][6] = 3;

    // Posicionar navio vertical
    tabuleiro[6][7] = tabuleiro[7][7] = tabuleiro[8][7] = 3;

    // Exibir tabuleiro
    printf("  TABULEIRO BATALHA NAVAL\n");
    printf("   ");
    for (int i = 0; i < 10; i++) {
        printf("%c ", letras[i]);
    }
    printf("\n");
    for (int i = 0; i < 10; i++) {
        printf("%d ", i + 1);
        for (int j = 0; j < 10; j++) {
            printf("%d ", tabuleiro[i][j]);
        }
        printf("\n");
    }

    return 0;
}