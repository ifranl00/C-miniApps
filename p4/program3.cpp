#include <iostream>

/* 3.Write a program which has a function of type int called multiplication accepting two int  parameters  by  value.
  The  function  multiplies  those  two  parameters  and  returns  a result to itself.
 Invoke the function in main and assign a result of the function to a local int variable.
  Print the result in the console.   */


int multiplication(int a, int b);

int main()
{
    int x = multiplication(2,3);
    std::cout<<"The multiplication result is: "<<x<<'\n';
    return 0;
}

int multiplication(int a, int b) {

    int result = 0;

    result = a*b;

    return result;
}







