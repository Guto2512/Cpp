#include<stdio.h>
#include <locale.h>

int idade;

int main(){
    setlocale(LC_ALL, "Portuguese");
    
    printf("Qual a sua idade?\n");
    scanf("%d",&idade);
    
    if(idade >=5 && idade <=110){
    	if(idade>=5 && idade<=7){
    		printf("Sua categoria é Infantil.");
		}else if(idade >=8 && idade<=10){
			printf("Sua categoria é Juvenil.");
		}else if(idade >=11 && idade<=15){
			printf("Sua categoria é Adolecente.");
		}else if(idade >=16 && idade <=30){
			printf("Sua categoria é Adulto.");
		}else if(idade > 30){
			printf("Sua categoria é Sênior.");
		}
	}
	else{
		printf("Sua idade não é permitida em nenhuma categoria.");
	}
    return 0;
}
