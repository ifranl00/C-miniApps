#include <iostream>
#include <vector>
#include <string>

int main()
{
    int num;
    std::vector<int> numbers;
    std::cout << "Please enter four integers: "<< '\n';

    int sum = 0;
    double avg = 0.0;

    for (int i = 0; i < 4; i++) {
        std::cin >> num;
        numbers.insert(numbers.end(),num);
        sum += numbers[i];

        if(i !=3) {
            std::cout << "Please enter the "<< i+2 << " integer "<< '\n';
        }
    }

    avg = sum/4;
    std::cout <<"The sum of ";
    for (int x = 0; x < 3; x++) {
            std::cout <<numbers[x]<< " and ";
    }
    std::cout <<numbers[3]<< " is: " << sum << '\n';

    std::cout <<"The avg of ";
    for (int f = 0; f < 3; f++) {
            std::cout <<numbers[f]<< " and ";
    }
    std::cout <<numbers[3]<< " is: " << avg << '\n';

    return 0;
}

