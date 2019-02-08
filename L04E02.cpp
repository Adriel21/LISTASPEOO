/*Questão 2. Suponha que criamos uma estrutura para armazenar Datas:
struct Data{
int dia;
int mes;
int ano;
};
Implemente um algoritmo que receba um vetor de Datas como parâmetro e que retorne as datas em
ordem cronológica (crie uma função com cabeçalho: void ordena(struct Data vet[], int tam).

Autor/Author: Adriel Araujo
-Estudante de Ciencias da Computação UECE 2016.2 - 1422340
-Computer Science student in Ceara State University*/

#include <stdio.h>
#include <stdlib.h>

struct Data{
	int dia;
	int mes;
	int ano;
};

struct Data *data;

void ordenacao(struct Data vet[], int tam);


int main(){


	int i, tamanho;

	printf("Digite quantas datas voce quer alocar organizar:\n");
	scanf("%d", &tamanho);

	data = malloc(tamanho*sizeof(int));

	printf("\nDigite as datas em sequencia:\n");

	for (i=0; i<tamanho; i++){
        printf("Dia: ");
		scanf("%d", &data[i].dia);
        printf("\nMes: ");
		scanf("%d", &data[i].mes);
		printf("\nAno: ");
		scanf("%d", &data[i].ano);
		printf("\n\n");

	}
	ordenacao(data, tamanho);

return 0;
}

void ordenacao(struct Data vetor[], int tam){
	int i, j, aux1, aux2, aux3;
	for(i=1; i<tam; i++){

		aux1=vetor[i].ano;
		aux2=vetor[i].mes;
		aux3=vetor[i].dia;

		for(j=i-1; j>=0 && vetor[j].ano>aux1; i--){
			vetor[j+1].ano=vetor[j].ano;
			vetor[j+1].mes=vetor[j].mes;
			vetor[j+1].dia=vetor[j].dia;
		}

		vetor[j+1].ano=aux1;
		vetor[j+1].mes=aux2;
		vetor[j+1].dia=aux3;
	}

	for(i=1; i<tam; i++){
		aux1=vetor[i].mes;
		aux2=vetor[i].dia;

		for(j=i-1; j>=0 && vetor[j].mes>aux1 && vetor[j].ano==vetor[j+1].ano; j--){

			vetor[j+1].mes==vetor[j].mes;
			vetor[j+1].dia==vetor[j].dia;
		}

		vetor[j+1].mes=aux1;
		vetor[j+1].dia=aux2;
	}

	for(i=1; i<tam; i++){
		aux1=vetor[i].dia;

		for(j=i-1; j>=0 && vetor[j].mes>aux1 && vetor[j].ano==vetor[j+1].ano; i--){

			vetor[j+1].dia==vetor[j].dia;
		}

		vetor[j+1].dia=aux1;
	}

	printf("Datas Ordenadas:\n\n");

	for(i=0; i<tam; i++){
		printf(" %d/%d/%d\n", vetor[i].dia, vetor[i].mes, vetor[i].ano);
	}
}
