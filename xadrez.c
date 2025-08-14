#include <stdio.h>

int main() {
    int i, j ;

    // Movimentação da torre (5 casas para direita)
    printf("Movimentação da Torre:\n");
    
    for (i = 0; i < 5; i++) {   
        printf("Direita\n");
    }
     printf("\n");

    // Movimentação da rainha (8 casas para a esquerda)
    printf("Movimentação da Rainha:\n");
   
    i = 0; // reinicia o contador
    while (i < 8) {
        printf("Esquerda\n");
        i++;
    }
    printf("\n");

    // Movimentação do bispo( 5 casas na diagonal para cima e à direita)
    printf("Movimentação do Bispo:\n");

     i = 0; 
    do {
      printf("Cima Direita\n");
      i++;

    }while (i < 5);
      printf("\n");
      
   //Movimentação do Cavalo( 2 casas para baixo e 1 casa para a esquerda)   
    int casasParaBaixo = 2;
    int casasParaEsquerda = 1;
    printf("Movimentação do Cavalo:\n");

    for (i = 0; i < casasParaBaixo; i++) {   // Loop externo para as casas para baixo
        printf("Baixo\n");

        
        j = 0;
        while (i == casasParaBaixo - 1 && j < casasParaEsquerda) { // Loop interno para casas para a esquerda, só ocorre após a última casa para baixo
            printf("Esquerda\n");
            j++;
        }
    }
    printf("\n");

    return 0;
}