#include<stdio.h>
#include <locale.h>

int qnt,max,min;
float med;

int main(){
	setlocale(LC_ALL, "Portuguese");
	
	printf("Qual � a quantidade atual no estoque?");
	scanf("%d",&qnt);
	
	printf("Qual � a quantidade maxima do estoque?");
	scanf("%d",&max);
	
	printf("Qual � a quantidade minima do estoque?");
	scanf("%d",&min);
	
	med=(max+min)/2;
	
	if(qnt>=med){
		printf("\nN�o efetuar compra.\n");
	}else{
		printf("\nEfetuar compra.\n");
	}
		
return 0;
}
