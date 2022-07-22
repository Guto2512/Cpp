#include<stdio.h>
#include<locale.h>

int idade,dia,saldo,mes,ano;

int main(){
setlocale(LC_ALL, "Portuguese");
	
printf("Quantos dias fazem desde que você nasceu?\n");
scanf("%d",&idade);

ano=idade/365;
saldo=idade-(ano*365);

mes=saldo/30;

dia=saldo-(mes*30);

printf("\nFazem %d anos, %d meses e %d dias que você nasceu.\n",ano,mes,dia);

	return 0;
}
