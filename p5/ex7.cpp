#include <iostream>

/*
7.Write a program that defines a class called MyClass, which has two private data members of type  int  and  double.
  Outside  the  class,  define  a  user-provided  constructor  accepting  two parameters.
   The constructor initializes both data members with arguments using the initializer.
    Outside the class, define a function called printdata() which  prints the values of both  data members.
*/

class MyClass{

    public:
       MyClass(int _a, double _b);
       void printdata();
    private:
        int a;
        double b;
};

MyClass::MyClass(int _a, double _b):a{_a},b{_b}{}

void MyClass::printdata(){
    std::cout<<"The value of int a is: "<<a<<'\n';
    std::cout<<"The value of double b a is: "<<b<<'\n';
}
int main()
{
    MyClass o{1,5.3};
    o.printdata();
    return 0;
}
