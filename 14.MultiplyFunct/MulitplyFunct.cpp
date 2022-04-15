#include <iostream>

float multiply(float a, float b); // foreward declaration to the function prototype containing return type, name and arguments

using namespace std;

int main()
{
    float product = 0, p, q;
    cout << "Enter two numbers: ";
    cin >> p >> q;
    product = multiply(p, q); // value returned by multiply function assigned to prdouct variable
    cout << "Product of " << p << " and " << q << " is " << product << endl;
    return 0;
}

float multiply(float a, float b) // function defination
{
    float multi = a * b; // stores the product of two numbers
    return multi;        // function returns value to assigned variabe(in this case the product variable in main function)
}