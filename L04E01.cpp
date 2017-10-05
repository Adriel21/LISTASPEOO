/*Questão 1. Suponha que criamos uma estrutura para armazenar dados de pessoas e um vetor para
armazenar
dados de várias pessoas:
struct Pessoa{
int rg;
int cpf;
char nome[80];
};
struct Pessoa cadastro[100];
Suponha que o vetor esteja ordenado em ordem crescente por valor de RG. Implemente uma função
de busca por RG, que opera como a busca binária, e que caso exista uma pessoa no cadastro com o
RG a ser buscado, devolve o índice deste cadastro e caso não exista o RG a ser buscado, devolve -1.
Autor: Adriel Araujo
- Estudante de Ciencias da Computação pela UECE 2016.2 - 1422340*/

#include <stdio.h>

int busca( int valor, int vetor[], int tam){
	
	int e=0, d = tam-1;
	int m= (e+d)/2;
	
	if(valor == vetor[m]){
		return m+1;
	}
	else if(valor>vetor[m]){
		for(m=m; m<tam; m++){
			if(vetor[m]==valor){
				return m+1;
			}else{
				return -1;
			}
		}
	}
	else if(valor<vetor[m]){
		for(e=0; e>m; e++){
			if(vetor[e]==valor){
				return e+1;
			}else{
				return -1;
			}
			e++;
		}
	}
	
}


int main(){
	
	int val, i;
	int tamanho;
	printf("Digite o tamanho do vetor:\n");
	scanf("%d", &tamanho);
	int vet[tamanho];
	
	printf("Digite o valor que voce quer encontrar:\n");
	scanf("%d", &val);
	
	for(i=0; i<tamanho; i++){
		printf("Digite a posicao %d do vetor: ", i+1);
		scanf("%d", &vet[i]);
	}
	
	printf("%d", busca(val, vet, tamanho));
return 0;
}
