/*
1-0.2
Compile, execute, and test the programs in this chapter.
pg.12
*/

//Ask for a person's name, and gernerate a framed greeting

#include <iostream>
#include <string>
using namespace std;

int main()
{
	cout << "Please enter your first name:";
	string name;
	cin >> name;

	//build the message that we intend to write
	const string greeting = "Hello, " + name + "!";

	//build the second and fourth lines of the output
	const string spaces(greeting.size(), ' ');
	const string second = "* " + spaces + " *";

	//build the first and fifth lines of the output
	const string first(second.size(), '*');

	//write it all
	cout << endl;
	cout << first << endl;
	cout << second << endl;
	cout << "* " << greeting << " *" << endl;
	cout << second << endl;
	cout << first << endl;

	return 0;
}