/*Questão 3: Crie uma função que receba como parâmetros dois vetores de inteiros, v1 e v2, e as suas
respectivas quantidades de elementos, n1 e n2. A função deverá retornar um ponteiro para um
terceiro vetor, v3, com capacidade para (n1 + n2) elementos, alocado dinamicamente, contendo a
união de v1 e v2. Por exemplo, se v1 = {11, 13, 45, 7} e v2 = {24, 4, 16, 81, 10, 12}, v3 irá conter
{11, 13, 45, 7, 24, 4, 16, 81, 10, 12}.

Question 3: Create a function that receives as parameters two vectors of integers, v1 and v2, and their
quantities of elements, n1 and n2. The function should return a pointer to a
third vector, v3, with capacity for (n1 + n2) elements, dynamically allocated, containing the
union of v1 and v2. For example, if v1 = {11, 13, 45, 7} and v2 = {24, 4, 16, 81, 10, 12}, v3 will contain
(11, 13, 45, 7, 24, 4, 16, 81, 10, 12).

Autor/Author: Adriel Araujo
-Estudante de Ciencias da Computação UECE 2016.2 - 1422340
-Computer Science student in Ceara State University*/

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
	
	for(i=0; i<n2; i++){
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
