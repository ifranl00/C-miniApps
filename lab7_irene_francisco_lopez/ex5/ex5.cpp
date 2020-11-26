#include <iostream>
#include <string>
/*
5.Write a program that uses a static_cast function to convert between fundamental types.
*/


int main()
{
    int a = 8;
    double b = 54.3;
    bool c = true;

    bool r1 = static_cast<bool>(a);
    double r2 = static_cast<double>(a);
    int r3 = static_cast<int>(b);

    std::cout<<"From int 8 to boolean: "<<r1<<'\n';
    std::cout<<"From int 8 to double: "<<r2<<'\n';
    std::cout<<"From double 54.3 to int: "<<r3<<'\n';
    return 0;
}

