/*
Change the framing program so that it uses a different amount of space to separate the sides from the greeting than it uses to separate the top and bottom boarders from the greeting.
*/

#include <iostream>
#include <string>
using namespace std;

int main()
{
	cout << "Please enter your first name: ";
	string name;
	cin >> name;

	//build the message that we intend to write
	const string greeting = "Hello, " + name + "!";
	const string spaces(greeting.size(), ' ');
	const string second = "*" + spaces + "*";
	const string first(second.size(), '*');

	//write it all
	cout << endl;
	cout << first << endl;
	cout << second << endl;
	cout << "*" << greeting << "*" << endl;
	cout << second << endl;
	cout << first << endl;

	return 0;
}