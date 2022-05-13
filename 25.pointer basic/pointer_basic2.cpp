#include <iostream>

using namespace std;

int main()
{
    int amt = 1000;                                     // amount of money in bank
    int *p;                                             // pointer to integer
    p = &amt;                                           // assign address of amt to p
    amt += 100;                                         // add 100 to amt
    cout << "Amount of money in bank: " << *p << endl;  // print value stored in p
    *p -= 2000;                                         // assign value 2000 to p
    cout << "Amount of money in bank: " << *p << endl;  // print value stored in p
    cout << "Amount of money in bank: " << amt << endl; // print value stored in amt
    cout << "Address of amt: " << &amt << endl;         // print address of amt
    cout << "Address of p: " << p << endl;              // print address of p
    //both p and amt are pointing to same address
    return 0;
}