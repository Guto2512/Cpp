#include<stdio.h>

int i,aprov,exame,reprov;
float nu,nd,med;

int main(){
	for(i=0;i<3;i++){
printf("Insira a nota 1:\n");
scanf("%f",&nu);

printf("Insira a nota 2:\n");
scanf("%f",&nd);

med=(nu+nd)/2;

if(med>=7 && med <=10){
	aprov++;
}
else if(med>=3 && med <7){
	exame++;
}
else if(med>=0 && med<=3){
	reprov++;
}
}
printf("\nO numero de alunos aprovados e %d.\n",aprov);
printf("\nO numero de alunos em exame e %d.\n",exame);
printf("\nO numero de alunos reprovados e %d.\n",reprov);
	
	return 0;
}    
