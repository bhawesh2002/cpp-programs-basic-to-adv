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
    *ptr = 20;
    cout << "value of ptr pointing to x[1] = " << *ptr << endl;
    ptr = &x[2];
    cout << "Address of ptr pointing  to x[2] = " << ptr << endl;
    *ptr = 30;
    cout << "value of ptr pointing to x[2] = " << *ptr << endl;
    ptr = x + 3;
    cout << "Address of ptr on assigning it x + 3 = " << ptr << endl;
    *ptr = 40;
    cout << "value of ptr pointing to x[3] = " << *ptr << endl;
    ptr = x;
    *(ptr + 4) = 50;
    cout << "Address of ptr = " << ptr;
    cout << "value of ptr pointing to x[4] = " << *(ptr + 4) << endl;
}