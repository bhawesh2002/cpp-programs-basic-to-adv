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

    void get_multiples()
    {
        cout << "Here are the first 10 multiples of " << a << ": " << endl;
        for (int i = 1; i <= 10; i++)
        {
            cout << i * a << " ";
        }
    }
};

int main()
{
case_block:
    cout << "\nENTER YOUR CHOICE:\n"
         << "1)Get factors\n"
         << "2)Get multiples\n"
         << "3)Calculate the LCM" << endl;
    int choice;
    cin >> choice;
    {
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
            factors q;
            q.get_values();
            q.get_multiples();
        }
        break;
        case 3:
        {
        }
        break;
        default:
        {
            cout << "Invalid Input" << endl;
        }
        }
    }
    cout << "Do You Wnat to Restart The Program(Y/N):";
    char y_n = getche();
    if (y_n == 'y' || y_n == 'Y')
    {
        goto case_block;
    }
    return 0;
}