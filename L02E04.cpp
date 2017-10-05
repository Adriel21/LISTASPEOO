/*Questão 3. Faça uma função que receba como parâmetros um vetor de inteiros e o tamanho lógico
do vetor e modifique este vetor de maneira que todos os números divisíveis por 2 ocorram antes dos números não divisíveis por 2.
Autor: Adriel Araujo
-Estudante de Ciencias da Computação UECE 2016.2 - 1422340
Fortaleza-Ce- Brasil*/
#include <stdio.h>
int main(){
	int i, continua, aux, n, cont=0, c2=0;
	scanf("%d", &n);
	int v[n];
	
	for(i=0; i<n; i++)
		scanf("%d", &v[i]);
		
	if (v[0]<v[1]){
		do{
			continua=0;
			for(i=0; i<n-1; i++){
				aux= v[i];
				if((v[i]>v[i+1])){
					v[i]= v[i+1];
					v[i+1]=aux;
					continua=i;
				}
				else 
					cont++;
				
			}
		}while(continua!=0);
		if(cont!=n-1)
			printf("0\n");
		else if(cont==n-1)
			printf("1\n");
	}
	else if(v[0]>v[1]){
	
		do{
			continua=0;
			for(i=0; i<n-1; i++){
				aux= v[i];
				if((v[i]<v[i+1])){
					v[i]= v[i+1];
					v[i+1]=aux;
					continua=i;
				}
				else 
					c2++;
				
			}
		}while(continua!=0);
		if(c2!=n-1)
			printf("0\n");
		else if(c2==n-1)
			printf("-1\n");
	}
	else
		printf("0\n");

return 0;
}
