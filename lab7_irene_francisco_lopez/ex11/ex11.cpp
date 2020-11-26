#include <iostream>
#include <string>
/*
11.Write a program that throws and catches an integer exception.
 Handle the exception and print its value:
*/

int main()
{
    try {
        int a = 1;
        std::cout<<"An integer exception is being thrown with value of 1!"<<'\n';
        throw a;

    }catch(int e){
        std::cout<<"An integer exception with "<<e<<" value is caught and handled!"<<'\n';
    }
    return 0;
}

