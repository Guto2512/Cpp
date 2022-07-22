#include<stdio.h>

char resp;
int cod, qde;
float valor,atotal=0;

int main(){
do{
	printf("Digite o codigo do produto\n");
	scanf("%d",&cod);
	printf("Digite a quantidade do produto\n");
	scanf("%d",&qde);
	
	if(cod==100){
		printf("\nCachorro Quente\n");
		valor=qde*10.00;
	} 
	else if(cod==101){
		printf("\nRefrigerante\n");
		valor=qde*5.00;
	}
	else printf("\nCodigo invalido\n");
	
	printf("\n %d produtos R$%.2f",qde,valor);
	atotal+=valor;
	
printf("\nMais alguma coisa? S ou N\n");
scanf(" %c",&resp);
		
} //do
while(resp=='S');

printf("\nO valor total e R$%.2f\n",atotal);
	return 0;
}
