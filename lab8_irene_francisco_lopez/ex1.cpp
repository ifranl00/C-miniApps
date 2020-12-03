#include <iostream>
#include <vector>
/*
1. Write a program that defines a vector of integers. Insert two elements into a vector.
Print out the vector content using the range-based loop.
*/

int main()
{
    std::vector<int> a = {25,5,8,9,27};
    a.push_back(19);
    a.push_back(67);

    for(int e: a){

        std::cout<<e<<'\n';
    }
    return 0;
}
