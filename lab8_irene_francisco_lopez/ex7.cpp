#include <iostream>
#include <set>

/*
7. Write a program that defines a set of integers and utilizes the set’s member function to
check the set’s size, check whether it is empty and clear the set’s content.
*/
int main(){
    std::set<int> a = {12,5,8,9,57};

    std::cout<<"The size of the set is: "<<a.size()<<'\n';

    if(a.empty()){
        std::cout<<"The set is empty so no need to clear its content."<<'\n';
    }else{
        std::cout<<"The set is not empty so its content is going to be cleared."<<'\n';
        a.clear();
    }
    for(auto e: a){

        std::cout<<e<<'\n';
    }
}
