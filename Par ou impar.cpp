#include<stdio.h>
#include <locale.h>

int num;

int main(){
	setlocale(LC_ALL, "Portuguese");
	
		printf("Digite um número\n");
	scanf("%d",&num);
	
    if(num%2==0){
    	printf("O número %d é par",num);
	}else{
		printf("O número %d é impar",num);
	}

return 0;
}
