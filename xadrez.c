#include <stdio.h>

// Desafio de Xadrez - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de movimentação das peças de xadrez.
// O objetivo é utilizar estruturas de repetição e funções para determinar os limites de movimentação dentro do jogo.



int main() {
    // Constantes de movimento
    const int movimentoTorre = 5;
    const int movimentoBispo = 5;
    const int movimentoRainha = 8;

    int i;

    //Movimento da TORRE – 5 casas para a direita (usando FOR)
    printf("Movimento da Torre:\n");
    for (i = 1; i <= movimentoTorre; i++) {
        printf("Direita\n");
    }

    //Movimento do BISPO – 5 casas na diagonal (Cima + Direita) (usando WHILE)
    printf("\nMovimento do Bispo:\n");
    i = 1;
    while (i <= movimentoBispo) {
        printf("Cima Direita\n");
        i++;
    }

    //Movimento da RAINHA – 8 casas para a esquerda (usando DO-WHILE)
    printf("\nMovimento da Rainha:\n");
    i = 1;
    do {
        printf("Esquerda\n");
        i++;
    } while (i <= movimentoRainha);


    // Movimento do CAVALO – 2 para baixo, 1 para esquerda (usando FOR + WHILE)
    printf("\nMovimento do Cavalo:\n");

    int passosVerticais = 2;   // Duas casas para baixo
    int passosLaterais = 1;    // Uma casa para a esquerda
    int j = 0;

    // Loop externo: movimento vertical (FOR)
    for (i = 0; i < passosVerticais; i++) {
        printf("Baixo\n");
    }

    // Loop interno: movimento lateral (WHILE)
    while (j < passosLaterais) {
        printf("Esquerda\n");
        j++;
    }


    return 0;
}

