#include <stdio.h>

void rainha(int casas){
    if (casas > 0){
        printf("Direita\n");
        rainha(casas - 1);
    }
}

void torre(int casas1){
    if (casas1 > 0){
        printf("Cima\n");
        torre(casas1 - 1);
    }
}
void bispo(int casas2){
    if (casas2 > 0){
        printf("Cima - Direita\n");
        bispo(casas2 - 1);
    }
}


int main(){
    // RAINHA
    printf("***RAINHA***\n");
    rainha(8);
    printf("\n");

    // TORRE
    printf("***TORRE***\n");
    torre(5);
    printf("\n");

    // BISPO
    printf("***BISPO***\n");
    bispo(5);
    printf("\n");

        // Cavalo
    
    printf("***CAVALO*** \n");
    for (int cavalo = 1; cavalo <= 1; cavalo++)
    {
      for (int cavalo1 = 1; cavalo1 <= 2; cavalo1++)
      {
        printf("Cima %d\n", cavalo1);
      }
      printf("Direita %d\n", cavalo);
    }


    return 0;
}
