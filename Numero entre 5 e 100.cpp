#include<stdio.h>
#include <locale.h>

int num;

int main(){
    setlocale(LC_ALL, "Portuguese");
    
    printf("\nDigite um n�mero\n");
    scanf("%d",&num);
    
    if(num>=5&&num<=100){
    	printf("\nO seu numero est� dentro das leis, ele � %d.\n",num);
	}else{
		printf("\nSeu n�mero n�o � valido.\n");
	}
    
return 0;
}
