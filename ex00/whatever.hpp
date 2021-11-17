#ifndef _WHATEVER_HPP
#define _WHATEVER_HPP

#include <iostream>
#include <string>
template<typename T>
void    swap(T& a, T& b)
{
    T c;
    c = a;
    a = b;
    b = c;
}

template<typename T>
T    &min(T& a, T& b)
{
    if (a == b)
        return (b);
    else
        return (a < b ? a : b);
}

template<typename T>
T    &max(T& a, T& b)
{
    if (a == b)
        return (b);
    else
        return (a < b ? b : a);
}

#endif