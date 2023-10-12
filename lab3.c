#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main (void) {
    int A [10]; //*Максимальное количество элементов массива – 10
    int n; //Количество элементов, которые мы будем вводить
    scanf("%d", &n); //Вводим количество элементов
    for (int i = 0; i < n; i = i + 1)
{
    scanf("%d", &A [i]); //Вводим элемент массива A под номером i
}
    /* Нахождение минимального элемента */
    int imin = 0;
    int i;
    for (i = 1; i < n; i++)
         if (A[i] < A[imin])
            imin = i;
    /* Нахождение максимального элемента */
    int imax = 0;
    
    for ( i = 1; i < n; i++)
        if (A [i] > A[imax])
            imax = i;
    int isum = imin +imax;
    int abs_min = abs(A[imin]);
    int abs_max = abs(A[imax]);
    if (isum < abs_min || isum > abs_max){
        A[imin] = isum;
        A[imax] = isum;
    } else {
        int ibeg, iend;
        if (imin > imax){
            ibeg = imax + 1;
            iend = imin - 1;
        }
        else {
            ibeg = imin + 1;
            iend = imax - 1;
        }
        for (i = ibeg; i <= iend; i++)
            A[i] = 0;
    
    }
    for (i = 0; i < n; i++)
        printf ("%d ", A[i]);
    printf("\n");
  return 0; 
}