#include <iostream> //preprocessor directive, instructs the preprocessor to include the iostream library

#define PI 3.1426; // define PI as 3.14 (PI is a constant, can be used anywhere in the program)

using namespace std; // we are using the standard namespace(simply,no need to use std::cout,use cout instead)

int main()
{                                                          // main function, most important function in a program
    float radius{0};                                       // using brace initialization to initialize radius to 0
    cout << "Enter the radius of the circle: ";            // prompting user to enter radius
    cin >> radius;                                         // accepting radius from user
    float area = (radius * radius) * PI;                   // calculating area using formaula
    cout << "The area of the circle is: " << area << endl; // printing area
    return 0;                                              // returning 0 to the operating system
}