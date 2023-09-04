#include<stdio.h>
#include<stdlib.h>
void inserirLista (int elem);
void exibirLista (void);
void qtdLista (void);


struct No {
	int info;
	struct No *prox;
};

struct No *cabeca= NULL;
struct No *ult = NULL;
int qtd = 0;
int nMenu;

void inserirLista (int elem){
	struct No *novo = (struct No*) malloc(sizeof(struct No ) ) ;
	novo -> info = elem;
	novo -> prox=NULL;
	if (cabeca ==NULL){
		cabeca = novo;
	} else {
		
		ult->prox = novo;
	}
	ult = novo;		

}

void exibirLista (void) {
	
	struct No *aux = cabeca;
	while (aux!= NULL) {
		printf("End.Atual: %x - Valor: %i -> Proxi.End: %x   \n ",  aux,  aux->info,aux -> prox);	
		aux = aux -> prox;
	}
}



void qtdLista (void) {
	struct No *aux = cabeca;
	while (aux != NULL) {
		qtd	+=1;
		aux = aux -> prox;
	}
	printf("Quantidade total: %x   \n ",  qtd);	
}


		
	


main () {
    printf("Digite: 1 - inserir 2 - exibir 3 - quantidade \n ");
	scanf("%i", &nMenu);
   
switch ( nMenu) {
	case 1 : inserirLista(10);
	         inserirLista(20);
  	break;
	case 2 : 
	           exibirLista();
    case 3 : 
               exibirLista();
	break;
}
  
  
  
	
  
  
  
}

