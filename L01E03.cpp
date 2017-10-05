/*Questão 3. Escreva um programa que lê uma string de até 50 caracteres, e imprime “Palindromo”
(uma palavra ou frase, que é igual quando lida da esquerda para a direita ou da direita para a
esquerda) caso a string seja um palindromo e “Nao Palindromo”caso contrário. Exemplo de
palindromo: saudavel leva duas.
Autor: Adriel Araujo - Estudante de Ciencias da Computação pela UECE - 1422340
*/

#include <stdio.h>
#include <string.h>
int main() {
	int a, b, i , j;
	char s[50], str[50];
	fgets(s, sizeof(s), stdin);
	int len = strlen(s);
	for ( i = 0, j = 0; i < len; i++, j++) {
	    if (s[j] == ' ') {
	        j++;
	    }
	 s[i] = s[j];
	}
	
	i=0;
	
	for(b= strlen(s) - 1; b>=0; b--){
		str[i]= s[b];
		i++;
	}
	
	str[i]='\0';
	
	a= strcmp(str, s);
	
	if(a==0){
		printf("Palindromo\n");
	}
	else{
		printf("Nao Palindromo\n");
	}
	
	return 0;
}
