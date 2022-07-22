#include<stdio.h>

int x,y;

int main(){
	
do{	
printf("\nInsira o valor de x:\n");
scanf("%d",&x);
	
printf("\nInsira o valor de y:\n");
scanf("%d",&y);

if(x>0 && y>0){
	printf("Primeiro quadrante");
}else if(x<0 && y>0){
	printf("Segundo quadrante");
}else if(x<0 && y<0){
	printf("Terceiro quadrante");
}else if(x>0 && y<0){
	printf("Quarto quadrante");
}
}while(x!=0 && y!=0);

return 0;	
}
