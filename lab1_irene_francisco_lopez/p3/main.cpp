#include <iostream>


int main()
{
    double mInches = 0.0;
    double mCm = 0.0;
    double mFoot = 0.0;
    double mYards = 0.0;
    double meters = 0.0;
    std::cout << "Please, enter the measurement in inches " << '\n';

    std::cin >> mInches;
    meters = mInches/39.37;
    mCm = 2.54*mInches;
    mFoot = mInches/12;
    mYards = mInches/36;

    std::cout << "Measurement in inches: " << mInches << '\n';
    std::cout << "Measurement in meters: " << meters << '\n';
    std::cout << "Measurement in centimeters: " << mCm << '\n';
    std::cout << "Measurement in foot: " << mFoot << '\n';
    std::cout << "Measurement in yards: " << mYards << '\n';
    return 0;
}
