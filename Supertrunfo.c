#include <stdio.h>

int main() {
    char estado[50], codigocarta[50], nomecidade[50]; //A variável estado, será uma letra representando um dos 8 estados. // codigocarta: A letra do estado seguida de um número de 01 a 04 (ex: A01, B03) // A variável, nomecidade irá representar o nome da cidade.
    int populacao, pontoturistico; //A variável população representa o número de habitantes.// A variável, pontoturistico, representa a quantidade de pontos turisticos.
    float area, pib;// Variável area, representa a quantidade de Kilometros quadrados. // A variável pib, representa o produto interno bruto daquele local.

    printf("Qual o seu estado?\n");//Irá perguntar ao usuário o estado.
    scanf("%s", estado);//Irá ler o resultado em string.

    printf("Qual será o código da carta?\n");//Irá perguntar o código daquela carta.
    scanf("%s", codigocarta);//Irá ler o resultado em string.

    printf("Qual o nome da cidade?\n");//Irá perguntar o nome daquela cidade.
    scanf("%s", nomecidade);//Irá ler o resultado em string.

    printf("Qual a população?\n");//Irá perguntar a quantidade populacional.
    scanf("%d", &populacao); // Irá ler o resultado em números inteiros.

    printf("Qual a área em km?\n");//Irá perguntar a área de KM.
    scanf("%f", &area); //Irá ler o resultado em ponto flutuante padrão.

    printf("Qual o PIB?\n");//Irá perguntar o produto interno bruto.
    scanf("%f", &pib); //Irá ler o resultado em ponto flutuante padrão.

    printf("Quantidade de pontos turísticos:\n");// Irá perguntar a quantidade de pontos turísticos.
    scanf("%d", &pontoturistico); // Irá ler o resultado em números inteiros.

    printf("CARTA 1\n");// Número da carta.
    printf("Estado: %s\n", estado);//Vai por o resultado do "estado" no formato string.
    printf("Código da carta: %s\n", codigocarta);//Vai por o resultado do "codigocarta" no formato string.
    printf("Nome da cidade: %s\n", nomecidade);//Vai por o resultado do "nomecidade" no formato string.
    printf("Quantidade populacional: %d\n", populacao);//vai por o resultado da "população" em número inteiro.
    printf("Quantidade de KM: %.2f\n", area); // Vai exibir com 2 casas decimais.
    printf("PIB total: %.2f\n", pib); // Vai exibir com 2 casas decimais.
    printf("Quantidade de pontos turísticos: %d\n", pontoturistico);//Vai exibir "ponto turistico"em número inteiro.


    // CARTA 2
    printf("Qual o seu estado?\n");//Irá perguntar ao usuário o estado.
    scanf("%s", estado);//Irá ler o resultado em string.

    printf("Qual será o código da carta?\n");//Irá perguntar o código daquela carta.
    scanf("%s", codigocarta);//Irá ler o resultado em string.

    printf("Qual o nome da cidade?\n");//Irá perguntar o nome daquela cidade.
    scanf("%s", nomecidade);//Irá ler o resultado em string.

    printf("Qual a população?\n");//Irá perguntar a quantidade populacional.
    scanf("%d", &populacao); // Irá ler o resultado em números inteiros.

    printf("Qual a área em km?\n");//Irá perguntar a área de KM.
    scanf("%f", &area); //Irá ler o resultado em ponto flutuante padrão.

    printf("Qual o PIB?\n");//Irá perguntar o produto interno bruto.
    scanf("%f", &pib); //Irá ler o resultado em ponto flutuante padrão.

    printf("Quantidade de pontos turísticos:\n");// Irá perguntar a quantidade de pontos turísticos.
    scanf("%d", &pontoturistico); // Irá ler o resultado em números inteiros.

    printf("CARTA 2\n");// Número da carta.
    printf("Estado: %s\n", estado);//Vai por o resultado do "estado" no formato string.
    printf("Código da carta: %s\n", codigocarta);//Vai por o resultado do "codigocarta" no formato string.
    printf("Nome da cidade: %s\n", nomecidade);//Vai por o resultado do "nomecidade" no formato string.
    printf("Quantidade populacional: %d\n", populacao);//vai por o resultado da "população" em número inteiro.
    printf("Quantidade de KM: %.2f\n", area); // Vai exibir com 2 casas decimais.
    printf("PIB total: %.2f\n", pib); // Vai exibir com 2 casas decimais.
    printf("Quantidade de pontos turísticos: %d\n", pontoturistico);//Vai exibir "ponto turistico"em número inteiro.





}
