#include <omp.h>
#include <stdio.h>

void main() {
    int a[10], b[10], c[10];
    for (int i = 0; i < 10; i++) {
        a[i] = i + 1;
        b[i] = i + 1;
        c[i] = i + 1;
    }
    int j;
    //omp_set_num_threads(4);
    //omp_set_num_thread(4);
#pragma omp parallel for
    for (j = 0; j < 10; j++) {
        c[j] = a[j] * b[j];
    }
}

