#include <iostream> //preprocessor directive, instructs the preprocessor to include the iostream library

using namespace std; // we are using the standard namespace(simply,no need to use std::cout,use cout instead)

int main()
{ // main function, most important function in a program
    float length,breadth,height; // declaring variables for storing length,breadth and height of triangle
    cout << "Enter the dimensions of the triangle: " << endl; // prompting user to enter length
    cout << "length: ";
    cin >> length;
    cout << "breadth: ";
    cin >> breadth;
    cout << "height: ";
    cin >> height;
    float perimeter = length + breadth + height; // calculating perimeter using formaula
    cout << "The perimeter of the triangle is: " << perimeter << endl; // printing perimeter
    return 0; // returning 0 to the operating system
}
