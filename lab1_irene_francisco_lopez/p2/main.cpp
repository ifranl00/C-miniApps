#include <iostream>


int main()
{
    double t = 0.0;
    double t2 = 0.0;
    std::cout << "Please, enter the temperature in celsius " << '\n';

    std::cin >> t;

    t2 = (t *(9.0/5.0))+ 32;
    std::cout << "Your entered temperature in Celsius: " << t << '\n';
    std::cout << "Temperature in Fahrenheit: " << t2 << '\n';
    return 0;
}
