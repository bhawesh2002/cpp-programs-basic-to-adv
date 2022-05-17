// Fibonacci series using classes;

#include <iostream>
#include <conio.h>
using namespace std;

class series
{
    int terms;
    int a;
    int b;
    int sum;

public:
    series() // point to remember : Constructor dosent have a data dype
    {
        a = 0;
        b = 1;
    }
    int get_terms()
    {
        cout << "ENTER NO OF TERMS: ";
        cin >> terms;
        return terms;
    }

    void display_series()
    {
        cout << a << " + ";
        sum = a + b;
        a = b;
        b = sum;
    }

    void display_sum()
    {
        cout << "\nSUM = " << sum << endl;
    }
};

int main()
{
    series s1;
    int terms;
    terms = s1.get_terms();
    for (int i = 0; i < terms; i++)
    {
        s1.display_series();
    }
    s1.display_sum();

    cout << "PRESS ANY KEY TO END THE PROGRAM" << endl;
    getch();
    return 0;
}