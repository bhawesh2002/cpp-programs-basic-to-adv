#include <iostream> //basic input and output
#include <cstring>  // for string manipulation provided by cstring
#include <conio.h>  //console io

using namespace std; // using the standard namespace

class factors
{
    int a, b;

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
        cout << "factors of " << a << " are:" << endl;
        for (int i = 1; i <= a; i++)
        {
            for (int j = 1; j <= a; j++)
            {
                if (i * j == a)
                {
                    cout << "(" << i << "," << j << "),";
                }
            }
        }
    }
};

int main()
{
    factors q;
    q.get_values();
    q.get_factors();
    getche();

    return 0;
}