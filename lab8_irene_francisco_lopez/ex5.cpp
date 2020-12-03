#include <iostream>
#include <set>

/*
5. Write a program that defines a set of integers. Print out the set content and observe the
following: the data is sorted, regardless of how we defined the set. This is because
internally, std::set is a sorted container that holds unique values.
*/
int main(){
    std::set<int> a = {12,5,8,9,57};

    for(auto e: a){

        std::cout<<e<<'\n';
    }
}
