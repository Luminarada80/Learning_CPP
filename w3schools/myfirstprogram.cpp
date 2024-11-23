// header file library to work with input and output objects
# include <iostream>
# include <string>

// Can use names for objects and variables from the standard library
using namespace std;

/* Multi-line comments use 
this format */

void learningBasics() {

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

  int myNewInt = 5;           // Integer (2 or 4 bytes)
  double myDoubleNum = 5.99;  // Double (8 bytes, 15 decimal digits)
  char myLetter = 'D';        // Character or ASCII value (1 byte)
  string myText = "Hello";    // String (text) (declare <string> lib in header)
  bool myBoolean = true;      // Boolean (1 byte)
  float myFloat = 0.12;        // Float (4 bytes, 6-7 decimal digits)

  // Generally good to use double rather than float, more precise

  // You can also use scientific notation with "e" for power of 10
  float f1 = 53e3;
  double d1 = 12E4;

  // Boolean takes true or false, returns 1 or 0

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

  // If you dont want existing variables to change, use constants
  const int constNum = 15; // will always be 15, cant change
  const int minutesPerHour = 60;
  const float pi = 3.14;

  // Cannot set a constant as a blank variable and add value later
  // const int minutesPerHour;
  // minutesPerHour = 60; error

}

void printStudentData() {
  // Student data
  int studentID = 15;
  int studentAge = 23;
  float studentFee = 75.25;
  char studentGrade = 'B';

  // Print variables
  cout << "Student ID: " << studentID << "\n";
  cout << "Student Age: " << studentAge << "\n";
  cout << "Student Fee: " << studentFee << "\n";
  cout << "Student Grade: " << studentGrade << "\n";
  
}

void calculateAreaRect() {
  // Create integer variables
  int length = 4;
  int width = 6;
  int area;

  // Calculate the area of a rectangle
  area = length * width;

  // Print the variables
  cout << "Length is: " << length << "\n";
  cout << "Width is: " << width << "\n";
  cout << "Area of the rectangle is: " << area << "\n";

}

void addUserInput() {
  int x;
  cout << "Type a number: "; // Type a number and press enter
  cin >> x; // Get user input from keyboard
  cout << "Your number is: " << x << endl;
}

void simpleCalculator() {
  int x, y;
  int sum;
  cout << "Type a number: ";
  cin >> x;
  cout << "Type another number: ";
  cin >> y;
  sum = x + y;
  cout << "Sum is: " << sum << endl;
}

int main() {
  // learningBasics();
  // printStudentData();
  // calculateAreaRect();
  // addUserInput();
  simpleCalculator();
  

  return 0; // Ends the main function
}





