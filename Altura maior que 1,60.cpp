#include<stdio.h>

int i,cont;
float alt;

int main(){
	for(i=1;i<10;i++){
		printf("Qual a sua altura?\n");
		scanf("%f",&alt);
	
		if(alt>1.60){
	     cont++;
    }
}
printf("\nEntre as 10 pessoas. %d são maiores que 1.60.\n",cont);

	return 0;
}
