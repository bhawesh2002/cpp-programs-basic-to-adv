#include <iostream>

using namespace std;

int main()
{
    int num[5]; // declare an array of 5 integers
    int *p;     // declare a pointer to an integer
    p = num;    // assign the address of the first element of the array to the pointer
    //(Note that in the case of arrays we dont need to use & operater to assign the address of the first element of the array to the pointer)
    cout << "&num\t" << &num << endl;                         // print the address of the array
    *p = 10;                                                  // assign the value 10 to the first element of the array
    cout << "Address where pointer points to\t" << p << endl; // print the address where the pointer points to
    cout << "Value stored in it\t" << *p << endl;             // print the value stored in the address where the pointer points to
    p++;                                                      // increment the address of pointer by the size of integrer i.e by 4 bytes
    // In case of arrays on incrementing the address of the pointer it gets incremented by the size of datatype the array holds
    *p = 20;                                                  // assign the value 20 to the second element of the array
    cout << "Address where pointer points to\t" << p << endl; // print the address where the pointer points to
    cout << "Value stored in it\t" << *p << endl;             // print the value stored in the address where the pointer points to
    p++;                                                      // increment the address of pointer by the size of integrer i.e by 4 bytes
    *p = 30;                                                  // assign the value 30 to the third element of the array
    cout << "Address where pointer points to\t" << p << endl; // print the address where the pointer points to
    cout << "Value stored in it\t" << *p << endl;             // print the value stored in the address where the pointer points to
    p++;                                                      // increment the address of pointer by the size of integrer i.e by 4 bytes
    *p = 40;                                                  // assign the value 40 to the fourth element of the array
    cout << "Address where pointer points to\t" << p << endl; // print the address where the pointer points to
    cout << "Value stored in it\t" << *p << endl;             // print the value stored in the address where the pointer points to
    p++;                                                      // increment the address of pointer by the size of integrer i.e by 4 bytes
    *p = 50;                                                  // assign the value 50 to the fifth element of the array
    cout << "Address where pointer points to\t" << p << endl; // print the address where the pointer points to
    cout << "Value stored in it\t" << *p << endl;             // print the value stored in the address where the pointer points to
    return 0;
}