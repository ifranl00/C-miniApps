#include <iostream>
#include <string>
#include<memory>
/*
9.Write  a  program  that  defines  a  base  class  with  a  pure  virtual  member  function.
  Create  a derived class that overrides a virtual function in the base class.
  Create a polymorphic object of a derived class through a unique pointer to a base class.
   Invoke the overridden member function through a unique pointer.
*/

class BaseClass {

    public:
        virtual void sampleFunction() = 0;
        virtual ~BaseClass(){}
};

class Derived: public BaseClass {

    public:
        void sampleFunction() override {
            std::cout<<"I am a function that overrides. "<<'\n';
        }
};
int main()
{
    std::unique_ptr<BaseClass> myP = std::make_unique<Derived>();
    myP->sampleFunction();
    return 0;
}

