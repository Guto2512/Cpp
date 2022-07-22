#include<stdio.h>
#include <locale.h>

int a,b,c;

int main(){
    setlocale(LC_ALL, "Portuguese");
    
    printf("Um numero.\n");
    scanf("%d",&a);
    
    printf("Mais um numero.\n");
    scanf("%d",&b);
    
    printf("Ultimo numero.\n");
    scanf("%d",&c);
    
    if(a==b && b==c){
       printf("Triangulo de todos os lados iguais, triangulo equilatero.\n");
	}else if(a==b || b==c || c==a){
		printf("Triangulo com 2 lados iguais, triangulo isóceles.\n");
	}else{
		printf("Triangulo sem lados iguais, triangulo escaleno.\n");
	}
    
return 0;
}
