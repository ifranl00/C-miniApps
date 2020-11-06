#include <iostream>

/* 4.Write  a  program  which  has  a  function  of  type  void  called  custommessage.
  The function  accepts  one  parameter  by  reference  to  const  of  type  std::string  and  outputs  a  custom  message  on  the  standard  output  using  that  parameter’s  value.
   Invoke  the function in main with a local string.   */


void custommessage(const std::string&arg);

int main()
{
    std::string str = "Program 4";
    custommessage(str);
    return 0;
}

void custommessage(const std::string&arg) {
    std::cout<<"Parameter by reference: "<<arg<<'\n';
}








