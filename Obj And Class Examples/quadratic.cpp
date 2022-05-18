#include <iostream>

using namespace std;

class quadratic
{
    int a, b, constant;
    string quad;

public:
    void get_values()
    {
        cout << "Enter the value of a: ";
        cin >> a;
        cout << "Enter the value of b: ";
        cin >> b;
        cout << "Enter the value of constant: ";
        cin >> constant;
    }

    void show_eqn()
    {
        cout << "The equation is: " << a << "x^2 + " << b << "x + " << constant << endl;
    }
};

int main()
{
    quadratic q1;
    q1.get_values();
    q1.show_eqn();
    return 0;
}