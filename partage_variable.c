#include <omp.h>
#include <stdio.h>
void main ()
{
	int v=0;
	#pragma omp parallel shared(v)
	{
		int ID = omp_get_thread_num ();
		printf("value of v : %d \n",v);
		v++;
		printf("Hello(%d)", ID);
		printf("world(%d) \n", ID);
	}
	printf("value total of v :%d \n",v);
}
