/*Questão 3: Faça uma função que receba como parâmetros um vetor de inteiros e o tamanho lógico
do vetor e modifique este vetor de maneira que todos os números divisíveis por 2 ocorram antes 
dos números não divisíveis por 2.
Question 3: Make a function that takes as parameters an integer vector and the logical size of 
the vector and modify this vector so that all numbers divisible by 2 occur before the numbers 
not divisible by 2.

Autor/Author: Adriel Araujo
-Estudante de Ciencias da Computação UECE 2016.2 - 1422340
-Computer Science student in Ceara State University*/

#include <stdio.h>

int main(){
	int i, continua, aux;
	int v[5]= {3,4,5,6,8};
	
	
	do{
		continua=0;
		for(i=1; i<5; i++){
			aux= v[i];
			if((v[i]%2==0)&&(v[i-1]%2!=0)){
				v[i]= v[i-1];
				v[i-1]=aux;
				continua=i;
			}
		}
	}while(continua!=0);
	
	for(i=0; i<5; i++)
	printf("%d\n", v[i]);
	
return 0;
}
