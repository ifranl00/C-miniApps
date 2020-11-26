#include <iostream>
#include <string>
#include<memory>
/*
8.Write a program that defines three shared pointers pointing at the same object of type int.
 Create the first pointer through an std::make_shared function.
  Create the remaining pointers by copying the first pointer.
   Access the pointed-to object through all the pointers.
*/


int main()
{
    std::shared_ptr<int> myP1 = std::make_shared<int>(44);
    std::shared_ptr<int> myP2 = myP1;
    std::shared_ptr<int> myP3 = myP1;

    std::cout<<"Value pointed by our first pointer: "<<*myP1<<'\n';
    std::cout<<"Value pointed by our second pointer: "<<*myP2<<'\n';
    std::cout<<"Value pointed by our third pointer: "<<*myP3<<'\n';
    return 0;
}

