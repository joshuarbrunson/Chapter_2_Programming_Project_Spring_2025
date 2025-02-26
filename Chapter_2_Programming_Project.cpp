// Chapter_2_Programming_Project.cpp : This file contains the 'main' function. Program execution begins and ends there.
/* This programs approximates the number of people that drinks energy drinks.
I also approximates the number of people that prefer citrus flavored drinks*/

#include <iostream>
using namespace std;

int main()
{
	int surveyValue = 16500; //assigns survey value
	int energyDrinks = surveyValue * 0.15; //calculates the approximate number of people that drink one or more energy drinks a week
	int citrusDrinks = energyDrinks * 0.58; //calculates the approximate number of people that drink citrus drinks

	cout << "The approximate number of customers purchasing one or more energy drinks a week is " << energyDrinks << '.' << endl; // prints the engergy drinks value
	cout << "The approximate number of customers purchasign citrus-flavored energy drinks is " << citrusDrinks << '.' << endl; // prints the citrus drinks value

    return 0;
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
