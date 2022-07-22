#include<stdio.h>
#include<locale.h>

float f,c;

int main(){
setlocale(LC_ALL, "Portuguese");

for(f=50;f<=65;f++){
	c=0.56*(f-32);
		printf("\nO valor de %.2f °F em °C é %.2f\n",f,c);	
	}

return 0;
}
