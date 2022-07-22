#include<stdio.h>

int i,n,aluno;
float alt,raio,vol,maior;

int main(){
	
	printf("Quantos alunos tem na sala?\n");
	scanf("%d",&n);
	
	for(i=1;i<=n;i++){//a Variavel "i" representa qual é o aluno
			printf("\nQual a altura do cilindro?\n");
	        scanf("%f",&alt);
	        
	       	printf("\nQual o raio do cilindro?\n");
	        scanf("%f",&raio);
	        
	        vol= 3.141592*raio*raio*alt;
	        printf("\nO aluno %d tem o cilindro de volume %.2f\n.",i,vol);
	        
	        if(vol>maior){
	        	maior=vol;
	        	aluno=i;
			}
	    }
	    printf("\nO aluno %d possui o maior volume de cilindro, %.2f\n.",aluno,maior);
	    return 0;
}
