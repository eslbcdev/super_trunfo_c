#include <stdio.h>

int main(){

    char estado1[10];
    char codigo_carta1[50];
    char pais1[50];
    int populacao1;
    float area1;
    int expectativa1;
    
    char estado2[10];
    char codigo_carta2[50];
    char pais2[50];
    int populacao2;
    float area2;
    int expectativa2;



    printf("Carta 1\n");

    printf("Insira o estado: \n");
    scanf("%s", &estado1);

    printf("Insira o código: \n");
    scanf("%s", &codigo_carta1);

    printf("Insira o país: \n");
    scanf("%s", &pais1);

    printf("Insira a população: \n");
    scanf("%d", &populacao1);

    printf("Insira a área: \n");
    scanf("%f", &area1);

    printf("Insira a expectativa de vida: \n");
    scanf("%d", &expectativa1);

    
    printf("Carta 2\n");

    printf("Insira o estado: \n");
    scanf("%s", &estado2);

    printf("Insira o código: \n");
    scanf("%s", &codigo_carta2);

    printf("Insira o país: \n");
    scanf("%s", &pais2);

    printf("Insira a população: \n");
    scanf("%d", &populacao2);

    printf("Insira a área: \n");
    scanf("%f", &area2);

    printf("Insira a expectativa de vida: \n");
    scanf("%d", &expectativa2);


    printf("Carta 1\n");
    printf("Estado: %s \n", estado1);
    printf("Código: %s \n", codigo_carta1);
    printf("País: %s \n", pais1);
    printf("População: %d \n", populacao1);
    printf("Área: %f \n", area1);
    printf("Expectativa de Vida: %d\n", expectativa1);


    printf("Carta 2\n");
    printf("Estado: %s \n", estado2);
    printf("Código: %s \n", codigo_carta2);
    printf("País: %s \n", pais2);
    printf("População: %d \n", populacao2);
    printf("Área: %f \n", area2);
    printf("Expectativa de Vida: %d\n", expectativa2);

    return 0;     






}