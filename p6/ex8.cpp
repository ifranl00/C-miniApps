#include <iostream>
#include <string>
/*
8.Write a program that defines an enum.
 Create an object of that enum as use it in a switch statement. Use the switch statement to print the value of an object.
*/

enum class Days {
    Monday,
    Tuesday,
    Wednesday,
    Thursday,
    Friday,
    Saturday,
    Sunday
};
int main()
{
    Days days = Days::Monday;
    switch(days){
        case Days::Monday:
            std::cout<<"Day is Monday"<<'\n';
            break;
        case Days::Tuesday:
            std::cout<<"Day is Tuesday"<<'\n';
            break;
        case Days::Wednesday:
            std::cout<<"Day is Wednesday"<<'\n';
            break;
        case Days::Thursday:
            std::cout<<"Day is Thrusday"<<'\n';
            break;
        case Days::Friday:
            std::cout<<"Day is Friday"<<'\n';
            break;
        case Days::Saturday:
            std::cout<<"Day is Saturday"<<'\n';
            break;
        case Days::Sunday:
            std::cout<<"Day is Sunday"<<'\n';
            break;
        default:
            break;
    }
    return 0;
}
