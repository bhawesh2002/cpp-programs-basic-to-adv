#include <iostream>

using namespace std;

class maximum
{
    int a, b, c;

public:
    void get_values()
    {
        cout << "Enter the value of a: ";
        cin >> a;
        cout << "Enter the value of b: ";
        cin >> b;
        cout << "Enter the value of c: ";
        cin >> c;
    }

    void max_value()
    {
        if (a > b && a > c)
            cout << a << " is the maximum of three" << endl;
        else if (b > a && b > c)
            cout << b << " is the maximum of three" << endl;
        else
            cout << c << " is the maximum of three" << endl;
    }
};

int main()
{
    maximum m1;
    m1.get_values();
    m1.max_value();
    return 0;
}