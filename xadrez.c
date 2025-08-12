
#include <stdio.h>

int main() {
    // ========================
    // TORRE - Movimento horizontal (for)
    // ========================
    int movimentoTorre = 5; // casas para a direita
    printf("=== Movimento da Torre ===\n");
    for (int i = 1; i <= movimentoTorre; i++) {
        printf("Direita\n");
    }

    // ========================
    // BISPO - Movimento diagonal (while)
    // ========================
    int movimentoBispo = 5; // casas para cima e direita
    int contador = 1;
    printf("\n=== Movimento do Bispo ===\n");
    while (contador <= movimentoBispo) {
        printf("Cima Direita\n");
        contador++;
    }

    // ========================
    // RAINHA - Movimento horizontal (do-while)
    // ========================
    int movimentoRainha = 8; // casas para a esquerda
    int passos = 1;
    printf("\n=== Movimento da Rainha ===\n");
    do {
        printf("Esquerda\n");
        passos++;
    } while (passos <= movimentoRainha);

    return 0;
}
