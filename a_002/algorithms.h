#ifndef ALGORITHMS_H_INCLUDED
#define ALGORITHMS_H_INCLUDED

//¹16
template <class Iterator>
void alternation (Iterator first, Iterator last)
{
    --last;
    for(; first<last; ++first,--last)
    {
        std::cout<< *first << " "<< *last <<" ";
    }
    std::cout<<std::endl;
}

//¹17
template <class Iter>
void double_alternation (Iter first, Iter last)
{
    --last;
    for (; first<last; )
    {
        for(int i=0; i<2; ++i)
        {
            std::cout<<*first<<" ";
            ++first;
        }
        for(int i=0; i<2; ++i)
        {
            std::cout<<*last<<" ";
            --last;
        }
    }
    std::cout<<std::endl;
}



#endif // ALGORITHMS_H_INCLUDED
