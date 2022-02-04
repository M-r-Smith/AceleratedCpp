/*
Rewrite the framing program to ask the user to supply the amount of spacing to leave
between the frame and the greeting.
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

	//rewrite this part.
	//the number of blanks surrounding the greeting
	const int pad = 1;
	
	//total number of rows to write
	const int rows = pad * 2 + 3;

	//separate the output from the input
	cout << endl;

	//write rows rows of output
	int r = 0;

	//invariant: we have written r rows so far.
	while (r != rows) {
		//write a row of output
		cout << endl;
		++r;
	}


	return 0;
}