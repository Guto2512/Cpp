#include<stdio.h>
#include<math.h>

int i,v[16],acum=0;

int main(){

for(i=0;i<16;i++){
	v[i]= pow(2,i);
	acum+=v[i];
	printf("\nv[%d]=%d\n",i+1,v[i]);
}

printf("\nA somatoria dos numeros e %d\n",acum);

return 0;
}
