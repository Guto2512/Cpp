#include<stdio.h>
#include <locale.h>

int tipo;
float valor,total;

int main(){
    setlocale(LC_ALL, "Portuguese");
    
    printf("Que tipo de investimento você gostaria de fazer Poupança? Digite 1 ou Fundo de Renda Fixa digite 2.\n");
    scanf("%d",&tipo);
    
    printf("Qual é o valor que deseja depositar?\n");
    scanf("%f",&valor);
    
    if(tipo==1 || tipo==2){
    	if(tipo==1){
    		total=valor+(valor*0,03);
    		printf("O valor ao fim do mês será de R$%.2f.",total);
		}else if(tipo==2){
			total=valor+(valor*0,04);
				printf("O valor ao fim do mês será de R$%.2f.",total);
		}
     }else{
		printf("Tipo errado, tente novamente.");
	}
    
    return 0;
}
