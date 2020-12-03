#include <iostream>
#include <vector>
/*
3. Write a program that defines a vector of integers. Erase the range of 3 elements
starting from the beginning of the vector. Print out the vector content using the rangebased loop.
*/

int main()
{
    std::vector<int> a = {25,5,8,9,27};
    a.erase(a.begin(),a.begin()+3);

    for(int e: a){

        std::cout<<e<<'\n';
    }
    return 0;
}
