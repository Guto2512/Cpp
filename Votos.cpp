#include<stdio.h>
#include <locale.h>

int num,vb,vn,vv;
float pb,pn,pv;

int main(){
	setlocale(LC_ALL, "Portuguese");
	
	printf("Digite o numero total de eleitores\n");
	scanf("%d",&num);
	
	printf("Quantos votos brancos?");
	scanf("%d",&vb);
	
	printf("Quantos votos nulos?");
	scanf("%d",&vn);
	
	printf("Quantos votos foram validados?");
	scanf("%d",&vv);
	
	//operações
	pb=(vb*100)/num;
	pn=(vn*100)/num;
	pv=(vv*100)/num;
	
	printf("\nPercentual de brancos %.2f%%, percentual nulos %.2f%% e percentual valido %.2f%%\n",pb,pn,pv);
return 0;
}

