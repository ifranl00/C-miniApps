#include <iostream>

/* 6.Write a program that defines two variables of type int with automatic storage duration (placed on the stack) inside the main function scope.    */


int main()
{
    int a = 589;
    int b = 893;

    std::cout<<"The value of a with automatic storage duration is: "<<a<<'\n';
    std::cout<<"The value of b with automatic storage duration is: "<<b<<'\n';
    return 0;
}









