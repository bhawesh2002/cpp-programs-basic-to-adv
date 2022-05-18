#include <iostream>
#include <cmath>
using namespace std;

class quadratic
{
    int a, b, constant;
    int r1, r2;
    string quad;

    void show_roots()
    {
        cout << "The factors are: " << r1 << " and " << r2 << endl;
    }

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
    void roots()
    {
        if ((b * b) - (4 * a * constant) < 0)
            cout << "The equation has no real roots" << endl;
        else if ((b * b) - (4 * a * constant) == 0)
        {
            quad = "The equation has one real root";
            r1 = -b + sqrt((b * b) - (4 * a * constant)) / (2 * a);
            r2 = -b - sqrt((b * b) - (4 * a * constant)) / (2 * a);
            cout << "r1: " << r1 << endl;
            cout << "r2: " << r2 << endl;
        }
        else if ((b * b) - (4 * a * constant) > 0)
        {
            quad = "The equation has two real roots";
            r1 = -b + sqrt((b * b) - (4 * a * constant)) / (2 * a);
            r2 = -b - sqrt((b * b) - (4 * a * constant)) / (2 * a);
            show_roots();
        }
    }
};

int main()
{
    quadratic q1;
    q1.get_values();
    q1.show_eqn();
    q1.roots();
    return 0;
}