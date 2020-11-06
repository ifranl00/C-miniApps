#include <iostream>

/* 2.Write   a   program   that   declares   and   defines   a   function   of   type   void   called printmessage().
 The function outputs a "Hello World from a function." message on the standard output. Call the function from main.  */
void printmessage();

int main()
{
    printmessage();
    return 0;
}

void printmessage() {

    std::cout<<"Hello World from a function."<<'\n';

}




