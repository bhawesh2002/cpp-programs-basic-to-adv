#include <iostream>
#include <conio.h>

using namespace std;

class lcm
{
    int a;
    int b;

public:
    void get_values()
    {
        cout << "Enter the value of a: ";
        cin >> a;
        cout << "Enter the value of b: ";
        cin >> b;
    }
};
int main()
{
    lcm l;
    l.get_values();
    return 0;
}