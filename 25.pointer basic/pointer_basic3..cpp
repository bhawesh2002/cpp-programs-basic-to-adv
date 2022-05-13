#include <iostream>

using namespace std;

int main()
{
    int a = 100, b = 200; // a and b are variables
    cout << "initial value of\n"
         << "a = " << a << endl; // print value of a
    cout << "initial value of \n"
         << "b = " << b << endl; // print value of a and b

    cout << "==========================================" << endl;
    int *p = &a; // p is a pointer to a
    int *q = &b; // q is a pointer to b
    *p += *q;    // add value of b to a
    cout << "Add initial value of 'b' to 'a'\n"
         << "a = " << a << endl; // print value of a
    cout << "b = " << b << endl; // print value of b
    *q -= *p;                    // subtract value of a from b
    cout << "==========================================" << endl;
    cout << "a = " << a << endl; // print value of a
    cout << "subtract value of 'a' from initial value of 'b'\n"
         << "b = " << b << endl; // print value of b

    *p = *q; // assign value of b to a
    cout << "==========================================" << endl;
    cout << "Assign the modified value of 'b' to 'a'\n"
         << "a = " << a << endl; // print value of a
    return 0;
}