#include <stdio.h>
#include <stdlib.h>

// Desafio Batalha Naval - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de Batalha Naval.

int main() {
    // Inicializa o tabuleiro 10x10 com '0' (representando água)
    char tabuleiro[10][10];
    for (int i = 0; i < 10; i++) {
        for (int j = 0; j < 10; j++) {
            tabuleiro[i][j] = '0';
        }
    }

    printf("Desafio Novato e Aventureiro - Batalha Naval:\n\n");

    // Nível Aventureiro - Posicionamento Diagonal
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
    printf("Desafio Mestre - Habilidades Especiais:\n\n");
    printf("Exemplos de exibição - Habilidade em Cone:\n");

    char cone[10][10];
    for (int i = 0; i < 10; i++) {
        for (int j = 0; j < 10; j++) {
            cone[i][j] = '0';
        }
    }

    // Exemplo de habilidade em cone
    int centroX = 4; // Linha central do cone (base)
    int centroY = 2; // Coluna central do cone (base)

    // Preenche o cone no tabuleiro
    for (int i = 0; i < 3; i++) { // Altura do cone
        for (int j = -i; j <= i; j++) { // Largura do cone
            int x = centroX + i; // Calcula a linha
            int y = centroY + j; // Calcula a coluna
            if (x >= 0 && x < 10 && y >= 0 && y < 10) { // Garante que está dentro dos limites
                cone[x][y] = 'X'; // Marca a área afetada
            }
        }
    }

    // Exibe o tabuleiro com nomes das colunas e linhas
    printf("   A B C D E F G H I J\n"); // Cabeçalho das colunas
    for (int i = 0; i < 10; i++) {
        printf("%2d ", i + 1); // Número da linha
        for (int j = 0; j < 10; j++) {
            printf("%c ", cone[i][j]);
        }
        printf("\n");
    }
    printf("\n\n");



    // Exemplo de habilidade em cruz
    printf("Exemplos de exibição - Habilidade em Cruz:\n");
    int centroX_cruz = 4; // Linha central da cruz
    int centroY_cruz = 2; // Coluna central da cruz
    char cruz[10][10];

    for (int i = 0; i < 10; i++) {
        for (int j = 0; j < 10; j++) {
            cruz[i][j] = '0';
        }
    }

    // Preenche a cruz no tabuleiro
    for (int i = -2; i <= 2; i++) { // Alcance de 1 linha acima e abaixo do centro
        if (centroX_cruz + i >= 0 && centroX_cruz + i < 10) { // Garante que está dentro dos limites
            cruz[centroX_cruz + i][centroY_cruz] = 'X'; // Coluna central
        }
    }
    for (int j = -2; j <= 2; j++) { // Alcance de 2 colunas à esquerda e à direita do centro
        if (centroY_cruz + j >= 0 && centroY_cruz + j < 10) { // Garante que está dentro dos limites
            cruz[centroX_cruz][centroY_cruz + j] = 'X'; // Linha central
        }
    }

    // Exibe o tabuleiro com nomes das colunas e linhas
    printf("   A B C D E F G H I J\n"); // Cabeçalho das colunas
    for (int i = 0; i < 10; i++) {
        printf("%2d ", i + 1); // Número da linha
        for (int j = 0; j < 10; j++) {
            printf("%c ", cruz[i][j]);
        }
        printf("\n");
    }
    printf("\n\n");


    // Exempo de Habilidade em Losango:
    printf("Exemplos de exibição - Habilidade em Losango:\n");
    int centroX_octa = 5; // Linha central do losango
    int centroY_octa = 2; // Coluna central do losango
    char losango[10][10];
    for (int i = 0; i < 10; i++) {
        for (int j = 0; j < 10; j++) {
            losango[i][j] = '0'; // Representa água ou célula vazia
        }
    }

    // Preenche o losango no tabuleiro (parte superior e inferior)
    for (int i = -2; i <= 2; i++) { // Altura total do losango (de -2 a 2 em relação ao centro)
        int largura = 2 - abs(i); // Calcula a largura com base na distância do centro
        for (int j = -largura; j <= largura; j++) { // Largura do losango
            int x = centroX_octa + i; // Calcula a linha (acima e abaixo do centro)
            int y = centroY_octa + j; // Calcula a coluna
            if (x >= 0 && x < 10 && y >= 0 && y < 10) { // Garante que está dentro dos limites
                losango[x][y] = 'X'; // Marca a área afetada
            }
        }
    }

    // Exibe o tabuleiro com nomes das colunas e linhas
    printf("   A B C D E F G H I J\n"); // Cabeçalho das colunas
    for (int i = 0; i < 10; i++) {
        printf("%2d ", i + 1); // Número da linha
        for (int j = 0; j < 10; j++) {
            printf("%c ", losango[i][j]);
        }
        printf("\n");
    }
    printf("\n\n");


    return 0;
}
