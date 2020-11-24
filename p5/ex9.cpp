#include <iostream>

/*
9.Write a program that defines a class with two data members, a user-provided constructor,
 a user-provided move constructor, and a member function that prints the data.
  Invoke the move constructor in the main program.
   Print the moved-to object data fields.
*/

class MyClass{

    public:
       MyClass(int _a, double _b):a{_a},b{_b}{};
       MyClass& operator=(MyClass&& newObject){
        a = std::move(newObject.a);
        b = std::move(newObject.b);
        return *this;
       }
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
    MyClass o2{2,6.3};
    std::cout<<"-------Data of object 1--------"<<'\n';
    o1.printdata();
    std::cout<<"-------Data of object 2--------"<<'\n';
    o2.printdata();
    std::cout<<">>>>>>>Data of object 1 moved to object 2"<<'\n';
    o2 = std::move(o1);
    std::cout<<"------- new Data of object 2--------"<<'\n';
     o2.printdata();
    return 0;
}
