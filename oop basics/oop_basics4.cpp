// Constructors

#include <iostream>

using namespace std;

class test
{
    int a, b;

public:
    test()
    {
        a = 0;
        b = 0;
    }
    int sum()
    {
        return a + b;
    }
    void increment(int inc)
    {
        a += inc;
        b += inc;
    }
    void decrement(int dec)
    {
        a -= dec;
        b -= dec;
    }
    void display()
    {
        cout << "a:" << a << endl;
        cout << "b:" << b << endl;
    }
};

int main()
{
    test t1;
    t1.display();
    t1.increment(12);
    t1.display();
    t1.decrement(15);
    t1.display();
    t1.sum();
    t1.display();
    return 0;
}