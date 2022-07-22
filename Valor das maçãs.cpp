#include<stdio.h>
#include <locale.h>

int m;
float valor;

int main(){
	setlocale(LC_ALL, "Portuguese");
	
	printf("Quantas maçãs foram compradas?");
	scanf("%d",&m);
	
	if(m< 12){
		valor=m*1.30;
		printf("O valor total é de R$ %.2f",valor);
	}else if(m>=12){
		valor=m*1.00;
		printf("O valor total é de R$ %.2f",valor);
	}
	
return 0;	
} 



