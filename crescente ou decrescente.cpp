#include<stdio.h>

int x,y;

int main(){
do{
	printf("\nInsira o valor de x:\n");
	scanf("%d",&x);
	
	printf("\nInsira o valor de y:\n");
	scanf("%d",&y);
		
if(x<y){
	printf("\nNumeros crescentes\n");
}else if(x>y){
	printf("\nNumeros decrescentes\n");
}	
	
}while(x!=y);

printf("\nNumeros iguais, finalizam o loop.");

return 0;	
}
