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
