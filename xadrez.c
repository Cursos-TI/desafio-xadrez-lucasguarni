#include <stdio.h>
#include <stdbool.h>

// Desafio de Xadrez - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de movimentação das peças de xadrez.
// O objetivo é utilizar estruturas de repetição e funções para determinar os limites de movimentação dentro do jogo.

// Movimentação do Bispo usando loops aninhados
void moveBishop(int startX, int startY, int steps) {
    for (int i = 1; i <= steps; i++) { // Loop para o número de passos
        for (int j = 1; j <= 1; j++) { // Loop interno para simular a diagonal
            printf("Movimento do Bispo: Casa (%d, %d)\n", startX + i, startY + i);
        }
    }
}

// Função recursiva para movimentação da Torre
void moveTower(int x, int steps) {
    if (steps == 0) return;
    printf("Movimento da Torre: Casa (%d, %d)\n", x + 1, 1);
    moveTower(x + 1, steps - 1);
}

// Função recursiva para movimentação da Rainha
void moveQueen(int x, int steps) {
    if (steps == 0) return;
    printf("Movimento da Rainha: Casa (%d, %d)\n", x - 1, 1);
    moveQueen(x - 1, steps - 1);
}

/*
 * OBS: Fiz dessa forma para atender a anunciado, mas existe uma forma mais simples de fazer isso com apenas uma variável de controle e um loop.
 * Movimentação do Cavalo usando loops continue e break
 */
void moveKnight(int startX, int startY) {
    int topMove = 1;
    bool finished = false;
    while (!finished) {
        if (topMove == 1) {
            printf("Movimento do Cavalo: Casa (%d, %d)\n", startX, startY + topMove);
            topMove++;
            continue;
        } 
        
        printf("Movimento do Cavalo: Casa (%d, %d)\n", startX, startY + topMove);
        for (int rightMove = 1; rightMove <= 1; rightMove++) {
            printf("Movimento do Cavalo: Casa (%d, %d)\n", startX + rightMove, startY + topMove);
        }
        // finished = true;
        // Esta comentado a atribuição para true da variavel finished propositalmente para poder utilizar o break conforme pedido no exercicio.

        // Para sair do loop, se não o mesmo ficaria em loop infinito.
        break;

    }
}


int main() {

    printf("Desafio de Xadrez - MateCheck\n");
    printf("Movimentação das Peças\n\n");

    // Movimentação do Bispo
    printf("Movimento do Bispo: 5 Casas para a Diagonal Superior Direita\n");
    moveBishop(1, 1, 5);

    // Movimentação da Torre
    printf("\nMovimento da Torre: 5 Casas para a Direita\n");
    moveTower(1, 5);

    // Movimentação da Rainha
    printf("\nMovimento da Rainha: 8 Casas para a Esquerda\n");
    moveQueen(9, 8);

    // Movimentação do Cavalo
    printf("\nMovimento do Cavalo: 1 vez em L para cima à direita\n");
    moveKnight(1, 1);

    return 0;
}
