#include <stdio.h>

#define LINHAS 10
#define COLUNAS 10
#define AGUA 0
#define NAVIO 3

int main() {
    char colunas[COLUNAS] = {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J'};
    int linhas[LINHAS] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int tabuleiro[LINHAS][COLUNAS];

    // Inicializa o tabuleiro com 0 (vazio)
    printf(" ***TABULEIRO BATALHA NAVAL***\n");
    printf(" ");
    for (int i = 0; i < LINHAS; i++) {
        for (int j = 0; j < COLUNAS; j++) {
            tabuleiro[i][j] = AGUA;
        }
    }

 //cruz
 int nv1 = 2;
 int nv2 = 7;

 int nv3 = 4;
 int nv4 = 5;
 
// lozango
 int nv5 = 6;
 int nv6 = 3;

 int nv7 = 7;
 int nv8 = 2;

 int nv22 = 8;
 int nv33 = 3;

//tiangulo

 int nv9 = 0;
 int nv10 = 2;

 int nv11 = 1;
 int nv12 = 1;

 int nv13 = 2;
 int nv14 = 0;




 


    //cruz
for (int i = 0; i < 5;i++){
    tabuleiro[nv1+i][nv2] = 1;
    for (int i = 0; i < 5;i++){
        tabuleiro[nv3][nv4+i] = 1;
    }
}

//Navio inclinado
for (int i = 0; i < 1;i++){
    tabuleiro[nv5][nv6+i] = 5;
    for (int i = 0; i < 3;i++){
        tabuleiro[nv7][nv8+i] = 5;
    }
}
for (int i = 0; i < 1;i++){
    tabuleiro[nv22][nv33+i] = 5;
}
//aaaaaa
for (int i = 0; i < 1;i++){
    tabuleiro[nv9][nv10+i] = 3;
    for (int i = 0; i < 3;i++){
        tabuleiro[nv11][nv12+i] = 3;
    }
}

for (int i = 0; i < 5;i++){
    tabuleiro[nv13][nv14+i] = 3;
 
}


        // Imprime as colunas
        for (int j = 0; j < COLUNAS; j++) {
            printf("  %c", colunas[j]);
        }
        printf("\n");

        // Imprime o tabuleiro com os navios
        for (int i = 0; i < LINHAS; i++) {
            printf("%d ", i);
            for (int j = 0; j < COLUNAS; j++) {
            printf(" %d ", tabuleiro[i][j]);
            }
            printf("\n");
        }
        
        
    
    
    return 0;
}