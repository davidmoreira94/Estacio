#include <stdio.h>


int main() {
    char estado[50],estado2[50], codigocarta[50],codigocarta2[50], nomecidade[50], nomecidade2[50]; //A variável estado, será uma letra representando um dos 8 estados. // codigocarta: A letra do estado seguida de um número de 01 a 04 (ex: A01, B03) // A variável, nomecidade irá representar o nome da cidade.
    int populacao,populacao2, pontoturistico,pontoturistico2; //A variável população representa o número de habitantes.// A variável, pontoturistico, representa a quantidade de pontos turisticos.
    float area,area2, pib,pib2;// Variável area, representa a quantidade de Kilometros quadrados. // A variável pib, representa o produto interno bruto daquele local.
    float densidadeP, densidadeP2;
    float pibP,pibP2;
    
    printf("DADOS DA CARTA1\n");
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

    densidadeP = (float) populacao / area;
    pibP = (float)pib / populacao;

    printf("CARTA 1\n");// Número da carta.
    printf("Estado: %s\n", estado);//Vai por o resultado do "estado" no formato string.
    printf("Código da carta: %s\n", codigocarta);//Vai por o resultado do "codigocarta" no formato string.
    printf("Nome da cidade: %s\n", nomecidade);//Vai por o resultado do "nomecidade" no formato string.
    printf("Quantidade populacional: %d\n", populacao);//vai por o resultado da "população" em número inteiro.
    printf("Quantidade de KM: %.2f\n", area); // Vai exibir com 2 casas decimais.
    printf("PIB total: %.2f\n", pib); // Vai exibir com 2 casas decimais.
    printf("Quantidade de pontos turísticos: %d\n", pontoturistico);//Vai exibir "ponto turistico"em número inteiro.
    printf("densidade populacional:%.4f\n",densidadeP);
    printf("Pib percapta é:%.4f\n",pibP);

    // CARTA 2

    printf("DADOS DA CARTA2\n");
    printf("Qual o seu estado?\n");//Irá perguntar ao usuário o estado.
    scanf("%s", estado2);//Irá ler o resultado em string.

    printf("Qual será o código da carta?\n");//Irá perguntar o código daquela carta.
    scanf("%s", codigocarta2);//Irá ler o resultado em string.

    printf("Qual o nome da cidade?\n");//Irá perguntar o nome daquela cidade.
    scanf("%s", nomecidade2);//Irá ler o resultado em string.

    printf("Qual a população?\n");//Irá perguntar a quantidade populacional.
    scanf("%d", &populacao2); // Irá ler o resultado em números inteiros.

    printf("Qual a área em km?\n");//Irá perguntar a área de KM.
    scanf("%f", &area2); //Irá ler o resultado em ponto flutuante padrão.

    printf("Qual o PIB?\n");//Irá perguntar o produto interno bruto.
    scanf("%f", &pib2); //Irá ler o resultado em ponto flutuante padrão.

    printf("Quantidade de pontos turísticos:\n");// Irá perguntar a quantidade de pontos turísticos.
    scanf("%d", &pontoturistico2); // Irá ler o resultado em números inteiros.


    densidadeP2 = (float) populacao2 / area2;
    pib2 = (float) pibP2 / populacao2;

    printf("CARTA 2\n");// Número da carta.
    printf("Estado: %s\n", estado2);//Vai por o resultado do "estado" no formato string.
    printf("Código da carta: %s\n", codigocarta2);//Vai por o resultado do "codigocarta" no formato string.
    printf("Nome da cidade: %s\n", nomecidade2);//Vai por o resultado do "nomecidade" no formato string.
    printf("Quantidade populacional: %d\n", populacao2);//vai por o resultado da "população" em número inteiro.
    printf("Quantidade de KM: %.2f\n", area2); // Vai exibir com 2 casas decimais.
    printf("PIB total: %.2f\n", pib2); // Vai exibir com 2 casas decimais.
    printf("Quantidade de pontos turísticos: %d\n", pontoturistico2);//Vai exibir "ponto turistico"em número inteiro.
    printf("densidade populacional:%.4f",densidadeP2);
    printf("Pib percapta é:%.4f",pibP2);

    if (area>area2)// comparação entre areas para decidir o vencedor
    {
        printf("Carta 1 possui uma area maior.\n");
    }  else{
        printf("Carta 2 tem uma area maior\n");
    }
    
    if (populacao>populacao2)//comparação entre população para ver o vencedor
    {
        printf("Carta 1 possui uma população maior.\n");
    } else{
        printf("Carta 2 tem uma população maior.\n");
    }
    
    if (pib>pib2)//comparação entre pib para ver o vencedor
    {
        printf("Carta 1 possui um PIB maior.\n");
    } else{
        printf("Carta 2 tem um PIB maior.\n");
    }
    





}
