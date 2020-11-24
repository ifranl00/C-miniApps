#include <iostream>

/*
8.Write a program that defines a class called MyClass with arbitrary data fields.
 Write a user-defined constructor with parameters that initializes data members.
  Write a user- defined copy constructor which copies all the members.
   Make one object of the class called o1 and initialize it with values.
    Make another object of a class called o2 and initialize it with object o.
     Print data for both objects.
*/

class MyClass{

    public:
       MyClass(int _a, double _b):a{_a},b{_b}{};
       MyClass(const MyClass& rhs):a{rhs.a},b{rhs.b}{};
       void printdata();
    private:
        int a;
        double b;
};



void MyClass::printdata(){
    std::cout<<"The value of int a is: "<<a<<'\n';
    std::cout<<"The value of double b a is: "<<b<<'\n';
}
int main()
{
    MyClass o1{1,5.3};
    MyClass o2 = o1;
    std::cout<<"Data of object 1"<<'\n';
    o1.printdata();
    std::cout<<"Data of object 2"<<'\n';
    o2.printdata();
    return 0;
}
