//
// Created by oussama on 5/27/23.
//

#include <omp.h>
#include <stdio.h>
#include <string.h>

int main() {
    char st[20] = "";
   // omp_set_num_threads(2);
#pragma omp parallel
    {
#pragma omp sections
    {
#pragma omp section
        strcat(st, "oussama ");
#pragma omp section
            strcat(st, "djelloul");
    }
}
    puts(st);
return 0;
}

