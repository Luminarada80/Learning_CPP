// header file library to work with input and output objects
# include <iostream>

// Can use names for objects and variables from the standard library
using namespace std;

/* Multi-line comments use 
this format */

int main() {

  // cout is used with the insertion operator (<<) to output text 
  // surround text with double quotes
  cout << "Hello World! \n"; //statements end with ;
  cout << "I am learning C++ \n";
  cout << "This adds an endline" << endl;

  // cout can also be used to print numbers and mathematical operations
  cout << 3 + 3 << endl;
  
  /* Variables: int, double (floats), char (letters), string, bool

  char types store single characters such as 'a' or 'B', surrounded
  by single quotes

  declare with type variableNmae = value;
  */

  int myNum = 15;
  cout << myNum << endl;

  // You can also assign variables without a value and assign later
  int myNum2;
  myNum2 = 15;
  cout << myNum2 << endl;

  double myFloatNum = 5.99;   // Integer
  char myLetter = 'D';        // Character
  string myText = "Hello";    // String (text)
  bool myBoolean = true;      // Boolean

  // Use the cout object to add variables to strings
  int myAge = 27;
  cout << "I am " << myAge << " years old.\n";

  // Declare more than one variable of the same type
  int x, y, z;
  x = 5;
  y = 6;
  int sum = x + y;
  cout << sum << endl;

  // Assign the same value to multiple variables at once
  x = y = z = 50;
  cout << x + y + z << endl;

  // Variables must be identified with unique names, called identifiers
  // Use camelCase for variables and functions
  // functions should start with a verb
  // Use PascalCase for classes

  return 0; // Ends the main function
}






