#include <stdio.h>
int main(){
  char produtoA[30] = "Produto A";
  char produtob[30] = "Produto B";

  unsigned int estoqueA = 1000;
  unsigned int estoqueB = 2000;

  float valorA = 10.50;
  float valorB = 20.40;

  unsigned int estoqueminimoA = 500;
  unsigned int estoqueminimoB = 25000;

  double ValortotalA;
  double ValortotalB;

  int resultadoA, ResultadoB;

  printf("Produto %s tem estoque %u e valor unitário é: R$%.2f\n", produtoA, estoqueA, valorA);
  printf("Produto %s tem estoque %u e valor unitário é: R$%.2f\n", produtob, estoqueB, valorB);

  resultadoA = estoqueA > estoqueminimoA;
  ResultadoB = estoqueB > estoqueminimoB;

  printf(" O produto %S tem estoque minimo %d\n", produtoA, resultadoA);
  printf(" O produto %S tem estoque minimo %d\n", produtob, ResultadoB);

  printf(" O valor de A(R$ %.2f) em comparação com o valor de B(R$ %.2f): %d\n", estoqueA * valorA, estoqueB * valorB, (estoqueA * valorA) > (estoqueB * valorB));

}