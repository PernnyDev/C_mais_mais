#include <stdio.h>
#include <stdlib.h>

void exibirLista(int *v, int n) {
	int i;
	for(i = 0; i < n; i++) {
		printf("%d ", v[i]);
	}
}


void bubbleSort(int *v, int n) {
	int i, j, aux;
	int count = 0;
	int testes = 0;
	for(i = 0; i < n; i++) {
		for(j = 0; j < n-i-1; j++ ) {
			testes ++;
			if(v[j] > v[j+1]) {
				aux = v[j];
				v[j] = v[j + 1];
				v[j + 1] = aux;
				count ++;
			}
		}
	}
	printf("O total de testes foi de %i\n", testes);
	printf("O total de trocas foi de %i\n", count);
}

main() {
	int lista1[20] = {10, 20, 15, 5, 3, 25, 4, 1, 35, 30, 40, 45, 41, 6, 8, 50, 9, 11, 22, 31};
	
	bubbleSort(lista1, 20);
	exibirLista(lista1, 20);
}