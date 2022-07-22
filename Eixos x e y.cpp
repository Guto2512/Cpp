#include<stdio.h>
#include<locale.h>
#include<math.h>

float xu, xd, yu, yd, d;

int main(){
    setlocale(LC_ALL, "Portuguese");
    
    printf("Insira o valor de x1.\n");
    scanf("%f",&xu);
    
    printf("Insira o valor de y1.\n");
    scanf("%f",&yu);
    
    printf("Insira o valor de x2.\n");
    scanf("%f",&xd);
    
    printf("Insira o valor de y2.\n");
    scanf("%f",&yd);
    
    d=sqrt(pow(xd-xu,2) + pow(yd - yu,2));
    
    printf("O valor da distância é %.2f.", d);
    
    

return 0;
}
