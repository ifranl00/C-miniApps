#include <iostream>
#include <memory>
/*
6.Write a program that defines a unique pointer to an integer value.
Use the std::make_unique function to create a pointer.
*/


int main()
{
    std::unique_ptr<int> myP = std::make_unique<int>(89);
    std::cout<<"Value of unique pointed integer: "<<*myP<<'\n';
    return 0;
}

