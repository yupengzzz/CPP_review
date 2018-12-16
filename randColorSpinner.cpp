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
//		Preconditions: number holder n is declared as static
//		Postconditions: a random value between 1 and 5
//		Returns: the value generated
//
// string intToColor(int n)
//		Preconditions: n is assigned a value between 1 and 5
//		Postconditions: none
//		Returns: the color of the spinner
//
// void autoSpin()
//		Preconditions: spin() is defined, and int-color correspondence is defined
//		Postconditions: all local variables in autoSpin() are destroyed after call

#include<iostream>
#include<string>
#include<stdlib.h> //srand, rand
using namespace std;

int spin()
{
	static int n = 0;
	srand(n);
	n = rand();
	int a = n % 5 + 1;
	return a;
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

void autoSpin()
{
	int i = 0; //counting number of times spinned
	int m = 0; //user entered number for times
	int a = 0;
	int red = 0, green = 0, blue = 0, yellow = 0, orange = 0;

	cout << "Enter the number of times for color spin: ";
	cin >> m;
	if(cin.fail())
		exit (1);

	for(i = 0; i < m; i++)
	{
		a = spin();
		if (a == 1)
			red++;
		else if (a == 2)
			green++;
		else if (a == 3)
			blue++;
		else if (a == 4)
			yellow++;
		else if (a == 5)
			orange++;
	}

	cout << "In a total of " << m << " spins, " << red << " are red," << endl
		<< green << " are green, " << blue << " are blue, " << yellow
		<< " are yellow, and " << orange << " are orange." << endl;
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

		n = spin();
		color = intToColor(n);
		cout << "The color spinned is " << color << endl;
	}while(1);

	autoSpin();

	return 0;
}
