/*
Is this program valid? If so, what does it do?
If not, say why not, and rewrite it to be valid.
*/

#include <iostream>
#include <string>
using namespace std;

int main()
{
	{string s = "a string";
	{string x = s + ",really";
	cout << x << endl; }
	}
}

/*
	{string s = "a string";
	{string x = s + ",really";
	cout << s << endl; }
	cout << x << endl;
	}

	^^
	This version wanted to output the s string however the s string would
	have been outputted anyway through cout << x << endl. So I deleted cout << s << endl;
	and replaced it in the curly brace with the x variable.
*/