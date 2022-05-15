#include <iostream>

using namespace std;

int main()
{
    char a = 'B';                              // a is a pointer to char
    char *ptr = &a;                            // ptr is a pointer to char
    char **ptr_ptr = &ptr;                     // ptr_ptr is a pointer to pointer to char
    cout << "a = " << a << endl;               // a = B
    cout << "ptr = " << ptr << endl;           // ptr = B
    cout << "ptr_ptr = " << ptr_ptr << endl;   // ptr_ptr = 0x7ffd9f8b8b00
    cout << "*ptr_ptr = " << *ptr_ptr << endl; // *ptr_ptr = 0x7ffd9f8b8b00
}