#include<stdio.h>
#include<locale.h>

float f, c;

int main(){
	setlocale(LC_ALL, "Portuguese");
	
	printf("Insira o valor em Fahrenheit\n");
	scanf("%f",&f);
	
	c=((f-32)*5)/9;
		
	printf("A conversão %.1f°C.",c);
	
	
	return 0;
}
