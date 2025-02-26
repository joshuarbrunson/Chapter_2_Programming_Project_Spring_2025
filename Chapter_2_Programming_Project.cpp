// Chapter_2_Programming_Project.cpp : This file contains the 'main' function. Program execution begins and ends there.
/* This program computes the distance that a car can travel in the town and on
* the highway based on the provided miles per gallon ratings*/

#include <iostream>
using namespace std;

int main()
{
	int tankCapacity = 20; //assign value of tankCapacity
	double mpgTown = 23.5; //assign value of mpg in town
	double mpgHighway = 28.9; // assign value of mpg on highway

	double distanceTown = tankCapacity * mpgTown; // calculates the distance the car can travel in the town
	double distanceHighway = tankCapacity * mpgHighway; // calculates the distance the car travel on the highway

	cout << "A car with a tank capacity of 20 gallons will last " << distanceTown << " miles while driving in the town." << endl; // prints the town distance
	cout << "A car with a tank capacity of 20 gallons will last " << distanceHighway << " miles while driving on the highway." << endl; //prints the highway distance
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
