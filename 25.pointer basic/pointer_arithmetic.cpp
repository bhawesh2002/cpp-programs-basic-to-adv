#include <iostream>

using namespace std;

int main()
{
    int x[5];
    int *ptr;
    ptr = x;
    cout << "Address of ptr = " << ptr << endl;
    *ptr = 10;
    cout << "value of ptr pointing to x[0] = " << *ptr << endl;
    ptr++;
    cout << "Address of ptr onn incrementation = " << ptr << endl;
}