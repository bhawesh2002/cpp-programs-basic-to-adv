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
    void get_prime_factors()
    {
        for (int i = 2; i <= a; i++)
        {
            if (a % i == 0)
            {
                cout << i << " ";
                a = (a / i);
                i = 2;
            }
        }

        cout << endl;
    }
};

int main()
{
case_block:
    cout << "\nENTER YOUR CHOICE:\n"
         << "1)Get factors\n"
         << "2)Get Prime Factors\n"
         << "3)Get multiples\n"
         << "4)Calculate the LCM" << endl;
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
            q.get_prime_factors();
        }
        break;
        case 3:
        {
            factors q;
            q.get_values();
            q.get_multiples();
        }
        break;
        case 4:
        {
            factors q1, q2;
            q1.get_values();
            q2.get_values();
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