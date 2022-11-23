// SwitchCase.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
using namespace std;

int main()
{
	/*C++ program to out put an appropriate full nameand grade of
	a student depending on marks entered*/
	
	//variable declaration
	string fName;
	int score;
	//get input from the user

	cout << "Please enter your full name.........";
	getline(cin, fName);
	cout << "Enter your score.........";
	cin >> score;
	
	if (score >= 70)//check whether the score is 70 and above
	{
		cout << fName << "\nGrade\tA";
	}
	  if (score > 59 && score < 70)//evaluates whether the score is at 60 and above and still below 70
		{
		cout << fName << "\nGrade\tB";
		}
	 else if (score > 49 && score < 60)//evaluates whether the score is between 49 and 60
	{
		cout << fName << "\nGrade\tC";
	}
	 else if (score > 39 && score < 50)//grade D is between 39 and 50
	{
		cout << fName << "\nGrade\tD";
	}
	 else if (score < 40 && score > 0) // grade F is less than 40 
	{
		cout << fName << "\nGrade\tF";
	}
	else //if  what is inputted a number 
	{
		cout << fName << "\nINVALID SCORE";
	}
}




