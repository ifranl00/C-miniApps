#include <iostream>
#include <string>
/*
1.Write a program that defines a base class called Person.
 The class has the following members:
  – A data member of type std::string called name
  – A single parameter, user-defined constructor which initializes the name
  – A getter function of type std::string called getname(), which returns the name’s value
Then, write a class called Student, which inherits from the class Person.
The class Student has the following members:
    – An integer data member called semester
    – A user-provided constructor that initializes the name and semester fields
    – A getter function of type int called getsemester(), which returns the  semester’s value
*/

class Person{
    private:
        std::string name;
    public:
        Person(std::string _name):name{_name}{}
        std::string getname(){return name;}
};

class Student: public Person{
    private:
        int semester;
    public:
        Student(std::string _name, int _semester):Person::Person{_name},semester{_semester}{}
        int getsemester(){return semester;}

};
int main()
{
    Person p{"Xian Gar"};
    Student st{"Xian Gar",1};

    std::cout<<"Person name: "<<p.getname()<< " .Student name: "<<st.getname()<<" .Student semester: "<<st.getsemester()<<'\n';
    return 0;
}
