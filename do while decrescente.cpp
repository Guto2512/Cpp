#include<stdio.h>

int num,i;

int main(){
do{
	printf("Insira um numero\n");
	scanf("%d",&num);
}
while(num<=0);
	
		for(i=num;i>=0;i--){
		printf("\n%d\n",i);	
	}
	return 0;
}



