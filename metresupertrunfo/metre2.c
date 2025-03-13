#include <stdio.h>

  int main(){

    char estado1[50], codigocarta1[50], nomecidade1[50],estado2[50], codigocarta2[50], nomecidade2[50];
    int  pontoturistico1, pontoturistico2;
    float area1,area2, pib1, pib2;
    float densidade1,densidade2,pibpercap1, pibpercap2;
    unsigned long int populacao1, populacao2;
    double superpower1, superpower2;
    double Resultado1,resultado2;
    
    printf( "Dados da carta numero1\n");
     
      printf("Qual o estado da carta1?\n");
      scanf("%s", &estado1);

      printf("Qual sera o codigo da carta1?\n");
      scanf("%s",&codigocarta1);
   
      printf("Qual o nome da cidade1?\n");
      scanf("%s",&nomecidade1);

      printf("Qual a quantidade populacional 1?\n");
      scanf("%llu",&populacao1);
    
      printf("Qual a área em km 1?\n");
      scanf("%f",&area1 );

      printf("Qual o PIB1?\n");
      scanf("%f",&pib1);

      printf("Quantidade de pontos turísticos1:\n");
      scanf("%d", &pontoturistico1);

      

// CARTA DE NÚMERO 2
      printf( "Dados da carta numero2\n");
     
      printf("Qual o estado da carta2?\n");
      scanf("%s", &estado2);

      printf("Qual sera o codigo da carta2?\n");
      scanf("%s",&codigocarta2);
   
      printf("Qual o nome da cidade2?\n");
      scanf("%s",&nomecidade2);

      printf("Qual a quantidade populacional 2?\n");
      scanf("%llu",&populacao2);
    
      printf("Qual a área em km 2?\n");
      scanf("%f",&area2 );

      printf("Qual o PIB2?\n");
      scanf("%f",&pib2);

      printf("Quantidade de pontos turísticos2:\n");
      scanf("%d", &pontoturistico2);



      densidade1 = (double) populacao1 / area1;
      pibpercap1 = (double)  pib1 / populacao1;
      Resultado1 = densidade1 > densidade2;
      superpower1 = populacao1 + area1 + pontoturistico1 + pib1 + pibpercap1 + Resultado1;

      densidade2 = (double) populacao2 / area2;
      pibpercap2 = (double)  pib2 / populacao2;
      resultado2 = densidade2 > densidade1;
      superpower2 = populacao2 + area2 + pontoturistico2 + pib2 + pibpercap2;


      printf("CARTA 1 \n");
    printf("Estado: %s\n", estado1);
    printf("Código da carta: %s\n", codigocarta1);
    printf("Nome da cidade: %s\n", nomecidade1);
    printf("Quantidade populacional: %d\n", populacao1);
    printf("Quantidade de KM: %.2f\n", area1);
    printf("PIB total: %.2f\n", pib1);
    printf("Quantidade de pontos turísticos: %d\n", pontoturistico1);
    printf("A densidade populacional é: %.3f\n", densidade1);
    printf("O PIB per capita é: %.9f\n", pibpercap1);
    printf(" Superpower é: %.10f\n", superpower1);


        printf("CARTA 2 \n");
    printf("Estado: %s\n", estado2); 
    printf("Código da carta: %s\n", codigocarta2);
    printf("Nome da cidade: %s\n", nomecidade2);
    printf("Quantidade populacional: %d\n", populacao2);
    printf("Quantidade de KM: %.2f\n", area2);
    printf("PIB total: %.2f\n", pib2);
    printf("Quantidade de pontos turísticos: %d\n", pontoturistico2);
    printf("A densidade populacional é: %.3f\n", densidade2);
    printf("O PIB per capita é: %.9f\n", pibpercap2);
    printf(" Superpower é: %.10f\n", superpower2);
}


































































  