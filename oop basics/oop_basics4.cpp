// Constructors

#include <iostream>

using namespace std;

class test
{
    int a, b;

public:
    test() // constructer for test class and has the same name as that of the class
           // constructors are evoked by default when object fo class is created
    {
        a = 0;
        b = 0;
    }
    int sum() // public member function to add two private data members
    {
        return a + b;
    }
    void increment(int inc) // public member function to increment data members by inc
    {
        a += inc;
        b += inc;
    }
    void decrement(int dec) ////public member function to decrement data members by inc
    {
        a -= dec;
        b -= dec;
    }
    void display() // display values stored in a and b
    {
        cout << "a:" << a << endl;
        cout << "b:" << b << endl;
    }
};

int main()
{
    test t1;      // create a test class object
    t1.display(); // display values stored in a and b
    // o/p shows the value 0 for both the data members (a and b) even though we have not assigned the values to them
    // This is because counstructer is evoked by default when class object is created
    t1.increment(12); // increment value by 12
    t1.display();
    t1.decrement(15); // decrement value by 15
    t1.display();
    t1.sum();     // add a and b
    t1.display(); // display values stored in a and b
    return 0;
}