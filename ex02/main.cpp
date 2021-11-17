#include "Array.hpp"

int main()
{
    Array< float > kda(10);

    unsigned int  i = 0;
    while(i < kda.size())
    {
        std::cout << kda[i] << std::endl;
        i++;
    }
}