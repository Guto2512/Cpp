#include<stdio.h>

int n,i;
float nu,nd,nt,med;

int main(){


printf("\nQuantos alunos tem na sala?\n");
scanf("%d",&n);

for(i=0;i<n;i++){
	printf("\nDigite a nota 1:\n");
	scanf("%f",&nu);
	printf("\nDigite a nota 2:\n");
	scanf("%f",&nd);
    printf("\nDigite a nota 3:\n");
	scanf("%f",&nt);
	
	med=(nu*0.2)+(nd*0.3)+(nt*0.5);
	
	printf("\nA media do aluno %d e %.1f\n",i+1,med);
}

return 0;
}
