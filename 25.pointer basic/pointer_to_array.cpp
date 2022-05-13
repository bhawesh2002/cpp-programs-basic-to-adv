#include <iostream>

using namespace std;

int main()
{
    int num[5];
    int *p;
    p = num;
    cout << "&num\t" << &num << endl;
    *p = 10;
    cout << "Address where pointer points to\t" << p << endl;
    cout << "Value stored in it\t" << *p << endl;
    p++;
    *p = 20;
    cout << "Address where pointer points to\t" << p << endl;
    cout << "Value stored in it\t" << *p << endl;
    p++;
    *p = 30;
    cout << "Address where pointer points to\t" << p << endl;
    cout << "Value stored in it\t" << *p << endl;
    p++;
    *p = 40;
    cout << "Address where pointer points to\t" << p << endl;
    cout << "Value stored in it\t" << *p << endl;
    p++;
    *p = 50;
    cout << "Address where pointer points to\t" << p << endl;
    cout << "Value stored in it\t" << *p << endl;
    return 0;
}