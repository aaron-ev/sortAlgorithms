#include <stdio.h>
#include <stdlib.h>

#define SIZE_A 10
#include "sortAlgorithms.h"
int main()
{
    int32_t A[SIZE_A] = {8,8,8,8,0,0,0,2,1,0};
    heapSort(A,SIZE_A-1);
    return 0;
}