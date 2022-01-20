/*
1-1
Are the following definitions valid?
*/
#include <iostream>
#include <string>
using namespace std;

int main()
{
	const string hello = "Hello";
	const string message = hello + ", world" + "!";
	cout << message;
}

/*
Yes the definition is valid because the string hello is defined and then it is used properly within the string message,
which is also defined and constructed properly.
*/