#include <iostream>
#include <map>

/*
9. Write a program that defines a map where keys are of type char and values are of type
int. Print out the map content.
*/
int main(){
    std::map<char,int> a = {{'f',12},{'p',5},{'l',8},{'o',9},{'t',57}};

    for(auto e: a){

        std::cout<<e.first<<","<<e.second<<'\n';
    }
}
