#include <stdio.h>

int main(){
    char Carta1[20] = "01";
    char Estado[20] = "São Paulo";
    char Codigo[20] = "B01";
    char Nome[20] = "São Paulo";
    int População =  12000000;
    float Área = 150000;
    float PIB = 830000000;
    int Número = 40;
    
    char Carta2[20] = "02";
    char Estado1[20] = "Rio de Janeiro";
    char Codigo1[20] = "B02";
    char Nome1[20] = "Rio de Janeiro";
    int População1 =  6200000;
    float Área1 = 1200000;
    float PIB1 = 33000000;
    int Número1 = 50;
 
    printf("Carta1: %s\n", Carta1);
    printf("Estado: %s\n", Estado);
    printf("Codigo da Carta: %s\n", Codigo);
    printf("Nome da Cidade: %s\n", Nome);
    printf("População: %d\n", População);
    printf("Área em km²: %2.f\n", Área);
    printf("PIB: %2.f\n", PIB);
    printf("Número de Pontos Turísticos: %d\n", Número);

    printf("\n");
    printf("Carta2: %s\n", Carta2);
    printf("Estado: %s\n", Estado1);
    printf("Codigo da Carta: %s\n", Codigo1);
    printf("Nome da Cidade: %s\n", Nome1);
    printf("População: %d\n", População1);
    printf("Área em km²: %2.f\n", Área1);
    printf("PIB: %2.f\n", PIB1);
    printf("Número de Pontos Turísticos: %d\n", Número1);




    return 0;