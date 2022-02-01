/*
2-1
Change the framing program so that it writes its greeting with no separation from the frame.
*/

#include <iostream>
#include <string>
using namespace std;

int main()
{
	//ask for the person's name
	cout << "Please enter your first name: ";

	//read the name
	string name;
	cin >> name;

	//build the message that we intend to write
	const string greeting = "Hello, " + name + "!";

	//we have to rewrite this part...
	//write the first and third lines of output
	const string spaces(greeting.size(), '*');
	const string first = "*" + spaces + "*";

	cout << endl;
	cout << first << endl;
	cout << "*" << greeting << "*" << endl;
	cout << first << endl;

	return 0;
}