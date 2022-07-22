#include<stdio.h>
#include <locale.h>

float a,e,m;

int main(){
    setlocale(LC_ALL, "Portuguese");
    
    printf("Digite sua primeira nota\n");
    scanf("%f",&a);
    
     printf("Digite sua segunda nota\n");
    scanf("%f",&e);
    
    m=(a+e)/2;
    
	//Caso as notas NÃO estejam de acordo com as regras, pula direto para o else.
if(m>=0 && m<=10){
	
    if(m>=7 && m<=10){
    	printf("Sua nota é %.2f, aprovado.",m);
	}else if(m>=3 && m<7){
		printf("Sua nota é %.2f, examinada.",m);
	}else if(m>=0 && m<3){
		printf("Sua nota é %.2f, reprovado.",m);
	}}
else{
  printf("Nota invalida");
	}
return 0;
}
