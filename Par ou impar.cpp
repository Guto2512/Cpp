#include<stdio.h>
#include <locale.h>

int num;

int main(){
	setlocale(LC_ALL, "Portuguese");
	
		printf("Digite um n�mero\n");
	scanf("%d",&num);
	
    if(num%2==0){
    	printf("O n�mero %d � par",num);
	}else{
		printf("O n�mero %d � impar",num);
	}

return 0;
}
