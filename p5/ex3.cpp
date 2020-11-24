#include <iostream>

/*
3. Write a program that defines a class called MyClass with one member function called
printmessage(). Define the printmessage() member function inside the class and make it output
the “Hello World” string. Create an instance of that class and use the object to call the class
member function.
*/

class MyClass{
    public:
       void printmessage(){
           std::cout<<"Hello World"<<'\n';
       }
};

int main()
{
    MyClass o;

    o.printmessage();

    return 0;
}
