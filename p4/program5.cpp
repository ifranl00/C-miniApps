#include <iostream>

/* 5.Write  a  program  that  has  two  function  overloads.
 The  functions  are  called  division, and  both  accept  two  parameters.
  They  divide  the  parameters  and  return  the  result  to themselves.
   The first function overload is of type int and has two parameters of types int.
   The second overload is of type double and accepts two parameters of type double.
   Invoke the appropriate overload in main, first by supplying integer arguments and then the double arguments. Observe different results.   */


int division(int a, int b);
double division(double a, double b);


int main()
{
    int r2 = division(10,2);
    double r = division(21.0,2.5);
    std::cout<<"Result of the division of doubles: "<<r<<'\n';
    std::cout<<"Result of the division of int: "<<r2<<'\n';
    return 0;
}

int division(int a, int b) {

    int r = 0;

    r = a/b;

    return r;
}

double division(double a, double b) {

    double r = 0.0;

    r = a/b;

    return r;
}










