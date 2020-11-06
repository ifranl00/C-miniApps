#include <iostream>
/* 1. Write a program that defines and initializes an array of five doubles. Change and print
the values of the first and last array elements. */

int main()
{
    double myArray[5] = {5.6,85.9,6.0,78.3,85.3};

    myArray[0] = 2.6;
    myArray[4] = 90.0;

    std::cout<<"The first element of the array is: " <<myArray[0]<<'\n';
    std::cout<<"The last element of the array is: " <<myArray[4]<<'\n';

    return 0;
}
