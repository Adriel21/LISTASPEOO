#include <stdio.h>
#include <stdlib.h>

void junta( int v1[], int v2[] , int n1, int n2);

int main(){

	int *v1;
	int *v2;
	int i, n1, n2;

	printf("Digite a quantidade de elementos do primeiro vetor: \n");
	scanf("%d", &n1);
	v1= malloc(n1*sizeof(int));

	printf("Digite a quantidade de elementos do segundo vetor: \n");
	scanf("%d", &n2);
	v2= malloc(n2*sizeof(int));
	
	printf("\n\n");

	for(i=0; i<n1; i++){
		printf("Digite o valor da posicao %d do primeiro vetor: ", i+1);
		scanf("%d", &v1[i]);

	}

	printf("\n\n");
	
	for(i=0; i<n1; i++){
		printf("Digite o valor da posicao %d do segundo vetor: ", i+1);
		scanf("%d", &v2[i]);

	}

	junta(v1, v2, n1, n2);

return 0;
}

void junta( int v1[], int v2[] , int n1, int n2){
    int i, n3, *v3;
    int j;
    n3= n1+n2;
	v3= malloc(n3*sizeof(int));

	for(i=0; i<n1; i++){
		v3[i]=v1[i];
	}

	for(i=n1, j=0; i<n3; i++, j++){

		v3[i]=v2[j];

	}

	for(i=0; i<n3; i++){

	printf("%d", v3[i]);

	}
}
