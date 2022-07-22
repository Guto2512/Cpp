#include<stdio.h>
#include <locale.h>

int qnt;
float p,t,d,f;

int main(){
    setlocale(LC_ALL, "Portuguese");
    
    printf("Quantos produtos foram comprados?\n");
    scanf("%d",&qnt);
    
    printf("Qual era o preço dos produtos?\n");
    scanf("%f",&p);
    
    t=(qnt*p);
    
    if(qnt>0 && qnt<=5){
    	d=t*0.02;
    	printf("O desconto é  %.2f.",d);
	}else if(qnt >=6 && qnt<=10){
		d=t*0.03;
		printf("O desconto é  %.2f.",d);
	}else if(qnt > 10){
	    d=t*0.05;
		printf("O desconto é  %.2f.",d);
	}
	
	f=t-d;
		printf("\nO valor total a pagar com o desconto é R$%.2f.",f);
    
    return 0;
}
