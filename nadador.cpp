#include<stdio.h>
#include <locale.h>

int idade;

int main(){
    setlocale(LC_ALL, "Portuguese");
    
    printf("Qual a sua idade?\n");
    scanf("%d",&idade);
    
    if(idade >=5 && idade <=110){
    	if(idade>=5 && idade<=7){
    		printf("Sua categoria � Infantil.");
		}else if(idade >=8 && idade<=10){
			printf("Sua categoria � Juvenil.");
		}else if(idade >=11 && idade<=15){
			printf("Sua categoria � Adolecente.");
		}else if(idade >=16 && idade <=30){
			printf("Sua categoria � Adulto.");
		}else if(idade > 30){
			printf("Sua categoria � S�nior.");
		}
	}
	else{
		printf("Sua idade n�o � permitida em nenhuma categoria.");
	}
    return 0;
}
