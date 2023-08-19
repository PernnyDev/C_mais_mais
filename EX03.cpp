#include<stdio.h>

main() {
	int valor;
	int *pValor;

    pValor = &valor;
    valor = 10;
    printf("Valor = %i \n", valor);

    *pValor = 20;
    printf("Valor = %i", valor);


}