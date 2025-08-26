
#include<stdio.h>


int main()
{
//                              DECLARAÇÃO CARTA 1 
    char estado1[3];
    char nomeCidade1[50];
    int populacao1 = 500000;
    float area1;
    float pib1;
    int pontosTuristicos1;

    //                          DECLARAÇÃO CARTA 2
    char estado2[3];
    char nomeCidade2[50];
    int populacao2 = 500000;
    float area2;
    float pib2;
    int pontosTuristicos2;


    //                          ENTRADA DE DADOS CARTA 1 


    printf("_____________Digite os dados da Carta 1:___________\n");

    printf("Iniciais do Estado\n ");
    scanf("%s", &estado1);

    printf("Nome da Cidade:\n");
    scanf("%s",&nomeCidade1);
    
    printf("População:\n");
    scanf("%d", &populacao1);

    printf("Área em km²:\n ");
    scanf("%f", &area1);

    printf("PIB (em bilhões de reais):\n");
    scanf("%f", &pib1);

    printf("Número de Pontos Turísticos:\n ");
    scanf("%d", &pontosTuristicos1);


     printf("\n");

     //                      EXIBIÇÃO DE DADOS CARTA 1  

    printf("Carta 1:\n");
    printf("Estado: %s\n", estado1);
    printf("Nome da Cidade: %s\n", nomeCidade1);
    printf("População: %d\n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: %.2f bilhões de reais\n", pib1);
    printf("Número de Pontos Turísticos: %d\n", pontosTuristicos1);


 printf("\n");

 //                          ENTRADA DE DADOS CARTA 2 
    

    printf("_____________Digite os dados da Carta 2:___________\n");

    printf("Iniciais do Estado\n ");
    scanf("%s", &estado2);

    printf("Nome da Cidade:\n");
    scanf("%s",&nomeCidade2);
    
    printf("População:\n");
    scanf("%d", &populacao2);

    printf("Área em km²:\n ");
    scanf("%f", &area2);

    printf("PIB (em bilhões de reais):\n");
    scanf("%f", &pib2);

    printf("Número de Pontos Turísticos:\n ");
    scanf("%d", &pontosTuristicos2);


     printf("\n");

     //                     EXIBIÇÃO DE DADOS CARTA 2 

    printf("Carta 2:\n");
    printf("Estado: %s\n", estado2);
    printf("Nome da Cidade: %s\n", nomeCidade2);
    printf("População: %d\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f bilhões de reais\n", pib2);
    printf("Número de Pontos Turísticos: %d\n", pontosTuristicos2);

     //                   COMPARAÇÃO DA POPULAÇÃO  EM IF/ELSE 
    if (populacao1 > populacao2)
    {
        printf("\n A carta 1 GANHOU com %d habitantes!\n", populacao1);
        printf("A carta 2 PERDEU com %d habitantes.\n", populacao2);
    }
    else if (populacao2 > populacao1) {
        printf("\n A carta 2 GANHOU com %d habitantes!\n", populacao2);
        printf("A carta 1 PERDEU com %d habitantes.\n", populacao1);
    }
    else 
    {
        printf("\n EMPATE! Ambas as cartas têm %d habitantes.\n", populacao1);
    }

    return 0;  



}