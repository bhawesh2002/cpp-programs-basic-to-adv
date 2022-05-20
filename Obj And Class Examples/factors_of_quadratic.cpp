#include <iostream> //basic input and output
#include <cstring>  // for string manipulation provided by cstring
#include <conio.h>  //console io

using namespace std; // using the standard namespace

class eqn
{
    int a, b, constant;
    int f1, f2;
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
    void factors()
    {
        for (int i = 1; i <= constant; i++)
        {
            for(int j = 2; j <= constant; j++)
            {
                if(i * j == constant)
                {
                    f1 = i;
                    f2 = j;
                    cout << "(f1,f2)" << "(" << f1 << "," << f2 << ")" << endl;
                }
            }
        }
    }
};

int main()
{
    eqn q;
    q.get_values();
    q.show_eqn();
    cout << "factors are: " << endl;
    q.factors();
    return 0;
}