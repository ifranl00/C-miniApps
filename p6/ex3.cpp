#include <iostream>
#include <string>
/*
3.Write a program that defines a class with one static data member of type std::string.
 Make the data member public. Define the static data member outside the class.
  Change the static data member value from the main() function.
*/

class ClassX{
    public:
        static std::string a;
};

std::string ClassX::a = "Galicia";
int main()
{

    ClassX::a = "Leon";
    std::cout<<"Static string: "<<ClassX::a;

    return 0;
}
