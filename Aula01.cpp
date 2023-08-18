#include<stdio.h>

main() {
	int vet[10];
	
	for(int i=0; i<=9; i++) {
		
		printf("Digite o valor para[%i] :",i);
		scanf("%i", &vet[i]);
		
	};
	
	for( int i=0; i <=9; i++ ){
	
		printf(" Endereco na memoria do vet %i e %x:\n", i, &vet[i]);

	}
}
