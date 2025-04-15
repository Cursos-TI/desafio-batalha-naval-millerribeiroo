#include <stdio.h>

// Desafio Batalha Naval - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de Batalha Naval.
// Siga os comentários para implementar cada parte do desafio.

int main() {
    // Inicializa o tabuleiro 10x10 com '0' (representando água)
    char tabuleiro[10][10];
    for (int i = 0; i < 10; i++) {
        for (int j = 0; j < 10; j++) {
            tabuleiro[i][j] = '0';
        }
    }

    // Define os navios
    char navioHorizontal[3] = {'X', 'X', 'X'}; // Navio horizontal com 3 posições
    char navioVertical[3] = {'X', 'X', 'X'};   // Navio vertical com 3 posições

    // Posiciona o navio horizontal na linha 3, começando na coluna 5
    int linhaHorizontal = 2;
    int colunaInicialHorizontal = 4;
    for (int i = 0; i < 3; i++) {
        tabuleiro[linhaHorizontal][colunaInicialHorizontal + i] = navioHorizontal[i];
    }

    // Posiciona o navio vertical na coluna 7, começando na linha 6
    int colunaVertical = 6;
    int linhaInicialVertical = 5;
    for (int i = 0; i < 3; i++) {
        tabuleiro[linhaInicialVertical + i][colunaVertical] = navioVertical[i];
    }

    // Exibe o tabuleiro com nomes das colunas e linhas
    printf("   A B C D E F G H I J\n"); // Cabeçalho das colunas
    for (int i = 0; i < 10; i++) {
        printf("%2d ", i + 1); // Número da linha
        for (int j = 0; j < 10; j++) {
            printf("%c ", tabuleiro[i][j]);
        }
        printf("\n");
    }

    // Nível Aventureiro - Expansão do Tabuleiro e Posicionamento Diagonal
    // Sugestão: Expanda o tabuleiro para uma matriz 10x10.
    // Sugestão: Posicione quatro navios no tabuleiro, incluindo dois na diagonal.
    // Sugestão: Exiba o tabuleiro completo no console, mostrando 0 para posições vazias e 3 para posições ocupadas.

    // Nível Mestre - Habilidades Especiais com Matrizes
    // Sugestão: Crie matrizes para representar habilidades especiais como cone, cruz, e octaedro.
    // Sugestão: Utilize estruturas de repetição aninhadas para preencher as áreas afetadas por essas habilidades no tabuleiro.
    // Sugestão: Exiba o tabuleiro com as áreas afetadas, utilizando 0 para áreas não afetadas e 1 para áreas atingidas.

    // Exemplos de exibição das habilidades:
    // Exemplo para habilidade em cone:
    // 0 0 1 0 0
    // 0 1 1 1 0
    // 1 1 1 1 1
    
    // Exemplo para habilidade em octaedro:
    // 0 0 1 0 0
    // 0 1 1 1 0
    // 0 0 1 0 0

    // Exemplo para habilidade em cruz:
    // 0 0 1 0 0
    // 1 1 1 1 1
    // 0 0 1 0 0

    return 0;
}
