#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int i,v[20],vd[20],vt[20];

int main(){
srand(time(NULL));

for(i=0;i<19;i++){
	v[i]=rand()%100; //Gera numeros entre 0 e 100
	vd[i]=rand()%100;
	
printf("\nvetor 1[%d]=%d\n",i+1,v[i]);	
printf("\nvetor 2[%d]=%d\n",i+1,vd[i]);
}

for(i=0;i<19;i++){
	vt[i]=v[i]*vd[i];
printf("\nvetor 3[%d]=%d\n",i+1,vt[i]);
}



return 0;
}
