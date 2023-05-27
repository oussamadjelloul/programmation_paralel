#include <omp.h>
#include <stdio.h>

void main (){
	int v=0 ; 
	#pragma omp parallel lastprivate (v) 
	{
		int ID = omp_get_thread_num();
		printf("value of v : %d \n ",v);
		printf("Hello(%d)",ID);
		printf("world(%d)\n",ID);
		if(ID==0){
			v=1;
		}else if(ID==1){
			v=2;
		}else{
			v=3;
		}
	}
	printf("value fin of v %d \n",v);
}

