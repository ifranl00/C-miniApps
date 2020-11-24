#include <iostream>

/*
4.Write  a  program  that  defines  a  class  called  MyClass  with  one  member  function  called printmessage().
  Define  the  printmessage()  member  function  outside  the  class  and  have  it output the "Hello World." string.
  Create an instance of that class and use the object to call the member function.
*/

class MyClass{
    public:
       void printmessage();
};

void MyClass::printmessage(){
           std::cout<<"Hello World."<<'\n';
       }

int main()
{
    MyClass o;

    o.printmessage();

    return 0;
}
