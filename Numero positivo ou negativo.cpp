#include<stdio.h>
#include <locale.h>

float num;

int main(){
	setlocale(LC_ALL, "Portuguese");

	
		printf("Digite um n�mero\n");
	scanf("%f",&num);
	
	if(num>=0){
		printf("N�mero positivo");
	} else{
		printf("N�mero negativo");
	}
	
	return 0;
}
