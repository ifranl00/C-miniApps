#include <iostream>
#include <vector>
/*
2. Write a program that defines a vector of integers. Erase the second element from the
vector. Print out the vector content using the range-based loop.
*/

int main()
{
    std::vector<int> a = {25,5,8,9,27};
    a.erase(a.begin()+1);

    for(int e: a){

        std::cout<<e<<'\n';
    }
    return 0;
}
