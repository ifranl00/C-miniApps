#include <iostream>
#include <string>
/*
7.Write a program that defines a scoped enum representing days of the week.
 Create an object of that enum, assign it a value, check if the value is Monday, if it is, change the object value to another enum value.
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
   Days dayToCheck = Days::Monday;
   std::cout<<"Day to check is Monday"<<'\n';

   if(dayToCheck == Days::Monday ){
      dayToCheck = Days::Saturday;
    }
    std::cout<<"Day to check now is Saturday now "<<'\n';
    return 0;
}
