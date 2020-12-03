#include <iostream>
#include <set>

/*
6. nWrite a program that defines a set and inserts two new values using the set’s .insert()
member function. Then, delete one arbitrary value from a set using the set’s .erase()
member function. Print out the set content afterward.
*/
int main(){
    std::set<int> a = {12,5,8,9,57};

    a.insert(85);
    a.insert(88);
    a.erase(12);

    for(auto e: a){

        std::cout<<e<<'\n';
    }
}
