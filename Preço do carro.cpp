#iclude<stdio.h>

float cf,preco;

int main(){
	printf("Digite o preco do custo de fabrica do carro\n");
	scanf("%f",&cf);
	
	preco=cf+(cf*0.28)+(cf*0.45);	
	
	printf("\nO preco final do carro e R$ %.2f\n",preco);
	return 0;
}

