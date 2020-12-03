#include <iostream>
#include <vector>
#include <algorithm>

/*
4. Write a program that searches for a vector element using the std::find() algorithm
function. If the element has been found, delete it. Print out the vector content.
*/
int main(){
    std::vector<int> a = {12,5,8,9,57};
    auto result = std::find(a.begin(), a.end(), 8);

         for(int e: a){

            std::cout<<e<<'\n';
        }

        std::vector<int>::iterator pos = std::find(a.begin(), a.end(), 8);
        if (result!=a.end()){
            a.erase(pos);
            std::cout << "Element 8 found and it is deleted"<<'\n';
            for(int e: a){

                std::cout<<e<<'\n';
            }
        }else{
            std::cout << "Element not found in the vector";
        }
}
