/*Questão 2: Faça um programa que leia um arquivo texto contendo números inteiros, um número
por linha, ordene os inteiros e escreva o resultado da ordenção em um novo arquivo texto, um
número por linha.
Question 2: Make a program that reads a text file containing integers, one number per line, 
sorts the integers, and writes the result of the sorting into a new text file, one number per 
line.

Autor/Author: Adriel Araujo
-Estudante de Ciencias da Computação UECE 2016.2 - 1422340
-Computer Science student in Ceara State University*/

#include <stdio.h>
#include<stdlib.h>

int main(){
	int i=0, aux, j;
	int vetor[5];
	char string[5];
	FILE *file;
	file = fopen("teste.txt", "r");
	
	if(file== NULL){
		printf("Nao foi possivel abrir o arquivo.\n");
		return 0;
	}
	
	while(fscanf(file, "%s", string)!= EOF){
		vetor[i]= atoi(string);
		i++;
	}
	
	for(i=0;  i<5; i++)
		printf("%d\n", vetor[i]);
		
	fclose(file);
	
	for(i=1; i<5; i++){
		aux= vetor[i];
		j= i-1;
		while(j>=0 && vetor[j]>aux){
			vetor[j+1]=vetor[j];	
			j--;
		}
		vetor[j+1]= aux;
	}
	
	for(i=0;  i<5; i++)
		printf("%d\n", vetor[i]);
	
return 0;
}
