// Destructors

#include <iostream>

using namespace std;

class test
{
    int a;

public:
    test()
    {
        a = 10;
        cout << "Constructor for the test class" << endl;
    }

    void display()
    {
        cout << "a = " << a << endl;
    }

    ~test() // syntax fror destructor ~classame();
    // destructor is used to free up the memory allocated to the object once the object goes out of scope

    {
        cout << "Destructor for the test class" << endl;
    }
};

int main()
{
    test t1;
    t1.display();
    return 0;
}