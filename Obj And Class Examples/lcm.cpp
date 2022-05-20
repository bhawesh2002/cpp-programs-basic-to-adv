#include <iostream> //basic input and output
#include <cstring>  // for string manipulation provided by cstring
#include <conio.h>  //console io

using namespace std; // using the standard namespace

class factors
{
    int a;

public:
    void get_values()
    {
        cout << "Enter the value of a: ";
        cin >> a;
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
        cout << endl;
    }
};

int main()
{
    cout << "ENTER YOUR CHOICE:\n"
         << "1)Get factors\n"
         << "2)Calculate the LCM" << endl;
    int choice;
    cin >> choice;
    switch (choice)
    {
    case 1:
    {
        factors q;
        q.get_values();
        q.get_factors();
    }
    break;
    case 2:
    {
        factors q1, q2;
        q1.get_values();
        q2.get_values();
    }
    }
    getche();
    return 0;
}