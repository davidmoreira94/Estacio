#include <stdio.h>

  int main(){
      
      float temperatura, umidade;
      unsigned int estoque, estoqueminimo;

      estoqueminimo = 1000;

      printf( "Entre com a temperatura:\n");
      scanf("%f", &temperatura);

      printf( "Entre com a umidade:\n");
      scanf("%f", &umidade);

      printf("Entre com estoque:\n");
      scanf("%u",&estoque);
      

    if (temperatura >30){
        printf("Temperatura alta!\n");
    }else{
     printf("Temperatura nos parametros\n");
    }
    
    if (umidade >50){
        printf("Alta umidade\n");
    }else{
     printf("Umidade nos parametros\n");
    }
    
    if (estoque <estoqueminimo){
        printf("Está abaixo do estoque minimo\n");
    }else{
     printf("Estoque nos parametros\n");
    }











  }