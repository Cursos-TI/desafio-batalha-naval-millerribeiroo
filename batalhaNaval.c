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

    printf("Desafio Batalha Naval:\n\n");

    // Nível Aventureiro - Posicionamento Diagonal
    // Sugestão: Posicione quatro navios no tabuleiro, incluindo dois na diagonal.

    char navioHorizontal[3] = {'X', 'X', 'X'}; // Navio horizontal com 3 posições
    char navioVertical[3] = {'X', 'X', 'X'};   // Navio vertical com 3 posições

    // Posiciona o navio horizontal na linha 3, começando na coluna E
    int linhaHorizontal = 2;
    int colunaInicialHorizontal = 4;
    for (int i = 0; i < 3; i++) {
        tabuleiro[linhaHorizontal][colunaInicialHorizontal + i] = navioHorizontal[i];
    }

    // Posiciona o navio vertical na coluna G, começando na linha 6
    int colunaVertical = 6;
    int linhaInicialVertical = 5;
    for (int i = 0; i < 3; i++) {
        tabuleiro[linhaInicialVertical + i][colunaVertical] = navioVertical[i];
    }

    // Posiciona o navio na diagonal da linha 1, coluna A até a linha 3, coluna C
    for (int i = 0; i < 3; i++) {
        tabuleiro[i][i] = 'X'; 
    }

    // Posiciona outro navio na diagonal da linha 9, coluna C até a linha 7, coluna E
    for (int i = 0; i < 3; i++) {
        tabuleiro[8 - i][2 + i] = 'X';
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


printf("\n\n");
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
