/*
 ============================================================================
 Name        : Pilha.c
 Author      : Roberto S. Ramos Jr
 Version     :
 Copyright   : robertosrjr@gmail.com
 Description : Estrutura de Dados em C, Pilha Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

// constantes
#define tamanho 3

struct tipo_pilha {

	int dados[tamanho];
	int topo;
};

// variveis globais
struct tipo_pilha pilha;
void insere_pilha() {

	int elemento;
	if (pilha.topo == tamanho) {

		printf("Pilha cheia.\n");
		system("pause");
	} else {

		printf("Digite o valor para inserir na lista:");
		fflush(stdout);
		scanf("%d1", &elemento);
		pilha.dados[pilha.topo++] = elemento;
	}
}

int remove_pilha() {

	int elemento;
	if (pilha.topo == 0) {

		printf("Pilha Vazia");
		system("pause");
	} else {

		elemento = pilha.dados[--pilha.topo];
		pilha.dados[pilha.topo] = 0;
		return elemento;
	}
}

void mostrar_menu() {

	printf("\n Escolha Opção:");
	printf("\n 1 - Incluir na Pilha;");
	printf("\n 2 - Excluir da Pilha;");
	printf("\n 3 - Sair \n\n");
}

void mostrar_pilha() {

	int i;
	printf("[ ");
	for (i = 0; i < tamanho; i++) {

		printf("%d, ", pilha.dados[i]);

	}
	printf(" ]\n\n");
}

int main(void) {

	int op = 1;
	pilha.topo = 0;
	while (op !=0) {

		system("cls");
		mostrar_pilha();
		mostrar_menu();
		fflush(stdout);
		scanf("%d1", &op);

		switch (op) {
			case 1:

				insere_pilha();
				break;
			case 2:

				remove_pilha();
				break;
		}
	}

	return EXIT_SUCCESS;
}
