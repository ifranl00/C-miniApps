#include <iostream>
#include <string>
/*
5.Write a program that defines a template for a function that sums two numbers.
 Numbers are of the same generic type T and are passed to function as arguments.
  Instantiate the function in main() using int and double types.
*/
template<typename T, typename T2>

T2 fAdd(T t1, T2 t2) {

    T2 r;

    std::cout<<"int number: "<<t1<<'\n';
    std::cout<<"DOUBLE number: "<<t2<<'\n';

    r = t1+t2;
    return r;

}
int main()
{
    int a = 10;
    double b = 5.5;
    double add = fAdd<int,double>(a,b);
    std::cout<<"Addition: "<<add<<'\n';
    return 0;
}
