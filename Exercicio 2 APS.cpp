#include<stdio.h>
#include<locale.h>
#include<math.h>

float a,b,c,del,xu,xd;

int main(){
setlocale(LC_ALL, "Portuguese");

	printf("Qual vai ser o valor de a?\n");
	scanf("%f",&a);

    printf("Qual vai ser o valor de b?\n");
	scanf("%f",&b);
	
	printf("Qual vai ser o valor de c?\n");
	scanf("%f",&c);
	
	del = ((b * b) - 4 * a * c);
	
	if(del<0){
	  printf("Não há raiz exata para %.1f.",del);	
	  
    }
	else if(del==0){
	  xu=(-b + sqrt(del))/(2*a);
	  printf("Como o valor de Delta é 0, temos apenas uma raiz, que é %.1f.",xu);	
	  
	}else if(del>0){
		xu=((-b)+ sqrt(del))/(2*a);
		xd=((-b)- sqrt(del))/(2*a);
		printf("Seu delta é %.1f s valores das raizes são %.1f e %.1f.",del,xu,xd);
	}

	return 0;
}
