#include <iostream>
/*
3.Write a program that declares a function inside a namespace and defines
the function outside the namespace.
 Invoke the function in the main program.
  Namespace and function names are arbitrary.
*/

namespace N {
    void sampleFunction();
}

void N::sampleFunction() {

    std::cout<< "Function declared inside namespace invoked" <<'\n';

}
int main()
{
    N::sampleFunction();
    return 0;
}
