#include <iostream>

/* 8.Write  a  program  that  defines  a  variable  of  type  int  called  x,  automatic  storage duration,  and  a  variable of  type  int*  which  points  to  an  object  with  dynamic storage duration. Both variables are in the same scope.  */


int main()
{
    int x = 893;
    int* p = new int;

    *p = x;

    std::cout<<"Value of the pointer: "<<*p<<'\n';

    delete p;
    return 0;
}









