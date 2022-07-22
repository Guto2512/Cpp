#include<stdio.h>

float sal,nsal;

int main(){
	printf("Qual o seu salario\n");
	scanf("%f",&sal);
	
	nsal=sal+(sal*0.25);  //nsal=sal*1.25;
    	
	printf("\nSeu novo salario e R$ %.2f\n",nsal);
return 0;
}

