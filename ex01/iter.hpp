#ifndef _ITER_HPP
#define _ITER_HPP
#include <string>
#include <iostream>

template <typename T>
void    iter(const T array[], const unsigned int length, void(*ptr)(const T&))
{
    unsigned int i  = 0;
    while (i < length)
    {
        ptr(array[i]);
        i++;
    }
}
#endif