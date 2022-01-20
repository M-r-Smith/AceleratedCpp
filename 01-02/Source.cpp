/*
1-2
Are the following definitions valid? Why or why not?
*/

#include <iostream>
#include <string>
using namespace std;

const string exclam = "!";
const string message = "Hello" + ", world" + exclam;

/*
No this does not work because one of the first two strings being concatenated must be a string object.
https://stackoverflow.com/questions/6061648/concatenate-two-string-literals
*/