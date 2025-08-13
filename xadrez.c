#include <stdio.h>

int main() {
    int i = 0;

    // Movimentação da torre (5 casas para direita)
    printf("Movimentação da Torre:\n");
    
    for (i = 0; i < 5; i++) {   
        printf("Direita\n");
    }

    // Movimentação da rainha (8 casas para a esquerda)
    printf("Movimentação da Rainha:\n");
   
    i = 0; // reinicia o contador
    while (i < 8) {
        printf("Esquerda\n");
        i++;
    }
    
    // Movimentação do bispo( 5 casas na diagonal para cima e à direita)
    printf("Movimentação do Bispo:\n");

     i = 0; 
    do {
      printf("Cima Direita\n");
      i++;

    }while (i < 5);

    return 0;
}
