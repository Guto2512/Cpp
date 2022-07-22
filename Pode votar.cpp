#include<stdio.h>
#include <locale.h>

int ano;
int nas;
int idade;

int main(){
	setlocale(LC_ALL, "Portuguese");
	
	printf("Que ano estamos?");
	scanf("%d",&ano);
	
	printf("Que ano você nasceu?");
	scanf("%d",&nas);
	
	idade= ano - nas;
	
	if(idade>=16){
		printf("Você tem %d anos, já pode votar este ano.",idade);
	}else{
		printf("Você tem %d anos, ainda não pode votar este ano.",idade);
		
	return 0;	
	}
	
	
return 0;
}
