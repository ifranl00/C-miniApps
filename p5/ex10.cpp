#include <iostream>

/*
10. Write a program that overloads arithmetic operator – in terms of a compound arithmetic
operator -=. Print out the values of the resulting object member fields.
*/

class MyClass{
    public:
        void printdata(){
            std::cout<<"Value of int a "<<a<<'\n';
            std::cout<<"Value of double b "<<b<<'\n';
        }
        MyClass(int aa, double bb):a{aa},b{bb}{}
        MyClass& operator-=(const MyClass& rhs) {
            this->a -= rhs.a;
            this->b -= rhs.b;
            return *this;
        }

        friend MyClass operator-(MyClass lhs, const MyClass& rhs) {
            lhs -= rhs;
            return lhs;
        }

    private:
        int a;
        double b;
};


int main()
{
    MyClass o{10,10.0};
    MyClass o2{3,3.0};
    o.printdata();
    o2.printdata();
    MyClass o3 = o - o2;
    std::cout<<"Result: "<<'\n';
    o3.printdata();
    return 0;
}
