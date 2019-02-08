/*Questão 4: Escreva um programa em linguagem C que solicita ao usuário a quantidade de alunos
de uma turma e aloca um vetor de notas (números reais). Depois de ler as notas, imprime a média
aritmética.
Question 4: Write a C language program that asks the user for the number of students
of a class and allocates a vector of notes (real numbers). After reading the notes, print the average
arithmetic.

Autor/Author: Adriel Araujo
-Estudante de Ciencias da Computação UECE 2016.2 - 1422340
-Computer Science student in Ceara State University*/

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
