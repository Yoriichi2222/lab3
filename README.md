## Proga
### отчёт по лабораторной 1
#### задание
Сложность:
Rare
Напишите программу по своему варианту.

Оформите отчёт в README.md.
Отчёт должен содержать:
Задание

Описание проделанной работы

Скриншоты результатов

Ссылки на используемые материалы

##
Этапы работы
1. Задание по Варианту №1

Найти сумму индексов максимального и минимального элемента массива, если она меньше/больше по модулю минимума/максимума соответственно, записать её на их место, иначе обнулить массив между минимум и максимумом.

2. Код
```#include <stdio.h>
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
```
3. Результаты

![Alt text](<Снимок экрана 2023-10-12 в 13.52.21.png>)

![Alt text](<Снимок экрана 2023-10-12 в 13.54.12.png>)
4. Список использованных источников

1. https://www.youtube.com/watch?v=Zpml91CY8jY&t=670s