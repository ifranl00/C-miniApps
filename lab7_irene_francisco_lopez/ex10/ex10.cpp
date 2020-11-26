#include <iostream>
#include <string>
#include<memory>
/*
10.Write a program that defines a base class with a pure virtual member function.
 Derive two classes from the base class and override the virtual function behavior.
  Create two unique pointers of base class type to objects of these derived classes.
   Use the pointers to invoke the proper polymorphic behavior.
*/

class BaseClass {

    public:
        virtual void sampleFunction() = 0;
        virtual ~BaseClass(){}
};

class Derived: public BaseClass {

    public:
        void sampleFunction() override {
            std::cout<<"I am a function that overrides from a derived class. "<<'\n';
        }
};

class Derived2: public BaseClass {

    public:
        void sampleFunction() override {
            std::cout<<"I am a function that overrides from another derived class. "<<'\n';
        }
};
int main()
{
    std::unique_ptr<BaseClass> myP = std::make_unique<Derived>();
    std::unique_ptr<BaseClass> myP2 = std::make_unique<Derived2>();
    myP->sampleFunction();
    myP2->sampleFunction();
    return 0;
}

