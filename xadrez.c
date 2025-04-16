#include <stdio.h>
#include <stdbool.h>

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

    /*
     * Nível Intermediário - Movimentação do Cavalo
     * O cavalo se move em forma de "L", ou seja, duas casas em uma direção e uma casa em outra direção.
     * Neste exemplo, o cavalo se moverá 2 casas para baixo e 1 casa para a esquerda.
     * A movimentação do cavalo é feita em duas etapas:
     * 1. Mover 2 casas para baixo (verticalmente)
     * 2. Mover 1 casa para a esquerda (horizontalmente)
     * A posição inicial do cavalo é (1, 1) e a movimentação será feita em relação a essa posição.
    */
    printf("\nMovimento do Cavalo: 1 Casa para a Esquerda e 2 Casas para Baixo\n");
    int knightMoveLeft = 1;
    for (int i = 1; i <= 2; i++) {
        while (knightMoveLeft <= 1) {
            printf("Movimento do Cavalo para esquerda: Casa (%d, %d)\n", knightMoveLeft + 1, i);
            knightMoveLeft++;
        }
        printf("Movimento do Cavalo para baixo: Casa (%d, %d)\n", knightMoveLeft, i + 1);
    }

    return 0;
}
