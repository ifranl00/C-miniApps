#include <iostream>

/*
5.Write a program that defines a class called MyClass with one private data member of type int called x and two member functions.
 The first member function called setx(int myvalue) will set the value of x to its parameter myvalue.
  The second member function is called getx(), is of type int and returns a value of x.
   Make an instance of the class and use the object to access both member functions.
*/

class MyClass{
    private:
        int x;
    public:
       setx(int myvalue){x = myvalue;}
       int getx(){return x;}
};
int main()
{
    MyClass o;

    o.setx(8);
    std::cout<<"Value of x setted to 8 is: "<<o.getx()<<'\n';

    return 0;
}

