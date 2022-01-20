/*
Is the following program valid? If so, what does it do? If not, why not?
*/

#include <iostream>
#include <string>
using namespace std;

int main()
{
	{const string s = "a string";
	cout << s << endl; }

	{const string s = "another string";
	cout << s << endl; }
	return 0;
}

/*
Here we have two const strings, both with the variable s.
The reason why they are both different is because there are two sets of curly braces nestled within the main function.
In other words these are two different statements that don't overlap eachother because they are apart of different statements.
*/