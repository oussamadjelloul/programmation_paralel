//
// Created by oussama on 5/27/23.
//


#include <stdio.h>
#include <omp.h>
#include <stdlib.h>

int main() {
    int nthreads, tid;
    nthreads =4;
    #pragma  omp parallel private(nthreads, tid) num_threads(nthreads)
    {
        tid = omp_get_thread_num();
        printf("Hello world from thread = %d\n", tid);
        if (tid == 0) {
          #pragma  omp master
            printf("Number of threads = %d\n", nthreads);

        }

    }
    exit(0);
}
