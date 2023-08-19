#include<stdio.h>

main() {
	char valor;
	char *pValor;

    pValor = &valor;
    valor = 10;
  
  
  for (int i=0; i<=10000; i++){
    printf("Endereco: %x - %c \n", pValor, *pValor);
    pValor++; 


  }

}