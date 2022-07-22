#include<stdio.h>
#include<locale.h>

int i;

int main(){
setlocale(LC_ALL, "Portuguese");
	
	for(i=2;i<=100;i+=2){
		printf("\n%d\n",i);
		
	}

return 0;	
}
