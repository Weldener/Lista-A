#include<stdio.h>
#include<stdlib.h>

 int main (void)
{
	char nome[100];
	int idade;
	printf("Digite seu nome: \n");
	scanf("%s",&nome);
	printf("Digite sua idade: \n");
	scanf("%d",&idade);
	printf("\n%s","\n%d",nome,idade);
	
	system("PAUSE");
	return 0;
}
