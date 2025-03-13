#include <stdio.h>

void processCityData(int cartaNumber) {
    char estado[50], codigocarta[50], nomecidade[50];
    int  pontoturistico;
    float area, pib;
    float densidade, pibpercap;
    unsigned long int populacao;
    double superpower;
    
    printf("Qual o seu estado?\n");
    scanf("%s", estado);

    printf("Qual sera o codigo da carta?\n");
    scanf("%s", codigocarta);

    printf("Qual o nome da cidade?\n");
    scanf("%s", nomecidade);

    printf("Qual a população?\n");
    scanf("%d", &populacao);

    printf("Qual a área em km?\n");
    scanf("%f", &area);

    printf("Qual o PIB?\n");
    scanf("%f", &pib);

    printf("Quantidade de pontos turísticos:\n");
    scanf("%d", &pontoturistico);

    
    densidade = (double) populacao / area;
    pibpercap = (double)  pib / populacao;
    superpower = populacao + area + pontoturistico + pib + pibpercap;
 
    printf("CARTA %d\n", cartaNumber);
    printf("Estado: %s\n", estado);
    printf("Código da carta: %s\n", codigocarta);
    printf("Nome da cidade: %s\n", nomecidade);
    printf("Quantidade populacional: %d\n", populacao);
    printf("Quantidade de KM: %.2f\n", area);
    printf("PIB total: %.2f\n", pib);
    printf("Quantidade de pontos turísticos: %d\n", pontoturistico);
    printf("A densidade populacional é: %.3f\n", densidade);
    printf("O PIB per capita é: %.9f\n", pibpercap);
    printf(" Superpower é: %.10f\n", superpower);
}

int main() {
    
    processCityData(1);
    processCityData(2);

    return 0;
}