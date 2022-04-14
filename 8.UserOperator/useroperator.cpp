/*Write a program to ask the user to input two integers and an operator. Based on the
operator (+,-,/,*,%) perform the desired operation and print the result
(use switch case) ?*/

#include <iostream> // for standard I/O(for cin and cout)

using namespace std;

int main()
{             // main function
    int a, b; // declaring variables
    cout << "Enter the first number: ";
    cin >> a;
    cout << "\nEnter the second number: ";
    cin >> b;
    char op; // declaring variable for storing user entered operator
    cout << "\nEnter the operator (+,-,/,*,%): ";
    cin >> op;  // prompting user to enter an operator
    switch (op) // switch case: execudes code based on the case entered
    {
    case '+': // if case is +
        cout << "Sum of " << a << " and " << b << " is " << a + b;
        break;
    case '-': // if case is -
        cout << "Difference of " << a << " and " << b << " is " << a - b;
        break;
    case '*': // if case is *
        cout << "Product of " << a << " and " << b << " is " << a * b;
        break;
    case '/': // if case is /
        cout << "Quotient of " << a << " and " << b << " is " << a / b;
        break;
    case '%': // if case is %
        cout << "Remainder of " << a << " and " << b << " is " << a % b;
        break;
    default: // if case is not +,-,*,/,%
        cout << "Invalid operator";
        break;
    }
    return 0;
}