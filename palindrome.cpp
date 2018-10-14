/*
**Yupeng Zhao
**2018-10-14
**The palindrome snippet takes in a string of characters
and returns the reverse of the string truncated at the end.
The last letter of the string is not repeated.
Example: "abc" -> "abcba" not "abccba"
*/

#include<iostream>
#include<string>
using namespace std;

int main()
{
	string s1 = "0";
	string s2 = "0";
	cout << "Enter a string of characters, and <Enter>" << endl;
	cin >> s1;
	string prefixs1 = s1.substr(0,s1.length()-1);
	cout << "Prefix is " << prefixs1 << endl;
	string reverse = prefixs1;
	for(int i = 0; i < prefixs1.length(); i++)
	{
		reverse[prefixs1.length()-1-i] = prefixs1[i];
	}
	cout << "Reverse is " << reverse << endl;
	s2 = s1 + reverse;
	cout << "Palindrome is " << s2 << endl;

	return 0;
}
