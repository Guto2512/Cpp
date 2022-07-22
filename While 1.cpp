#include<stdio.h>

int i,n;
float num,soma=0;

int main(){
printf("Quantos numeros voce vai usar?\n");
scanf("%d",&n);

while(i<n){
	printf("Insira um numero:\n");
    scanf("%f",&num);
    
    
    if(num>0){
    	soma+=num;
    i++;	
	}
}

printf("A soma dos numeros e %.1f\n",soma);

	return 0;
}
