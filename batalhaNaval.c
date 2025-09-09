#include <stdio.h>

int main() {
 
    int navio1_linha_inicial = 2;
    int navio1_coluna_inicial = 1;
    int navio1_tamanho = 3;

   
    int navio2_linha_inicial = 4;
    int navio2_coluna_inicial = 5;
    int navio2_tamanho = 4;




    printf("--- Coordenadas dos Navios Posicionados ---\n\n");


    printf("Navio 1 (Horizontal - %d partes):\n", navio1_tamanho);
    for (int i = 0; i < navio1_tamanho; i++) {
    
        int linha_atual = navio1_linha_inicial;
        int coluna_atual = navio1_coluna_inicial + i;
        printf("  - Parte %d: [Linha: %d, Coluna: %d]\n", i + 1, linha_atual, coluna_atual);
    }

    printf("\n"); 


    printf("Navio 2 (Vertical - %d partes):\n", navio2_tamanho);
    for (int i = 0; i < navio2_tamanho; i++) {
        
        int linha_atual = navio2_linha_inicial + i;
        int coluna_atual = navio2_coluna_inicial;
        printf("  - Parte %d: [Linha: %d, Coluna: %d]\n", i + 1, linha_atual, coluna_atual);
    }

    return 0;
}


int main() {
    

    return 0;
}
