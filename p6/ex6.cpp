#include <iostream>
#include <string>
/*
6.Write a program that defines a simple class template that has one data member of a generic type,
 a constructor, a getter function of a generic type, and a setter member function.
  Instantiate a class in the main() function for int and double types.
*/
template<typename T>

class ClassX {
    private:
        T a;
    public:
        ClassX(T _a):a{_a}{};
        T getA(){return a;}
        void setA(T newA){a = newA;}
};
int main()
{
    ClassX<int>ob1{5};
    ClassX<double>ob2{5.5};

    std::cout<<"int: "<<ob1.getA()<<'\n';
    std::cout<<"double: "<<ob2.getA()<<'\n';
    ob1.setA(7);
    ob2.setA(10.5);
    std::cout<<"int new value: "<<ob1.getA()<<'\n';
    std::cout<<"double new value: "<<ob2.getA()<<'\n';
    return 0;
}
