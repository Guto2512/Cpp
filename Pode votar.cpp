#include<stdio.h>
#include <locale.h>

int ano;
int nas;
int idade;

int main(){
	setlocale(LC_ALL, "Portuguese");
	
	printf("Que ano estamos?");
	scanf("%d",&ano);
	
	printf("Que ano voc� nasceu?");
	scanf("%d",&nas);
	
	idade= ano - nas;
	
	if(idade>=16){
		printf("Voc� tem %d anos, j� pode votar este ano.",idade);
	}else{
		printf("Voc� tem %d anos, ainda n�o pode votar este ano.",idade);
		
	return 0;	
	}
	
	
return 0;
}
