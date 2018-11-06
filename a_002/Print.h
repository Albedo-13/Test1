#ifndef PRINT_H_INCLUDED
#define PRINT_H_INCLUDED
using UP = bool (*) (int);
void Print_arr(int* arr, int size)
{
    for(int i=0; i<size; ++i)
    {
        std::cout<<arr[i]<< " ";
    }
    std::cout<< std::endl;
}

void Print_step (int* arr, int size)
{
    for(int i=0; i<size; i=i+3)
    {
        std::cout<<arr[i]<< " ";
    }
    std::cout<< std::endl;
}

void Print_rev_step (int* arr, int last, int first)
{
    for(; last>first; last=last-2)
    {
        std::cout<<arr[last]<< " ";
    }
    std::cout<< std::endl;
}

void Print_even_index (int* arr1, int first, int last, UP even)
{
    for(; first<last; ++first)
    {
        if(even(arr1[first]))
        {
            std::cout<<first<< " ";
        }
    }
    std::cout<< std::endl;
}

void Print_not_even_index (int* arr1, int first, int last, UP not_even)
{
    for(; first<last; ++first)
    {
        if(not_even(arr1[first]))
        {
            std::cout<<first<< " ";
        }
    }
    std::cout<< std::endl;
}

void Print_rev_even_index (int* arr1, int last, int first, UP even)
{
    --last;
    for(last; last>first; --last)
    {
        if(even(arr1[last]))
        {
            std::cout<<last<< " ";
        }
    }
    std::cout<< std::endl;
}

#endif // PRINT_H_INCLUDED
