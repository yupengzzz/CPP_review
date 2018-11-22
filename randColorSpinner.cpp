// randColorSpinner.cpp
//
// Color Spinner ADT
//
// Characteristics:
//		Simulates a color spinner that can be spinned and generate a random
//		color in red, green, blue, yellow, and orange.
//
// Operations:
// int spin()
//		Preconditions: number holder n is declared
//		Postconditions: a random value between 1 and 5
//		Returns: the value generated
//
// string intToColor(int n)
//		Preconditions: n is assigned a value between 1 and 5
//		Postconditions: none
//		Returns: the color of the spinner

#include<iostream>
#include<string>
#include<stdlib.h> //srand, rand
#include<time.h> //time
using namespace std;

int spin(int n)
{
	srand(time(NULL));
	n = rand() % 5 + 1;
	return n;
}

string intToColor(int n)
{
	switch(n)
	{
	case 1:
		return("red");
	case 2:
		return("green");
	case 3:
		return("blue");
	case 4:
		return("yellow");
	case 5:
		return("orange");
	}
	return("0");
}

int main()
{
	int n = 0;
	string color = "0";
	char ans = '0';
	
	do
	{
		cout << "Press <s> to spin the wheel, or <e> to exit." << endl;
		cin >> ans;
		cin.ignore(100, '\n');
		if(ans == 'e')
			break;
		cin.clear();

		n = spin(n);
		color = intToColor(n);
		cout << "The color spinned is " << color << endl;
	}while(1);

	return 0;
}
