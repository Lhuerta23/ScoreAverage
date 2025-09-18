/* File Name: ScoreAverage.cpp
* Programmer: Luis Huerta
* Date: September 18, 2025
* Requirements: Get the average of five different variables.
*/

#include <iostream>
using namespace std;

int main()
{
	int score1 = 28;
	int score2 = 32;
	int score3 = 37;
	int score4 = 24;
	int score5 = 33;

	int sum = score1 + score2 + score3 + score4 + score5;
	double average = sum/ 5.0;

	cout << "Your average is " << average; 

		return 0;
}

