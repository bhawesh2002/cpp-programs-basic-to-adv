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
    void factors()
    {
        int f1, f2;
        for (int i = 1; i <= constant; i++)
        {
            for (int j = 2; j <= constant; j++)
            {
                if (i * j == constant)
                {
                    f1 = i;
                    f2 = j;
                }
            }
        }
        cout << "Factors are : " << f1 << " and " << f2 << endl;
    }
    void roots()
    {
        if ((b * b) - (4 * a * constant) < 0)
            cout << "The equation has no real roots" << endl;
        else if ((b * b) - (4 * a * constant) == 0)
        {
            cout << "The equation has one real root" << endl;
            /*r1 = -b + sqrt((b * b) - (4 * a * constant)) / (2 * a);
            r2 = -b - sqrt((b * b) - (4 * a * constant)) / (2 * a);*/
            show_roots();
        }
        else if ((b * b) - (4 * a * constant) > 0)
        {
            cout << "The equation has two real roots" << endl;
            /*r1 = -b + sqrt((b * b) - (4 * a * constant)) / (2 * a);
            r2 = -b - sqrt((b * b) - (4 * a * constant)) / (2 * a);*/
            show_roots();
        }
    }
};

int main()
{
    quadratic q1;
    q1.get_values();
    q1.show_eqn();
    q1.factors();
    return 0;
}