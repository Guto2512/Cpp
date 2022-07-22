#include<stdio.h>

int v[5],i;

int main(){

for(i=0;i<5;i++){
	printf("Insira um numero\n");
	scanf("%d",&v[i]);
	v[i]=v[i]*2;
}

for(i=0;i<5;i++){
	printf("\nv[%d]: %d\n",i,v[i]);
}
	return 0;
}
