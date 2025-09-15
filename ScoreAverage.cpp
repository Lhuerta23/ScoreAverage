// ScoreAverage.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
/* File Name: ScoreAverage.cpp
* Programmer: Luis Huerta
* Requirements: 
* Ask for three scores and display the average.
*/

#include <iostream>
using namespace std;

int main()
{
	int score1, score2, score3, sum;
	double average;
		cout << "Please enter your first score:";
		cin >> score1;
		cout << "Please enter your second score:";
		cin >> score2; 
		cout << "Please enter your third score:";
		cin >> score3;
		sum = score1 + score2 + score3;
		average = sum/ 3.0;

		cout << "Your average is " << average; 
}

