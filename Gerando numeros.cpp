#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int i,v[5],acum=0;

int main(){
srand(time(NULL));

for(i=0;i<5;i++){
	v[i]=rand()%100; //Gera numeros entre 0 e 100
	acum+=v[i];
	printf("\nv[%d]=%d\n",i,v[i]);
}

printf("\nA somatoria dos numeros e %d\n",acum);

return 0;
}
