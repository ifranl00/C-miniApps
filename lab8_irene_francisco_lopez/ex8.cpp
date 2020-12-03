#include <iostream>
#include <set>

/*
8. Write a program that searches for a particular value in a set using the set’s .find()
member function. If the value is found, delete it. Print out the set content.
*/
int main(){
    std::set<int> a = {12,5,8,9,57};

    int valueSearched = 8;
    auto valueFound = a.find(valueSearched);

    if(valueFound != a.end()){
        std::cout<<"8 founded in the set so it is being deleted."<<'\n';
        a.erase(valueFound);
    }else{
         std::cout<<"8 not founded in the set."<<'\n';
    }

    for(auto e: a){

        std::cout<<e<<'\n';
    }
}
