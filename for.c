#include <omp.h>
#include <stdio.h>

void main(){
	int v=0; 
	int max=8;
	int a[max];
	int r=0; 
	#pragma omp parallel
	{ 
		int id =omp_get_thread_num();
		printf("id of thread : %d \n",id);
		#pragma omp for schedule(static,8) 
		for (int i=0; i<max; i++)
		{
			a[i]=i ; 
			r+=a[i];
		}
		
	}
	printf("value of r : %d",r);
}
