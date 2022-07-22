#include<stdio.h>
#include <locale.h>

float num;

int main(){
	setlocale(LC_ALL, "Portuguese");

	
		printf("Digite um número\n");
	scanf("%f",&num);
	
	if(num>=0){
		printf("Número positivo");
	} else{
		printf("Número negativo");
	}
	
	return 0;
}
