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
}