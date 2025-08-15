#include <stdio.h>

void moverTorre(int casas){
  if(casas > 0 ) {
    printf("Direita\n");
    moverTorre(casas - 1);

    }
}

void moverRainha(int casas){

    if(casas > 0){
        printf("Esquerda\n");
        moverRainha(casas - 1);
    }
}

void moverBispo(int casas) {
    if (casas <= 0) return;

    // Loop externo (vertical)
    for (int i = 0; i < 1; i++) {
        // Loop interno (horizontal)
        for (int j = 0; j < 1; j++) {
            printf("Cima Direita\n");
        }
    }

    // Chamada recursiva para a próxima casa
    moverBispo(casas - 1);
}
int main (){
// Quantidades fixas
    const int casasTorre = 5;
    const int casasRainha = 8;
    const int casasBispo = 5;
  
    //Movimento da Torre 5 casas para a direita.
    printf("Movimentação da Torre:\n");
    moverTorre(casasTorre);
    printf("\n");
   
    //Movimento da Rainha 8 casas para a esquerda.
    printf("Movimentação da Rainha:\n");
    moverRainha(casasRainha);
    printf("\n");

    //Movimento do Bispo 5 casas na diagonal para cima e à direita.
    printf("Movimentação do Bispo:\n");
    moverBispo(casasBispo);
    printf("\n");


   //Movimentação do Cavalo( 2 casas para cima e 1 casa para a direita)   
    int casasParaCima = 2;
    int casasParaDireita = 1;
    
    printf("Movimentação do Cavalo:\n");

    for ( int i = 0; i < casasParaCima; i++) {   // Loop externo para as casas para cima
        printf("Cima\n");

        if( i < casasParaCima-1){
            continue;
        }
        
      int  j = 0;
        while (i == casasParaCima - 1 && j < casasParaDireita) { // Loop interno para casas para a direita, só ocorre após a última casa para cima
            printf("Direita\n");
            j++;

            break;
        }
    }
    printf("\n");

    return 0;
}
 
