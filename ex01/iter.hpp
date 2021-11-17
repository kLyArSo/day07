#include <string>
#include <iostream>

template <typename T>
void    iter(const T array[], const unsigned int length, void(*ptr)(const T& , int))
{
    unsigned int i  = 0;
    while (i < length)
    {
        ptr(array[i], i);
        i++;
    }
}

// template <typename S>
//     void(*ptr)(T , int);
// template <typename S>
// void  print(S   obj, int index)
// {
//     std::cout << "This is S_instance : " << obj[index] << ".\nThis is index : "<< index << ".\n";
// }