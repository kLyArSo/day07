#include "iter.hpp"


template <typename S>
void  print(const S   &obj, int index)
{
    std::cout << "This is S_instance : " << obj << ".\nThis is index : "<< index << ".\n";
}
int     main()
{
    int array_1[10] = {0,1,2,3,4,5,6,7,8,9};
    int length_1 = 10;

    char array_2[11] = "*/+_)-=)(&";
    int length_2 = 10;

    std::string array_3[10] = {"000","111","222","333","444","555"
    ,"666","777","888","999"};
    int length_3 = 10;

    float array_4[10] = {0.0000f,1.1111f,2.2222f,3.3333f,4.4444f
    ,5.5555f,6.6666f,7.7777f,8.8888f,9.9999f};
    int length_4 = 10;

    double array_5[10] = {0.0000,1.1111,2.2222,3.3333,4.4444
    ,5.5555,6.6666,7.7777,8.8888f,9.9999};
    int length_5 = 10;
    std::cout << "----------------------------------------\n";
    iter(array_1, length_1, print);
    std::cout << "----------------------------------------\n";
    iter(array_2, length_2, print);
    std::cout << "----------------------------------------\n";
    iter(array_3, length_3, print);
    std::cout << "----------------------------------------\n";
    iter(array_4, length_4, print);
    std::cout << "----------------------------------------\n";
    iter(array_5, length_5, print);
}