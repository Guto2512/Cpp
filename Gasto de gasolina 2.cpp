#include<stdio.h>
#include <locale.h>

int km = 12;
float tem, vm, total;

int main(){
	setlocale(LC_ALL, "Portuguese");
	
	printf("Informe o tempo de viagem EM HORAS:\n");
	scanf("%f",&tem);
	
	printf("Informe quantos quilometros teve a viagem EM KM/h:\n");
	scanf("%f",&vm);
	
	total=(vm*tem)/12;
	
    printf("O gasto foi de %.3f",total);
	
	
return 0;
}
