#include<stdio.h>
#include <locale.h>

int qnt,max,min;
float med;

int main(){
	setlocale(LC_ALL, "Portuguese");
	
	printf("Qual é a quantidade atual no estoque?");
	scanf("%d",&qnt);
	
	printf("Qual é a quantidade maxima do estoque?");
	scanf("%d",&max);
	
	printf("Qual é a quantidade minima do estoque?");
	scanf("%d",&min);
	
	med=(max+min)/2;
	
	if(qnt>=med){
		printf("\nNão efetuar compra.\n");
	}else{
		printf("\nEfetuar compra.\n");
	}
		
return 0;
}
