#include<stdio.h>

int vu[5],vd[5],r[5],i;

int main(){

for(i=0;i<5;i++){
	printf("Insira um numero para o primeiro vetor\n");
	scanf("%d",&vu[i]);
}

for(i=0;i<5;i++){
	printf("\nInsira um numero para o segundo vetor\n");
	scanf("%d",&vd[i]);
	r[i]=vu[i]+vd[i];
}

for(i=0;i<5;i++){
	printf("\nv[%d]: %d\n",i,r[i]);
}
	return 0;
}
