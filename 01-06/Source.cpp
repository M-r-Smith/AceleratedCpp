/*
1-6
What does the following program do if, when it asks you for input, you type two names (for
example, Samuel Beckett)? Predict the behavior before running the program, then try it.
*/
#include <iostream>
#include <string>
using namespace std;

int main()
{
	cout << "What is your name? ";
	string name;
	cin >> name;
	cout << "Hello, " << name
		<< endl << "and what is yours? ";
	cin >> name;
	cout << "Hello,	" << name << "; nice to meet you too !" << endl;

	return 0;
}

/*
Prediction
This program will ask for your name.
Wait for you to enter your name.
Then it will output, "hello name and what is yours".
then you enter another name and it will say, 
"hello name nice to meet you too!"


*/