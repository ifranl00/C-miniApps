#include <iostream>
#include <map>

/*
10. Write a program that defines a map of strings and integers. Insert an element into
a map using the map’s .insert() member function. Then use the map’s operator [] to
insert another key-value element into a map. Print the map content afterward.
*/
int main(){
    std::map<std::string,int> a = {{"f",12},{"p",5},{"l",8},{"o",9},{"t",57}};
    a.insert({"radio",90});
    a["pineapple"] = 0;

    for(const auto& e: a){

        std::cout<<e.first<<","<<e.second<<'\n';
    }
}
