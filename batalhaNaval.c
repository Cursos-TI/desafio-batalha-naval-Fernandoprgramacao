#include <stdio.h>
#include <stdlib.h>
// Desafio Batalha Naval - MateCheck
// Este código implementa o sistema de Batalha Naval com níveis Novato, Aventureiro e Mestre.

#define TAM 10

// Função para exibir qualquer matriz
void exibirMatriz(int matriz[TAM][TAM]) {
    for (int i = 0; i < TAM; i++) {
        for (int j = 0; j < TAM; j++) {
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }
}

int main() {
    int tabuleiro[TAM][TAM] = {0};

    // Nível Novato - Posicionamento de 2 navios (um horizontal e um vertical)
    // Navio horizontal na linha 0, colunas 0 a 2
    for (int j = 0; j < 3; j++) {
        tabuleiro[0][j] = 3;
        printf("Navio horizontal: (%d, %d)\n", 0, j);
    }

    // Navio vertical na coluna 5, linhas 1 a 3
    for (int i = 1; i < 4; i++) {
        tabuleiro[i][5] = 3;
        printf("Navio vertical: (%d, %d)\n", i, 5);
    }

    // Nível Aventureiro - Adicionando 2 navios diagonais
    // Diagonal principal
    for (int i = 0; i < 3; i++) {
        tabuleiro[5 + i][5 + i] = 3;
        printf("Navio diagonal principal: (%d, %d)\n", 5 + i, 5 + i);
    }

    // Diagonal secundária
    for (int i = 0; i < 3; i++) {
        tabuleiro[7 - i][2 + i] = 3;
        printf("Navio diagonal secundária: (%d, %d)\n", 7 - i, 2 + i);
    }

    printf("\nTabuleiro com navios:\n");
    exibirMatriz(tabuleiro);

    // Nível Mestre - Habilidades Especiais

    // Tamanho da matriz de habilidade (5x5)
    int habilidade[5][5];

    // Cone: forma piramidal com vértice no topo
    printf("\nHabilidade: Cone\n");
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            if (j >= 2 - i && j <= 2 + i) {
                habilidade[i][j] = 1;
            } else {
                habilidade[i][j] = 0;
            }
        }
    }

    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            printf("%d ", habilidade[i][j]);
        }
        printf("\n");
    }

    // Cruz: linha e coluna centrais
    printf("\nHabilidade: Cruz\n");
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            if (i == 2 || j == 2) {
                habilidade[i][j] = 1;
            } else {
                habilidade[i][j] = 0;
            }
        }
    }

    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            printf("%d ", habilidade[i][j]);
        }
        printf("\n");
    }

    // Octaedro (losango)
    printf("\nHabilidade: Octaedro\n");
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            if (abs(i - 2) + abs(j - 2) <= 2) {
                habilidade[i][j] = 1;
            } else {
                habilidade[i][j] = 0;
            }
        }
    }

    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            printf("%d ", habilidade[i][j]);
        }
        printf("\n");
    }

    return 0;
}
