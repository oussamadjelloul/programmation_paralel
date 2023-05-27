#include <omp.h>
#include <stdio.h>

void main (){
	int v=0 ; 
	//OMP_NUM_THREADS(10);
	//OMP_SCHEDULE(static,90);
	#pragma omp parallel 
	{
		int ID = omp_get_thread_num();
		printf("value of v : %d \n ",v);
		printf("Hello(%d)",ID);
		printf("world(%d)\n",ID);
	        #pragma omp master 
	        {
	          printf("i am master thread : %d \n",ID);  
	        }	
	}
	int c = omp_get_num_procs();
	printf("nombres of core are : %d \n",c);
	int t = omp_get_wtime();
	printf("time : %d \n",t);
	int threads = omp_get_num_threads();
	printf("nombre of treads : %d",threads);
}

