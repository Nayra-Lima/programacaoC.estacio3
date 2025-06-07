#include <stdio.h>

int main() {
    // ----------------------------
    // Inicializando o tabuleiro 10x10 com água (0)
    // ----------------------------
    int tabuleiro[10][10];
    for (int linha = 0; linha < 10; linha++) {
        for (int coluna = 0; coluna < 10; coluna++) {
            tabuleiro[linha][coluna] = 0;
        }
    }

    // ----------------------------
    // Tamanho dos navios
    // ----------------------------
    int tamanhoNavio = 3;

    // ----------------------------
    // Posição inicial do navio horizontal
    // ----------------------------
    int linhaHorizontal = 2;  // Terceira linha (índice começa do 0)
    int colunaHorizontal = 4; // Quinta coluna

    // Verifica se o navio cabe na horizontal (coluna + tamanho <= 10)
    if (colunaHorizontal + tamanhoNavio <= 10) {
        for (int i = 0; i < tamanhoNavio; i++) {
            tabuleiro[linhaHorizontal][colunaHorizontal + i] = 3;
        }
    }

    // ----------------------------
    // Posição inicial do navio vertical
    // ----------------------------
    int linhaVertical = 5;    // Sexta linha
    int colunaVertical = 7;   // Oitava coluna

    // Verifica se o navio cabe na vertical (linha + tamanho <= 10)
    int podePosicionar = 1;
    for (int i = 0; i < tamanhoNavio; i++) {
        if (tabuleiro[linhaVertical + i][colunaVertical] != 0) {
            podePosicionar = 0;  // Já tem navio nessa posição
        }
    }

    if (linhaVertical + tamanhoNavio <= 10 && podePosicionar) {
        for (int i = 0; i < tamanhoNavio; i++) {
            tabuleiro[linhaVertical + i][colunaVertical] = 3;
        }
    }

    // ----------------------------
    // Exibindo o tabuleiro
    // ----------------------------
    printf("===== TABULEIRO DE BATALHA NAVAL =====\n\n");
    for (int linha = 0; linha < 10; linha++) {
        for (int coluna = 0; coluna < 10; coluna++) {
            printf("%d ", tabuleiro[linha][coluna]);
        }
        printf("\n");
    }

    return 0;
}