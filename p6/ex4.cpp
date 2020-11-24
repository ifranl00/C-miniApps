#include <iostream>
#include <string>
/*
4.Write a program that defines a class with one static member function and one regular member function.
 Make the functions public. Define both member functions outside the class.
Access both functions in the main().
*/

class ClassX{
    public:
        static void f1();
        void f2();
};

void ClassX::f1(){
    std::cout<<"I am the static function!"<<'\n';
}

void ClassX::f2(){
     std::cout<<"I am the regular function!"<<'\n';
}
int main()
{

   ClassX::f1();

   ClassX o;
   o.f2();

    return 0;
}
