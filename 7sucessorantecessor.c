#include<stdio.h>
#include<stdlib.h>

void main ()
{
	int num;
	
	printf("Escreva o numero: ");
	scanf("%d",&num);
	printf("Antecessor: %d Sucessor: %d", num-1,num+1);
}
