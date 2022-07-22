#include<stdio.h>
#include <locale.h>
char sex;
float altura, pi;

int main(){
	setlocale(LC_ALL, "Portuguese");
	
	printf("Insira o sua altura:\n");
	scanf("%f",&altura);
	
	printf("Insira o seu sexo (M para masculino e F para feminino)\n");
	scanf("%c",&sex);
	
	if(altura >= 1,00 && sex == 'M'){
		pi = (72.7 *altura)- 58;
		printf("Você é um homem de %.2f de altura e o seu peso ideal é %.2f",altura, sex);
	}else if(altura >= 1,00 && sex == 'F'){
		 pi = (62.1*altura)-44,7;
		printf("Você é uma mulher de %.2f de altura e o seu peso ideal é %.2f",altura, sex);
	}else{
		printf("Dados invalidos");
	}
	
return 0;
}
