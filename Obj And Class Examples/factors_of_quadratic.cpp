#include <iostream> //basic input and output
#include <cstring>  // for string manipulation provided by cstring
#include <conio.h>  //console io

using namespace std; // using the standard namespace

class factors
{
    int a, b;
    int f1, f2;

public:
    void get_values()
    {
        cout << "Enter the value of a: ";
        cin >> a;
        cout << "Enter the value of b: ";
        cin >> b;
    }

    void get_factors()
    {
    }
};

int main()
{
    factors q;
    q.get_values();
    q.get_factors();
    return 0;
}