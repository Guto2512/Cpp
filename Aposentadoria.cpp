#include<stdio.h>
#include <locale.h>

int id;
float atr;

int main(){
    setlocale(LC_ALL, "Portuguese");
    
    printf("\nQual a sua idade?\n");
    scanf("%d",&id);
    
     printf("\nQuantos anos voc� j� trabalhou?\n");
    scanf("%f",&atr);
    
    if(id>=65||atr>=30||id>=60&&atr>=25){
    	printf("\nRequer aposentadoria.\n");
	}else{
		printf("\nAinda n�o pode aposentar.\n");
	}
    
return 0;
}
