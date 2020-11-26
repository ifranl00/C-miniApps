#include <iostream>
/*
4.Write a program that defines a namespace called A, and another namespace called B,
 nested inside the namespace A. Declare a function inside a namespace B and define the function outside both namespaces.
 Invoke the function in the main program.
  Then, introduce the entire namespace B to the current scope and invoke the function.
*/

namespace A {
    namespace B {
         void sampleFunction();
    }
}

void A::B::sampleFunction() {

    std::cout<< "Function declared in nested namespace" <<'\n';

}
int main()
{
    A::B::sampleFunction();
    using namespace A::B;
    sampleFunction();
    return 0;
}
