#include<stdio.h>

int i,cont;

int main(){
	for(i=2000;i<=4000;i++){
	
		if(i%2 == 0){
	     cont++;
    }
}
printf("\nExistem %d numeros entre 2000 e 4000 que quando divididos por 2 tem resto 0.\n",cont);

	return 0;
}    
