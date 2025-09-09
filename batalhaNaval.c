#include <stdio.h>

// Desafio Batalha Naval - Nível Novato
// O objetivo é posicionar dois navios (um horizontal e um vertical)
// e exibir suas coordenadas no console.

int main() {
    // --- 1. Entrada de Dados (Valores inseridos manualmente no código) ---
    // Conforme o desafio, não pedimos dados ao usuário, definimos aqui.

    // Definindo o primeiro navio (Horizontal)
    // Este navio terá 3 partes.
    // Posição inicial: (linha 2, coluna 1)
    int navio1_linha_inicial = 2;
    int navio1_coluna_inicial = 1;
    int navio1_tamanho = 3;

    // Definindo o segundo navio (Vertical)
    // Este navio terá 4 partes.
    // Posição inicial: (linha 4, coluna 5)
    int navio2_linha_inicial = 4;
    int navio2_coluna_inicial = 5;
    int navio2_tamanho = 4;


    // --- 2. Exibição de Coordenadas ---
    // O sistema deve exibir as coordenadas de cada parte dos navios.

    printf("--- Coordenadas dos Navios Posicionados ---\n\n");

    // Exibindo coordenadas do Navio 1 (Horizontal)
    // Como ele é horizontal, a linha não muda, apenas a coluna.
    printf("Navio 1 (Horizontal - %d partes):\n", navio1_tamanho);
    for (int i = 0; i < navio1_tamanho; i++) {
        // A linha é constante, a coluna aumenta a cada parte do navio.
        int linha_atual = navio1_linha_inicial;
        int coluna_atual = navio1_coluna_inicial + i;
        printf("  - Parte %d: [Linha: %d, Coluna: %d]\n", i + 1, linha_atual, coluna_atual);
    }

    printf("\n"); // Adiciona um espaço para melhor visualização

    // Exibindo coordenadas do Navio 2 (Vertical)
    // Como ele é vertical, a coluna não muda, apenas a linha.
    printf("Navio 2 (Vertical - %d partes):\n", navio2_tamanho);
    for (int i = 0; i < navio2_tamanho; i++) {
        // A coluna é constante, a linha aumenta a cada parte do navio.
        int linha_atual = navio2_linha_inicial + i;
        int coluna_atual = navio2_coluna_inicial;
        printf("  - Parte %d: [Linha: %d, Coluna: %d]\n", i + 1, linha_atual, coluna_atual);
    }

    return 0;
}
