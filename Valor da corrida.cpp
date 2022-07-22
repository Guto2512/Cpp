#include <stdio.h>
#include <locale.h>

float ti = 4.90;
float tpkm = 3.00;
float kmr, total;


int main(){
	setlocale(LC_ALL, "Portuguese");
	
	printf("De quantos km foi a viagem?\n");
	scanf("%f",&kmr);
	
	total=ti+tpkm*kmr;
	
	printf("Foram rodados %.0f km e a corrida teve o valor de R$%.2f",kmr,total);
	
return 0;	
}
