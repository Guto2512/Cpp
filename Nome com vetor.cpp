#include<stdio.h>

int i;
char nome[5][10];

int main(){
for(i=0;i<5;i++){
	printf("\nInsira o nome\n");
	scanf("%s",&nome[i]);
}

for(i=0;i<5;i++){
	printf("\nv[%d]: %s\n",i+1,nome[i]);
}
	return 0;
}
