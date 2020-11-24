#include <iostream>

/*
6.Write a program that defines a class called MyClass with a user-defined default constructor and user-defined destructor.
 Define both constructor and destructor outside the class.
  Both member functions will output a free to choose the text on the standard output. Create an object of a class in function main.
*/

class MyClass{

    public:
       MyClass();
       ~MyClass();
};

MyClass::MyClass() {
    std::cout<<"Constructor invoked"<<'\n';
}
MyClass::~MyClass() {
    std::cout<<"Destructor invoked"<<'\n';
}
int main()
{
    MyClass o;
    return 0;
}
