#include<stdio.h>

int i;
float num,soma=0,acum=0,med;

int main(){
	for(i=0;i<3;i++){
		printf("Digite um numero\n");
		scanf("%f",&num);
		
		acum+=num;  //Acumula TODOS os numeros
	if(num<50){
		soma+=num; //Acumula somente numeros MENORES que 50.
	}	
}
med=acum/3;  //Media de todos os numeros

printf("\n A media de todos os numeros e %.1f e a soma dos numeros menores que 50 e %.1f\n",med,soma);

	return 0;
}
