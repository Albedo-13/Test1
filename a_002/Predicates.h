#ifndef PREDICATES_H_INCLUDED
#define PREDICATES_H_INCLUDED

int mul_(int a, int b)
{
    return a*b;
}

bool even (int a)
{
    return a%2==0;
}

bool not_even (int a)
{
    return a%2==1;
}

#endif // PREDICATES_H_INCLUDED
