#include<stdio.h>
#include<locale.h>

float n1,n2;
char op;

int main(){
	setlocale(LC_ALL, "Portuguese");
	
	printf("Digite um n�mero:\n");
	scanf("%f",&n1);
	
	printf("Digite o operador: + - * /\n");
	scanf(" %c",&op);
	
	printf("Digite outro n�mero:\n");
	scanf("%f",&n2);
	
	switch(op){
		case '+': 
		printf("\no resultado da soma � %.1f\n", n1+n2);
		break;
		
		case '-': 
		printf("\no resultado da subtra��o � %.1f\n", n1-n2);
		break;
		
		case '*': 
		printf("\no resultado da multiplica��o � %.1f\n", n1*n2);
		break;
		
		case '/': 
		if(n2!=0)
		   printf("\no resultado da divis�o � %.1f\n", n1/n2);
		else
		printf("\n0 n�o � valido.");
		break;
		
		default:
		("\nOperador invalido\n");
	}
	
	return 0;
}
