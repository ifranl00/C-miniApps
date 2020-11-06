#include <iostream>

/* 7.Write a program which defines a variable of type int* which points to an object with dynamic storage duration (placed on the heap).  */


int main()
{
    int b = 893;
    int* p = new int{b};

    std::cout<<"The value of the int pointer with dynamic storage duration is: "<<*p<<'\n';

    delete p;
    return 0;
}









