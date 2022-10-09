
#include<stdlib.h>
#include<stdio.h>
#define TAM 10

int tamanho=0;
float lista[TAM];

void insere(int valor) {
	int i;

	if(tamanho==TAM-1) {
		printf("\n\tERRO: A lista esta cheia\n");
		return;
	}

	for(i=tamanho; i>0; i--) {
		lista[i]=lista[i-1];
	}

	lista[i]=valor;
	tamanho++;
	printf("\nElemento inserido com sucesso!\n\n");
}

void remover(int valor) {
	int i,j,cont=0;

	if(tamanho==0) {
		printf("\n\tErro: Lista vazia!");
		return;
	}

	for(i=0; i<tamanho  ;i++) {
		if(valor==lista[i]) {
			for(j=i;j<tamanho-1;j++) {
				lista[j]=lista[j+1];
			}
			tamanho--;
			i--;
			cont++;
		}
	}
	if(cont!=0)
		printf("\nElemento removido com sucesso!");
	else
		printf("\n\tERRO: valor nao esta na lista");
}

void exibir() {
	int i;

	if(tamanho==0){
		printf("\n\tErro: Lista vazia!");
		return;
	}

	for(i=0;i<=tamanho-1;i++) {
		printf("\n [%.2f]- posi\207\706o: %d ", lista[i],i+1);
	}
}



void menu() {
	printf("Instituto federal do rio grande do sul\n Autor: Marvin braescher\n\n");

	printf("\n 1 = Inserir elemento                ");
	printf("\n 2 = Remover elemento                ");
	printf("\n 3 = Exibir lista                    ");
	printf("\n 4 = Sair                            ");
	printf("\n\n");
}

main() {

	int opcao,valor;
	bool i=true;

	menu();
	do {
		scanf("%d", &opcao);

		switch(opcao) {
			case 1:
				system ("cls");
				menu();
				printf("\nDigite o valor a ser inserido ");
				scanf("%d", &valor);
				insere(valor);
				printf("\n\nEscolha outra op\207\706o para continuar...\n\n");
				break;
			case 2:
				system ("cls");
				menu();
				printf("\nDigite o valor a ser removido ");
				scanf("%d", &valor);
				remover(valor);
				printf("\n\nEscolha outra op\207\706o para continuar...\n\n");
				break;
		
			case 3:
				system ("cls");
				menu();
				exibir();
				printf("\n\nEscolha outra op\207\706o para continuar...\n\n");
				break;
			case 4:
				system ("cls");
				printf("\n\n\t\tAt\202 logo !!\n\n\n\n\n\n\n\n\n\n");
				i=false;
				break;
		}
	}
	while(i==true);

	system ("pause");
}


