#include <stdio.h>

int main(){
    char Carta1[20] = "01";
    char Estado[20] = "Sao Paulo";
    char Codigo[20] = "B01";
    char Nome[20] = "Sao Paulo";
    int Populacao =  12000000;
    float Area = 150000; //Não pode usar acento no nome da variável
    float PIB = 830000000;
    int Numero = 40;//Não pode usar acento no nome da variável
    
    char Carta2[20] = "02";
    char Estado1[20] = "Rio de Janeiro";
    char Codigo1[20] = "B02";
    char Nome1[20] = "Rio de Janeiro";
    int Populacao1 =  6200000;
    float Area1 = 1200000;//Não pode usar acento no nome da variável
    float PIB1 = 33000000;
    int Numero1 = 50;//Não pode usar acento no nome da variável
 
    printf("Carta1: %s\n", Carta1);
    printf("Estado: %s\n", Estado);
    printf("Codigo da Carta: %s\n", Codigo);
    printf("Nome da Cidade: %s\n", Nome);
    printf("Populacao: %d\n", Populacao);
    printf("Area em km²: %2.f\n", Area);
    printf("PIB: %2.f\n", PIB);
    printf("Numero de Pontos Turísticos: %d\n", Numero);

    printf("\n");
    printf("Carta2: %s\n", Carta2);
    printf("Estado: %s\n", Estado1);
    printf("Codigo da Carta: %s\n", Codigo1);
    printf("Nome da Cidade: %s\n", Nome1);
    printf("Populacao: %d\n", Populacao1);
    printf("Area em km²: %2.f\n", Area1);
    printf("PIB: %2.f\n", PIB1);
    printf("Numero de Pontos Turísticos: %d\n", Numero1);




    return 0;
