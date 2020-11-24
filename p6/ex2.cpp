#include <iostream>
#include <string>
/*
2.Write a program that checks how many times a function was called from the main program.
*/

void function(){
    static int c = 0;
    c++;
    std::cout<<"The function has been called "<<c<<" total times!"<<'\n';
}
int main()
{
   function();
   function();
    return 0;
}
