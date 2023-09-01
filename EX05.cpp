#include<stdio.h>
#include<stdlib.h>
void inserirLista (int elem);

struct No {
	int info;
	struct No *prox;
};

struct No *cabeca= NULL;
struct No *ult = NULL;



void inserirLista (int elem){
	struct No *novo = (struct No*) malloc(sizeof(struct No ) ) ;
	novo -> info = elem;
	novo ->prox=NULL;
	if (cabeca ==NULL){
		cabeca = novo;
	} else {
		
		ult->prox = novo;
	}
	ult = novo;		
	printf("%i\n ",  elem);
}



main(){
  inserirLista(10);
  inserirLista(20);
  inserirLista(30);
 
}
