#include<stdio.h>

int i;
float alt,acum=0,med;

int main(){
	for(i=0;i<3;i++){
		printf("Qual a sua altura?\n");
		scanf("%f",&alt);
		
		acum+=alt;	
}

med=acum/3;

printf("\nA media de altura e %.2f\n",med);

	return 0;
}
