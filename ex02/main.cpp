#include "Array.hpp"

int main()
{
    try
    {
        Array< float > kda(5);

        unsigned int  i = 0;
        kda[2] = 3;
        while(i < kda.size())
        {
            std::cout << kda[i] << std::endl;
            i++;
        }
        std::cout << "------------------------\n";

        std::cout << kda[kda.size()];
    }
    catch(std::exception &e)
    {
        std::cout << e.what() << std::endl;
    }
}