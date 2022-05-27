#include <iostream>
#include <conio.h>
#include <cstdlib>

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
    void prime_factors()
    {

        int small, large;
        if (a < b)
        {
            small = a;
            large = b;
        }
        else
        {
            small = b;
            large = a;
        }
        for (int i = 1; i <= 10; i++)
        {
            for (int j = 1; j <= 10; j++)
            {
                if ((small * i) == (large * j))
                {
                    cout << "The prime factor is " << (small * i) << endl;
                    exit(0);
                }
            }
        }
    }
};
int main()
{
    lcm l;
    l.get_values();
    l.prime_factors();
    return 0;
}