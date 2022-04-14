/*Write a program to ask the user to input two integers and an operator. Based on the
operator (+,-,/,*,%) perform the desired operation and print the result
(use switch case) ?*/

#include <iostream>

using namespace std;

int main(){
    int a, b;
    cout << "Enter the first number: ";
    cin >> a;
    cout << "\nEnter the second number: ";
    cin >> b;
    char op;
    cout << "\nEnter the operator (+,-,/,*,%): ";
    cin >> op;
    switch (op)
    {
    case '+' :
        cout << "Sum of " << a << " and " << b << " is " << a + b;
        break;
    case '-' :
        cout << "Difference of " << a << " and " << b << " is " << a - b;
        break;
    case '*' :
        cout << "Product of " << a << " and " << b << " is " << a * b;
        break;
    case '/' :
        cout << "Quotient of " << a << " and " << b << " is " << a / b;
        break;
    case '%' :
        cout << "Remainder of " << a << " and " << b << " is " << a % b;
        break;
    default:
        cout << "Invalid operator";
        break;
    }
    return 0;
}