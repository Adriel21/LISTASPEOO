#include <stdio.h>

float media(int m, float vetor[]){
	int i;
	float resultado;
	for(i=0; i<m ; i++){
		resultado += vetor[i];
	}
	
	resultado= resultado/m;

return resultado;
}


int main(){
	
	int m, i, j;
	printf("Digite a quantidade de alunos\n");
	scanf("%d", &m);
	
	float notas[m];
	
	for(i=0; i<m; i++){
		printf("Digite a nota %d", i+1);
		scanf("%f", &notas[i]);
	}
	
	printf("A media e: %f", media(m, notas));
	
return 0;
}
