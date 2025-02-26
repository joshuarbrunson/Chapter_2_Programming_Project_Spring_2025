// Chapter_2_Programming_Project.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

using namespace std;

int main()
{
    double growthRate = 1.5; 
    double fiveYearValue = growthRate * 5; // value of growth after 5 years
    double sevenYearValue = growthRate * 7; // Value of growth after 7 years
    double tenYearValue = growthRate * 10; // Valus of growth after 10 years

    cout << "The ocean level in five years will be " << fiveYearValue << " millimeters higher than the current level." << endl;
    cout << "The ocean level in seven years will be " << sevenYearValue << " millimeters higer than the current level." << endl;
    cout << "The ocean level in ten years will be " << tenYearValue << " millimeters than the current level." << endl;
}
