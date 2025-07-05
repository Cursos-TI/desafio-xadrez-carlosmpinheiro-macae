#include <stdio.h>

// Desafio de Xadrez - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de movimentação das peças de xadrez.
// O objetivo é utilizar estruturas de repetição e funções para determinar os limites de movimentação dentro do jogo.

#include <stdio.h>

// Função recursiva para a Torre (5 Direita)
void moverTorre(int passos) {
    if (passos == 0) return;
    printf("Direita\n");
    moverTorre(passos - 1);
}

// Função recursiva para a Rainha (8 Esquerda)
void moverRainha(int passos) {
    if (passos == 0) return;
    printf("Esquerda\n");
    moverRainha(passos - 1);
}

// Função recursiva + loop aninhado para o Bispo (5 Cima Direita)
void moverBispo(int passos) {
    if (passos == 0) return;

    for (int vertical = 0; vertical < 1; vertical++) {
        for (int horizontal = 0; horizontal < 1; horizontal++) {
            printf("Cima Direita\n");
        }
    }

    moverBispo(passos - 1);
}

// Cavalo: loops com múltiplas variáveis e condições
void moverCavalo() {
    printf("\nMovimento do Cavalo:\n");

    int cima = 0, direita = 0;

    for (; cima <= 2 && direita <= 1; cima++) {
        if (cima < 2) {
            printf("Cima\n");
        } else {
            while (direita < 1) {
                printf("Direita\n");
                direita++;
            }
        }
    }
}


int main() {
    printf("Movimento da Torre:\n");
    moverTorre(5);

    printf("\nMovimento do Bispo:\n");
    moverBispo(5);

    printf("\nMovimento da Rainha:\n");
    moverRainha(8);

    moverCavalo();

    return 0;
}


