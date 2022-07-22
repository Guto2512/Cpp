#include<stdio.h>
#include<locale.h>

int i;

int main(){
setlocale(LC_ALL, "Portuguese");
	
//	for(i=1;i<=100;i++){
	//	printf("\n%d\n",i);	
//	}
	
	for(i=100;i>=1;i--){
		printf("\n%d\n",i);	
	}

return 0;	
}
