#include<stdio.h>
#include<locale.h>

float n1,n2;
char op;

int main(){
	setlocale(LC_ALL, "Portuguese");
	
	printf("Digite um número:\n");
	scanf("%f",&n1);
	
	printf("Digite o operador: + - * /\n");
	scanf(" %c",&op);
	
	printf("Digite outro número:\n");
	scanf("%f",&n2);
	
	switch(op){
		case '+': 
		printf("\no resultado da soma é %.1f\n", n1+n2);
		break;
		
		case '-': 
		printf("\no resultado da subtração é %.1f\n", n1-n2);
		break;
		
		case '*': 
		printf("\no resultado da multiplicação é %.1f\n", n1*n2);
		break;
		
		case '/': 
		if(n2!=0)
		   printf("\no resultado da divisão é %.1f\n", n1/n2);
		else
		printf("\n0 não é valido.");
		break;
		
		default:
		("\nOperador invalido\n");
	}
	
	return 0;
}
