#include <iostream>

struct Test // Test is a structure
{
    int a;
    char b;
};

using namespace std;

int main()
{
    Test test;                    // test is a variable of type Test
    cout << sizeof(test) << endl; // print size of test
    
    // Note that the size of the test variable is 8 bytes a/c to the compiler.
    // It should have been 5 bytes a/c to us.
    // Reason behind this is that the compiler allign the size of any variable to nearest multiple of 4.
}