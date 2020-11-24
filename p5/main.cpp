#include <iostream>

/*
7.Write a program that defines a class called MyClass, which has two private data members of type  int  and  double.
  Outside  the  class,  define  a  user-provided  constructor  accepting  two parameters. The constructor initializes both data members with arguments using the initializer. Outside the class, define a function called printdata() which  prints the values of both  data members.
*/

class MyClass{
    private:
        int a;
        double b;

    public:
       int getA{return a;}
       double getB{return b;}
       MyClass(int _a, double _b);
       void printdata();
};

MyClass::MyClass(int _a, double _b):a{_a},b{_b}{}
void printdata(){
    std::cout<<"Value of int: "<<a<<'\n';
    std::cout<<"Value of double: "<<b<<'\n';
}

int main()
{
    MyClass o();
    o.printdata();
    return 0;
}
