#include <stdio.h>

int main(){
    // Pais: Brasil
    // Carta 1 Sao Paulo
    char Carta1[20] = "01";
    char Estado[20] = "Sao Paulo";
    char Codigo[20] = "B01";
    char Nome[20] = "Sao Paulo";
    unsigned long int Populacao =  12000000;
    float Area = 150000;
    float PIB = 830000000;
    int Numero = 40;
    float Densidade = Populacao / Area;
    float PIBP = PIB / Populacao;
    float Super = Populacao + Area + PIB + PIBP + Densidade + Numero;

    // Carta 2 Rio de Janeiro
    char Carta2[20] = "02";
    char Estado1[20] = "Rio de Janeiro";
    char Codigo1[20] = "B02";
    char Nome1[20] = "Rio de Janeiro";
    unsigned long int Populacao1 =  6200000;
    float Area1 = 1200000;
    float PIB1 = 33000000;
    int Numero1 = 50;
    float Densidade1 = Populacao1 / Area1;
    float PIBP1 = PIB1 / Populacao1;
    float Super1 = Populacao1 + Area1 + PIB1 + PIBP1 + Densidade1 + Numero1;

    // Carta 1 Sao Paulo
    printf("Carta1: %s\n", Carta1);
    printf("Estado: %s\n", Estado);
    printf("Codigo da Carta: %s\n", Codigo);
    printf("Nome da Cidade: %s\n", Nome);
    printf("População: %lu\n", Populacao);
    printf("Área em km²: %f\n", Area);
    printf("PIB: %f\n", PIB);
    printf("Número de Pontos Turísticos: %d\n", Numero);
    printf("Densidade Populacional hab/km²: %f\n", Densidade);
    printf("PIB per Capita: %f\n", PIBP);
    printf("Super poder: %f\n", Super);

    // Carta 2 Rio de Janeiro
    printf("\n");
    printf("Carta2: %s\n", Carta2);
    printf("Estado: %s\n", Estado1);
    printf("Codigo da Carta: %s\n", Codigo1);
    printf("Nome da Cidade: %s\n", Nome1);
    printf("População: %lu\n", Populacao1);
    printf("Área em km²: %f\n", Area1);
    printf("PIB: %f\n", PIB1);
    printf("Número de Pontos Turísticos: %d\n", Numero1);
    printf("Densidade Populacional hab/km²: %f\n", Densidade1);
    printf("PIB per Capita: %f\n", PIBP1);
    printf("Super poder: %f\n", Super1);

    //Comparacao
    printf("\n");
    printf("Comparação de Cartas:\n");
    printf("População: A carta 1 venceu: %d\n", Populacao > Populacao1);
    printf("Área: A carta 2 venceu: %d\n", Area > Area1);
    printf("PIB: A carta 1 venceu: %d\n", PIB > PIB1);
    printf("Pontos Turísticos: A carta 2 venceu: %d\n", Numero > Numero1);
    printf("Densidade Populacional: A carta 1 venceu: %d\n", Densidade > Densidade1);
    printf("PIB per Capit: A carta 1 venceu: %d\n", PIBP > PIBP1);
    printf("Super Poder: A carta 1 venceu: %d\n", Super > Super1);


    return 0;


}