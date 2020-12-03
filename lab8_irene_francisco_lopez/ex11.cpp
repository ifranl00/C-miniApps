#include <iostream>
#include <map>

/*
11. Write a program that defines a map of integers and strings. Search for an element by
key using the map’s .find() member function. If the element is found, delete it. Print
out the map content.
*/
int main(){
    std::map<int,std::string> a = {{12,"f"},{5,"p"},{8,"l"},{9,"o"},{57,"t"}};

    int key = 8;
    auto founded = a.find(key);

    if(founded!=a.end()){
        std::cout<<"Element with 8 as a key has been found so it is being deleted!"<<'\n';
        a.erase(founded);
    }else{
        std::cout<<"Element with 8 as a key has not been found."<<'\n';
    }

    for(const auto& e: a){

        std::cout<<e.first<<","<<e.second<<'\n';
    }
}
