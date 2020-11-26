#include <iostream>
#include <string>
#include<memory>
/*
7.Write a program that defines a class with two data members, a user-defined constructor,
 and one member function.
 Create a unique pointer to an object of a class.
  Use the smart pointer to access the member function.
*/

class X{

    private:

        int a;
        double b;

    public:

        X(int _a, double _b):a{_a},b{_b}{}

        void sampleFunction(){
            std::cout<<"Value of a: "<<a<<'\n';
             std::cout<<"Value of b: "<<b<<'\n';
        }
};

int main()
{
    std::unique_ptr<X> myP = std::make_unique<X>(45,3.29);
    myP->sampleFunction();
    return 0;
}

