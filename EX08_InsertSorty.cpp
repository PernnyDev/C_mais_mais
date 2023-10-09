#include<stdio.h>
#include<stdlib.h>
//No metodo exibirLista, a lista é exibida
void exibirLista(int *v, int n) {
	int i;
	for(i = 0; i < n; i++) {
		printf("%i ", v[i]);
	}
}

//No metodo abaixo, o insertion sort é implementado
void insertionSort(int *v, int n) {
	int i, j, aux;	
	int count = 0;
	int testes = 0;
	for(i = 0; i < n - 1; i++) {
		testes++;
		if(v[i] > v[i + 1]) {
			count++;
			aux = v[i + 1];
			v[i + 1] = v[i];
			v[i] = aux;
			j = i - 1;
			while(j >= 0) {
				testes++;
				if(aux < v[j]) {
					count++;
					v[j + 1] = v[j];
					v[j] = aux;
				} else {
					break;
				}
			j--;
			}
		}
	}
	printf("\n\nO total de testes foi de %i\n", testes);
	printf("O total de trocas foi de %i\n", count);
}

//No bloco abaixo executando o código, você pode ver que o insertion sort é mais eficiente que o bubble sort
main() {
	int lista1[20] = {10, 20, 15, 5, 3, 25, 4, 1, 35, 30, 40, 45, 41, 6, 8, 50, 9, 11, 22, 31};
	int lista2[20] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 50, 25, 15, 17, 60, 65, 22, 70, 19, 49};
	
	insertionSort(lista1, 20);
	exibirLista(lista1, 20);
	
	insertionSort(lista2, 20);
	exibirLista(lista2, 20);
}