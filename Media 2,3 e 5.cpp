#include<stdio.h>
#include <locale.h>

float n1, n2, n3, total;

int main(){
	setlocale(LC_ALL, "Portuguese");
	
	printf("Informe a sua primeira nota:\n");
	scanf("%f",&n1);
	
	printf("Informe a sua segunda nota:\n");
	scanf("%f",&n2);
	
	printf("Informe a sua terceira nota:\n");
	scanf("%f",&n3);
	
	total=(n1*0.3+n2*0.4+n3*0.5);
	
	printf("Sua média é %.1f.", total);

	
return 0;
}
	
