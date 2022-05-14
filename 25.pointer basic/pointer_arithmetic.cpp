#include <iostream> //for basic i/o

using namespace std; // dont need to use std::

int main() // main function
{
    int x[5];                                                         // an array of 5 elements
    int *ptr;                                                         // pointer to integer
    ptr = x;                                                          // assing the address of x[0] to ptr
                                                                      //(Note we didnt used  '&' operator while assigning address of array to ptr)
    cout << "Address of ptr = " << ptr << endl;                       // print the address to which ptr points
    *ptr = 10;                                                        // assign ptr value 10,i.e indirectly assign 10 to x[0]
    cout << "value of ptr pointing to x[0] = " << *ptr << endl;       // print the value of *ptr
    ptr++;                                                            // increment the address of ptr; Formula = (ptr + size of data type * incremented value )
                                                                      // in this case (address ptr points to + size of int + 1)
    cout << "Address of ptr onn incrementation = " << ptr << endl;    // print the address to which ptr points to
    *ptr = 20;                                                        // assign value 20 to x[1] by assigning value to *ptr
    cout << "value of ptr pointing to x[1] = " << *ptr << endl;       // print the value of *ptr
    ptr = &x[2];                                                      // assign address of x[2] to ptr
                                                                      // Note: we used '&' operator to assign address of individual element of array
    cout << "Address of ptr pointing  to x[2] = " << ptr << endl;     // print the address of ptr
    *ptr = 30;                                                        // assign value to x[2]
    cout << "value of ptr pointing to x[2] = " << *ptr << endl;       // print the value assigned to *ptr
    ptr = x + 3;                                                      // set the address of ptr to x + 3;
                                                                      // Formula = (Address of x[0] + size fo int * 3)
                                                                      // Thus address assigned to ptr points to x[3]
    cout << "Address of ptr on assigning it x + 3 = " << ptr << endl; // print the address of ptr
    *ptr = 40;                                                        // assign value to x[3]
    cout << "value of ptr pointing to x[3] = " << *ptr << endl;       // print value of *ptr
    ptr = x;                                                          // assign ptr address of x[0]
    *(ptr + 4) = 50;                                                  // directly assifn ptr address of (x + 4) and assign it a value
    cout << "Address of ptr = " << ptr;                               // print the adress ptr points to
    cout << "value of ptr pointing to x[4] = " << *(ptr + 4) << endl; // print the value stored in *(ptr + 4)

    for (int i = 0; i < sizeof(x) / sizeof(int); i++) // print x
    {
        cout << "x[" << i << "] = " << x[i] << endl;
    }
}