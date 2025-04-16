#include <stdio.h>

// Desafio de Xadrez - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de movimentação das peças de xadrez.
// O objetivo é utilizar estruturas de repetição e funções para determinar os limites de movimentação dentro do jogo.

int main() {

    printf("Desafio de Xadrez - MateCheck\n");
    printf("Movimentação das Peças\n\n");

    // Nível Novato - Movimentação do Bispo
    printf("Movimento do Bispo: 5 Casas para a Diagonal Superior Direita\n");
    for (int i = 1; i <= 5; i++) {
        printf("Movimento %d: Casa (%d, %d)\n", i, 1 + i, 1 + i);
    }

    // Nível Novato - Movimentação da Torre
    printf("\nMovimento da Torre: 5 Casas para a Direita\n");
    int towerHouseMoveLimit = 5;
    int towerHouseMoveCount = 1;
    while (towerHouseMoveLimit >= towerHouseMoveCount) {
        printf("Movimento %d: Casa (%d, %d)\n", towerHouseMoveCount, 1 + towerHouseMoveCount, 1);
        towerHouseMoveCount++;
    }

    // Nível Novato - Movimentação da Rainha
    printf("\nMovimento da Rainha: 8 Casas para a Esquerda\n");
    int queenHouseMoveLimit = 8;
    int queenHouseMoveCount = 1;
    do {
        printf("Movimento %d: Casa (%d, %d)\n", queenHouseMoveCount, 1 + queenHouseMoveCount, 1);
        queenHouseMoveCount++;
    } while (queenHouseMoveLimit >= queenHouseMoveCount);

    return 0;
}
