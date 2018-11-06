#include <iostream>

#include "Print.h"
#include "Predicates.h"
#include "Sort.h"
#include "algorithms.h"

//Задание по массивам №11-17

using UP = bool (*) (int);
using BP = int (*) (int, int);


void f2 (int size, int k, BP p)
{
    int arr[size];
    for (int i=0; i<size; ++i)
    {
        arr[i]=p(i, k);
    }
    Print_arr(arr, 10);
    Print_step(arr, 10);
}

void f3 (int size, UP p, UP p1)
{
    int arr1[size] {1,3,5,2,5,6,7,3,2,8};
    BubbleSort(arr1, 10);
    Print_arr(arr1, 10);
    Print_even_index (arr1, 0, 10, p);
    Print_not_even_index (arr1, 0, 10, p1);
}

void f4 (int size, UP p, UP p1)
{
    int arr1[size] {1,3,5,2,5,6,7,3,2,8};
    BubbleSort(arr1, 10);
    Print_rev_even_index (arr1, 10, 0, p);
    Print_not_even_index (arr1, 0, 10, p1);
}
void f5 (int size) //16-17
{
    int arr2[size] {1,2,3,4,5,6,7,8,9,10};
    alternation (arr2, arr2+10);
    double_alternation(arr2, arr2+10);
}

int main()
{
    f2(10, 4, mul_);
    std::cout<<std::endl;
    f3(10, even, not_even);
    std::cout<<std::endl;
    f4(10, even, not_even);
    std::cout<<std::endl;
    f5(10);
    return 0;
}
