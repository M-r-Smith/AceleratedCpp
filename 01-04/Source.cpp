/*
What about this one? What if we change }} to };} in the third line from the end?
*/

#include <iostream>
#include <string>
using namespace std;

int main()
{
	{const string s = "a string";
	cout << s << endl;
	{const string s = "another string";
	cout << s << endl; }}

	return 0;
}

/*
Had to do a bit of reasearch...
However, similar to my last statement in 1-3, the statements are still within different curly braces. 
Eventhough one statement is nestled in the other it is in its own set of curly braces which makes it 
ok to have the same variable because it won't register as being similar.
*/