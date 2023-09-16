#include<stdio.h>
#include<stdlib.h>

struct No {
    int info;
    struct No *prox;
};

struct Pilha {
    struct No *topo;
    int contador; // Adicione um contador de itens
};

void empilhar(int valor, struct Pilha *ptr);
void exibirPilha(struct Pilha *ptr);
int desempilhar(struct Pilha *ptr);

int main() {
    struct Pilha *p1 = (struct Pilha*) malloc(sizeof(struct Pilha));
    p1->topo = NULL;
    p1->contador = 0; // Inicialize o contador como 0
    int opcao;

    do {
        printf("\nMenu:\n");
        printf("1. Inserir valor na pilha\n");
        printf("2. Exibir pilha\n");
        printf("3. Remover valor da pilha\n");
        printf("4. Exibir quantidade de itens na pilha\n"); // Adicione uma opção para exibir a quantidade
        printf("5. Sair\n");
        printf("Escolha uma opcao: ");
        scanf("%d", &opcao);

        switch (opcao) {
            case 1:
                int valor;
                printf("Digite o valor a ser inserido: ");
                scanf("%d", &valor);
                empilhar(valor, p1);
                break;
            case 2:
                exibirPilha(p1);
                break;
            case 3:
                {
                    int valorDesempilhado = desempilhar(p1);
                    if (valorDesempilhado != -1) {
                        printf("Valor desempilhado: %d\n", valorDesempilhado);
                    }
                    break;
                }
            case 4:
                printf("Quantidade de itens na pilha: %d\n", p1->contador); // Exiba a quantidade
                break;
            case 5:
                printf("Saindo do programa.\n");
                break;
            default:
                printf("Opcao inválida. Tente novamente.\n");
        }
    } while (opcao != 5);

    free(p1); // Liberar a memória da pilha
    return 0;
}

void empilhar(int valor, struct Pilha *ptr) {
    struct No *novo = (struct No*) malloc(sizeof(struct No));
    novo->info = valor;
    novo->prox = ptr->topo;
    ptr->topo = novo;
    ptr->contador++; // Incrementar o contador ao empilhar
}

void exibirPilha(struct Pilha *ptr) {
    struct No *aux = ptr->topo;
    if (aux == NULL) {
        printf("Pilha vazia\n");
    } else {
        printf("Conteúdo da pilha:\n");
        while (aux != NULL) {
            printf("End.Atual: %p - Valor: %i -> Proxi.End: %p\n", aux, aux->info, aux->prox);
            aux = aux->prox;
        }
    }
}

int desempilhar(struct Pilha *ptr) {
    if (ptr->topo == NULL) {
        printf("Pilha vazia. Nao é possível desempilhar.\n");
        return -1; // Valor de erro
    }

    struct No *aux = ptr->topo;
    int res = aux->info;
    ptr->topo = aux->prox;
    free(aux); // Liberar memória do nó desempilhado
    ptr->contador--; // Decrementar o contador ao desempilhar

    return res;
}
