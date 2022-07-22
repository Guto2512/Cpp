#include<stdio.h>

int idade;

int main(){
	printf("Digite sua idade\n");
	scanf("%d",&idade);
	
	if(idade >=18){
		printf("Voce pode ser preso ja, pois tem - %d anos\n", idade);
	}
	else{
		printf("Voce e menor de idade - %d anos\n",idade);
	}
	
	return 0;
}
