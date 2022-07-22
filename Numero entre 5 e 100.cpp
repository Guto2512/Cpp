#include<stdio.h>
#include <locale.h>

int num;

int main(){
    setlocale(LC_ALL, "Portuguese");
    
    printf("\nDigite um número\n");
    scanf("%d",&num);
    
    if(num>=5&&num<=100){
    	printf("\nO seu numero está dentro das leis, ele é %d.\n",num);
	}else{
		printf("\nSeu número não é valido.\n");
	}
    
return 0;
}
