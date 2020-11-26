#include <iostream>
#include <string>
/*
12.Write  a  program  that  can  throw  integer  and  double  exceptions  in  the  same  try  block.
 Implement the exception handling blocks for both exceptions.
*/

int main()
{
    try {
        int a = 1;
        double b = 2.5;
        std::cout<<"An integer exception is being thrown with value of 1!"<<'\n';
        throw a;
        std::cout<<"A double exception is being thrown with value of 2.5!"<<'\n';
        throw b;

    }catch(int e){
        std::cout<<"An integer exception with "<<e<<" value is caught and handled!"<<'\n';
    }catch(double e2){
        std::cout<<"A double exception with "<<e2<<" value is caught and handled!"<<'\n';
    }
    return 0;
}

