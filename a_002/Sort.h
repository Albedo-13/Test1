#ifndef SORT_H_INCLUDED
#define SORT_H_INCLUDED

void BubbleSort(int* arr1, int size)
{
    for(int i=0; i<size; ++i)
    {
        for(int j=0; j<size - 1; ++j)
        {
            if(arr1[j]>=arr1[j+1])
            {
                std::swap(arr1[j], arr1[j+1]);
            }
        }
    }
}

#endif // SORT_H_INCLUDED

