#include <iostream>
#include "myheader.h"
/*
1.Write a program that declares an arbitrary function in a header file.
 The header file is called myheader.h
 Define this function inside the main program source file called source.cpp.
  The main function is also located inside a source.cpp file.
   Include the header into our source file and invoke the function.
*/
int main()
{
    sampleFunction();
    return 0;
}

void sampleFunction() {

    std::cout<< "Function declared in header file is invoked" <<'\n';

}
