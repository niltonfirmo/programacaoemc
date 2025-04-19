#include <stdio.h>

//batalha naval, 0 água e 3 navios
 
int main() {
    // Definindo o tabuleiro 10x10 e inicializando todas as posições 
    int tabuleiro[10][10] = {{0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
                             {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
                             {0, 0, 3, 3, 3, 0, 0, 0, 0, 0},
                             {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
                             {0, 0, 0, 0, 0, 0, 0, 3, 0, 0},
                             {0, 0, 0, 0, 0, 0, 0, 3, 0, 0},
                             {0, 0, 0, 0, 0, 0, 0, 3, 0, 0},
                             {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
                             {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
                             {0, 0, 0, 0, 0, 0, 0, 0, 0, 0}};
    
  

   for (int i = 0; i < 10; i++ ) {
      for(int j = 0; j < 10; j++){
    //exibindo o tabuleiro
    printf( "%d ", tabuleiro [i][j]);
   }
    printf("\n");
   }
   // pular duas linhas depois do tabuleiro melhor visualização
   printf("\n\n");
       
 
    return 0;
}
