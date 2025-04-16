#include <stdio.h>

int main() {
    printf("*** XADREZ ***\n\n");
    // Movimento da Torre
    printf("Movimento da Torre:\n");
    for (int i = 0; i < 5; i++) {
        printf("Direita\n");
    }

    // Movimento do Bispo
    printf("\nMovimento do Bispo:\n");
    int bispo = 0;
    while (bispo < 5) {
        printf("Cima e Direita\n");
        bispo++;
    }

    // Movimento da Rainha
    
    printf("\nMovimento da Rainha:\n");
    int rainha = 0;
    do {
        printf("Esquerda\n");
        rainha++;
    } while (rainha < 8);

    printf("\n*** XADREZ ***\n");

    return 0;
}

